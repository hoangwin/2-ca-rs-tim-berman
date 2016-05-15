package com.megagame.fishrescue;



import java.io.IOException;
import java.io.InputStream;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;
import org.xmlpull.v1.XmlPullParserFactory;

import com.megagame.fishrescue.actor.Actor;

import android.app.Activity;
import android.content.res.AssetManager;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.Paint.Style;
import android.graphics.Point;
import android.os.Bundle;
import android.util.Log;
import android.view.View;

public class Sprite
{
	private String ImageName;
	private Bitmap tileSheet; // hold image
	public int currentAnimation = 0;// = "idle"; // current animation sequence
	private int currentFrame = 0; // current frame being played
	private int xpos = 0; // x position
	private int ypos = 0; // y position
	private int waitDelay = 0; // delay before the next frame
	// public static Paint paint = new Paint();
	// Class contains Information about one frame
	int loadType = 0; // 0 = load image name//1 load num of
	// 2. load module
	Module[] modules;
	Frame[] frames;
	Anim[] anims;
	boolean canLoop = false;
	boolean ShowLastFrame = false;
	int modulesLen = 0;
	int frameLen = 0;
	int animLen = 0;
	public static Paint paint = new Paint();
	// Frame
	public static Matrix matrix = new Matrix();
	public static View view = null;
	public static Activity activity = null;

	public static void initSprite(Activity _activity, View _view)
	{
		activity = _activity;
		view = _view;
	}

	public Sprite(String path, boolean isAurora)
	{
		if (activity == null || view == null)
			Log.e("Error : ", "Sprite Engine is not init. Please call initSprite(). please call it in onCreate(Bundle savedInstanceState)");

		
			if (isAurora)
				loadSpriteAurora(path);
			else
				loadSprite(path);
		
	}
	public void setPos(int x, int y) {
		xpos = x;
		ypos = y;
	}
	public Sprite(String path)
	{
		if (activity == null || view == null)
			Log.e("Error : ", "Sprite Engine is not init. Please call initSprite(). please call it in onCreate(Bundle savedInstanceState)");

		loadSprite(path);

		// TODO Auto-generated catch block
		// TODO Auto-generated catch block

	}

	private class Module
	{
		// public String name = "NO_NAME";
		int id;
		int type;
		int color;
		public int x, y, width, height;
		// public Rect rect = new Rect();

		public Bitmap image = null;

		public Module(int _id, int _type, int _color, int _x, int _y, int _w, int _h)
		{
			id = _id;
			type = _type;
			color = _color;
			x = _x;
			y = _y;
			width = _w;
			height = _h;
			// image = Bitmap.createImage(width, height);
			if (type == 0)
				image = Bitmap.createBitmap(tileSheet, x, y, width, height, null, false);
		}

		public void draw(Canvas g, int x, int y, int flag)
		{
			// now flag is dont use
			if (type == 0)
				g.drawBitmap(image, x, y, null);
			else if (type == 1) {
				paint.setStyle(Style.STROKE);
				paint.setColor(color);
				g.drawRect(x, y, x + width, y + height, paint);
			} else if (type == 2) {
				paint.setStyle(Style.FILL);
				paint.setColor(color);
				g.drawRect(x, y, x + width, y + height, paint);
			}
		}
	}

	public class Frame
	{
		// frame is array of module
		int id;
		int numofModule;
		int[] arrayModuleIndex;
		int[] arrayModuleID;
		int[] postionX;
		int[] postionY;
		int[] flags;

	}

	public class Anim
	{
		// frame is array of module
		int id;
		int numOfFrame;
		int[] arrayFrameIndex;
		int[] arrayFrameID;
		int[] postionX;
		int[] postionY;
		int[] timeDelay;
	}

	// hold list frame of one animation

	public Sprite()
	{
		// TODO Auto-generated constructor stub
	}

	public int searchIndexInArrayModule(int m_int, Module[] array)
	{// here
		for (int i = 0; i < array.length; i++) {
			if (array[i].id == m_int)
				return i;
		}
		return -1;
	}

	public int searchIndexInArrayFrame(int m_int, Frame[] array)
	{// here
		for (int i = 0; i < array.length; i++) {
			if (array[i].id == m_int)
				return i;
		}
		return -1;
	}

	public Module loadOneModule(String strBuilder)
	{
		// MD 0x1000 MD_IMAGE 0 9 4 60 60
		// strBuilder ==
		Module mod = null;
		int index1, index2;
		String line = "";
		int id, x, y, w, h;
		// id
		index1 = 5;// strBuilder.indexOf("MD 0x");
		index2 = strBuilder.indexOf("MD_IMAGE");
		line = strBuilder.substring(index1, index2 - 1);
		id = Integer.parseInt(line, 16);
		// delete text is dont use //con lai 9 4 60 60
		index1 = strBuilder.indexOf("MD_IMAGE 0");
		strBuilder = strBuilder.substring(index1 + "MD_IMAGE 0".length());
		strBuilder = strBuilder.trim();// 9 4 60 60
		// x
		index1 = strBuilder.indexOf(" ");
		line = strBuilder.substring(0, index1);
		x = Integer.parseInt(line);
		// y
		index2 = strBuilder.indexOf(" ", index1 + 1);
		line = strBuilder.substring(index1 + 1, index2);
		y = Integer.parseInt(line);
		// w
		index1 = strBuilder.indexOf(" ", index2 + 1);
		line = strBuilder.substring(index2 + 1, index1);
		w = Integer.parseInt(line);
		// h
		index2 = strBuilder.indexOf(" ", index1 + 1);
		if (index2 > 0) {
			line = strBuilder.substring(index1 + 1, index2);
			h = Integer.parseInt(line.trim());
			line = strBuilder.substring(index2 + 1);
			line.trim();
		} else {
			line = strBuilder.substring(index1 + 1);
			h = Integer.parseInt(line.trim());
			line = "UNKNOW";
		}
		// name
		line = strBuilder.substring(index2 + 1);
		line.trim();
		mod = new Module(id, 0, 0, x, y, w, h);
		return mod;
	}

	public synchronized void loadSprite(String path)
	{
		// listBitmap = new ArrayList<Bitmap>();
		// listBitmap.clear();
		String directorystr = "";
		if (path.lastIndexOf("/") > 0)
			directorystr = path.substring(0, path.lastIndexOf("/"));
		XmlPullParser xrp = null;
		XmlPullParserFactory factory = null;
		InputStream istr = null;
		int eventType = 0;
		try {
			istr = view.getContext().getAssets().open(path);
			factory = XmlPullParserFactory.newInstance();
			factory.setNamespaceAware(false);
			xrp = factory.newPullParser();
			xrp.setInput(istr, "UTF-8");

			eventType = xrp.getEventType();
		} catch (Exception e) {

		}
		String tagName = "";

		int coutModule = 0;
		int coutFrame = 0;
		int coutAnim = 0;
		while (eventType != XmlPullParser.END_DOCUMENT) {
			switch (eventType)
			{
			case XmlPullParser.START_DOCUMENT:
				break;
			case XmlPullParser.START_TAG:
				tagName = xrp.getName();
				if (tagName.equals("Image")) {
					if (directorystr.length() > 0)
						ImageName = directorystr + "/" + xrp.getAttributeValue(null, "Path");
					else
						ImageName = xrp.getAttributeValue(null, "Path");
					// Log.d("Path of Image", " " + ImageName);
					tileSheet = loadImageFromAsset(ImageName);
				} else if (tagName.equals("Module")) {
					int id, type, color = 0, x, y, w, h;
					id = Integer.parseInt(xrp.getAttributeValue(null, "ID"));
					type = Integer.parseInt(xrp.getAttributeValue(null, "Type"));
					String color_str = xrp.getAttributeValue(null, "Color");
					if (color_str.length() > 0) {
						color = (int) Long.parseLong(color_str, 16);
					}
					x = Integer.parseInt(xrp.getAttributeValue(null, "X"));
					y = Integer.parseInt(xrp.getAttributeValue(null, "Y"));
					w = Integer.parseInt(xrp.getAttributeValue(null, "W"));
					h = Integer.parseInt(xrp.getAttributeValue(null, "H"));
					modules[coutModule] = new Module(id, type, color, x, y, w, h);
					coutModule++;
				} else if (tagName.equals("Frame")) {
					// <Frame Index="0" ID="2000" NumOfModules="2"
					// Desc="Frame 1">
					frames[coutFrame] = new Frame();
					frames[coutFrame].id = Integer.parseInt(xrp.getAttributeValue(null, "ID"));
					frames[coutFrame].numofModule = Integer.parseInt(xrp.getAttributeValue(null, "NumOfModules"));
					frames[coutFrame].arrayModuleIndex = new int[frames[coutFrame].numofModule];
					frames[coutFrame].arrayModuleID = new int[frames[coutFrame].numofModule];
					frames[coutFrame].postionX = new int[frames[coutFrame].numofModule];
					frames[coutFrame].postionY = new int[frames[coutFrame].numofModule];
					frames[coutFrame].flags = new int[frames[coutFrame].numofModule];
				} else if (tagName.equals("FModule")) {
					// <FModule Index="0" Module_ID="1000" OX="0" OY="0"
					// Flags="0" />
					int index = Integer.parseInt(xrp.getAttributeValue(null, "Index"));
					// frames[coutFrame].arrayModuleIndex[index] =
					// Integer.parseInt(xrp.getAttributeValue(null, "Index"));
					frames[coutFrame].arrayModuleID[index] = Integer.parseInt(xrp.getAttributeValue(null, "Module_ID"));
					frames[coutFrame].postionX[index] = Integer.parseInt(xrp.getAttributeValue(null, "OX"));
					frames[coutFrame].postionY[index] = Integer.parseInt(xrp.getAttributeValue(null, "OY"));
					frames[coutFrame].flags[index] = Integer.parseInt(xrp.getAttributeValue(null, "Flags"));
				} else if (tagName.equals("Animation")) {
					// <Animation Index="0" ID="3000" NumOfFrames="2"
					// Desc="Animation 1">
					anims[coutAnim] = new Anim();
					anims[coutAnim].id = Integer.parseInt(xrp.getAttributeValue(null, "ID"));
					anims[coutAnim].numOfFrame = Integer.parseInt(xrp.getAttributeValue(null, "NumOfFrames"));
					anims[coutAnim].arrayFrameIndex = new int[anims[coutAnim].numOfFrame];
					anims[coutAnim].arrayFrameID = new int[anims[coutAnim].numOfFrame];
					anims[coutAnim].postionX = new int[anims[coutAnim].numOfFrame];
					anims[coutAnim].postionY = new int[anims[coutAnim].numOfFrame];
					anims[coutAnim].timeDelay = new int[anims[coutAnim].numOfFrame];

				} else if (tagName.equals("AFrame")) {
					// <AFrame Index="0" Module_ID="2000" OX="0" OY="0" Time="2"
					// />
					int index = Integer.parseInt(xrp.getAttributeValue(null, "Index"));
					// frames[coutFrame].arrayModuleIndex[index] =
					// Integer.parseInt(xrp.getAttributeValue(null, "Index"));
					anims[coutAnim].arrayFrameID[index] = Integer.parseInt(xrp.getAttributeValue(null, "Frame_ID"));
					anims[coutAnim].postionX[index] = Integer.parseInt(xrp.getAttributeValue(null, "OX"));
					anims[coutAnim].postionY[index] = Integer.parseInt(xrp.getAttributeValue(null, "OY"));
					anims[coutAnim].timeDelay[index] = Integer.parseInt(xrp.getAttributeValue(null, "Time"));
					// <AFrame Index="0" Module_ID="2000" OX="0" OY="0" Time="2"
					// />
				}
				break;
			case XmlPullParser.TEXT:
				// <Num_of_modules>6</Num_of_modules>
				// <Num_of_frames>6</Num_of_frames>
				// <Num_of_animations>1</Num_of_animations>
				// Log.d("text", xrp.getText());
				if (tagName.equals("Num_of_modules")) {
					String str = xrp.getText();
					if (str.charAt(0) != '\n') {
						modulesLen = Integer.parseInt(str);
						modules = new Module[modulesLen];
						str = null;
					}
				} else if (tagName.equals("Num_of_frames")) {
					String str = xrp.getText();
					if (str.charAt(0) != '\n') {
						frameLen = Integer.parseInt(str);
						frames = new Frame[frameLen];
						str = null;
					}
				} else if (tagName.equals("Num_of_animations")) {
					String str = xrp.getText();
					if (str.charAt(0) != '\n') {
						animLen = Integer.parseInt(xrp.getText());
						anims = new Anim[animLen];
						str = null;
					}
				}
				break;
			case XmlPullParser.END_TAG:
				tagName = xrp.getName();
				if (tagName.equals("Frame")) {
					//
					for (int i = 0; i < frames[coutFrame].numofModule; i++) {
						for (int j = 0; j < modulesLen; j++) {
							if (frames[coutFrame].arrayModuleID[i] == modules[j].id) {
								frames[coutFrame].arrayModuleIndex[i] = j;
							}
						}
					}
					coutFrame++;
				} else if (tagName.equals("Animation")) {
					//
					for (int i = 0; i < anims[coutAnim].numOfFrame; i++) {
						for (int j = 0; j < frameLen; j++) {
							if (anims[coutAnim].arrayFrameID[i] == frames[j].id) {
								anims[coutAnim].arrayFrameIndex[i] = j;
							}
						}
					}
					coutAnim++;
				}
				break;
			}
			try {
				eventType = xrp.next();
			} catch (Exception e) {

			}
		}
		tileSheet = null;
	}

	public static String readTextFile(String path, boolean isUTF8File)
	{
		byte[] buffer = null;
		AssetManager am = activity.getAssets();
		InputStream is;
		try {
			is = am.open(path);
			int size = is.available(); // size of the file in bytes
			buffer = new byte[size]; // declare the size of the byte array with
										// size of the file
			is.read(buffer); // read file
			is.close(); // close file

		} catch (IOException e) {
			e.printStackTrace();

		}
		// Store text file data in the string variable
		String str_data = new String(buffer);
		buffer = null;
		return str_data;
	}

	public void loadSpriteAurora(String path)
	{
		String directorystr = "";
		if (path.lastIndexOf("/") > 0)
			directorystr = path.substring(0, path.lastIndexOf("/"));

		String strBuilder;
		String allStrInFile = readTextFile(path, true);
		boolean isParse = true;
		int numRecordOfOneType = 0;
		// int frame_anim_index =0;
		int idModule = 0;
		int idFrame = -1;
		int idAnim = -1;
		int index = 0;
		while (isParse) {
			//
			index = allStrInFile.indexOf('\n');
			if (index < 0) { // neu khong phai chuoi hoac == null
				isParse = false;
				continue;
			}

			strBuilder = allStrInFile.substring(0, index);
			strBuilder = strBuilder.replace("	", " ").trim(); // replace tap by
																// " "
			allStrInFile = allStrInFile.substring(index, allStrInFile.length()).trim();
			index = strBuilder.indexOf("//");
			// check cut string
			boolean isCutString = true;
			isCutString = !(index >= 0 && loadType != 0);
			isCutString &= !(strBuilder.indexOf("FRAME ") != 0);
			isCutString &= !(strBuilder.indexOf("ANIM ") != 0);

			if (isCutString) {
				strBuilder = strBuilder.substring(0, index);
			}
			strBuilder = strBuilder.trim();
			if (strBuilder.length() < 2)// chuoi khong su dung khong xe den dau
										// ngoac

				continue;
			// load kich thuoc cua mang modules,frame va anim
			switch (loadType)
			{

			case 0:
				// Modules: 6
				// Frames: 4
				// Anims: 0

				int i = -1;
				if (strBuilder.indexOf("// Modules:") > -1) {
					i = "// Modules:".length();
					modulesLen = Integer.parseInt(strBuilder.substring(i + 1).trim());
					Log.d("Module", " " + modulesLen);
					modules = new Module[modulesLen];
					// Log.d("number of Module : ",String.valueOf(modulesLen));
				} else if (strBuilder.indexOf("// Frames:") > -1) {
					i = "// Images:".length();
					frameLen = Integer.parseInt(strBuilder.substring(i + 1).trim());
					Log.d("frameLen", " " + frameLen);
					frames = new Frame[frameLen];
					// Log.d("number of Frame : ",String.valueOf(modulesLen));
				} else if (strBuilder.indexOf("// Anims:") > -1) {
					i = "// Anims:".length();
					animLen = Integer.parseInt(strBuilder.substring(i + 1).trim());
					Log.d("animLen", " " + animLen);
					anims = new Anim[animLen];
					// Log.d("number of Anim : ",String.valueOf(modulesLen));
					loadType++;
				}
				break;
			case 1: // load image name
				int indexBegin = 0;
				int indexEnd = 0;
				if (strBuilder.indexOf("IMAGE") == 0) {
					indexBegin = strBuilder.indexOf("\"");
					indexEnd = strBuilder.lastIndexOf("\"");
					ImageName = strBuilder.substring(indexBegin + 3, indexEnd); // + 3 vi .\ trong ten cua image tao boi aurora
					if (directorystr.length() > 0)
						ImageName = directorystr + "/" + ImageName;
					Log.d("Image Name::::", ImageName);
					// create bitmap here
					tileSheet = loadImageFromAsset(ImageName);
					// CGame.log("Image File" + ImageName);
					loadType++;
				}
				break;
			case 2: // load all module
				// loadType++;
				if (strBuilder.indexOf("MD") == 0) {
					// MD 0x1000 MD_IMAGE 0 9 4 60 60
					Module mod = loadOneModule(strBuilder);
					if (mod != null) {
						modules[numRecordOfOneType] = mod;
						numRecordOfOneType++;
					}
					if (numRecordOfOneType >= modulesLen) {
						numRecordOfOneType = 0;
						tileSheet = null;// delete it to save memory
						loadType++;
					}
				}
				break;
			case 3: // load all frame
				if (strBuilder.indexOf("FRAME ") == 0) {
					// FRAME "" // Index = 0, FModules = 1
					int temp = strBuilder.indexOf("FModules =");
					strBuilder = strBuilder.substring(temp + "FModules =".length()).trim();
					temp = Integer.parseInt(strBuilder.trim());
					idFrame++;
					idModule = 0;
					frames[idFrame] = new Frame();
					frames[idFrame].numofModule = temp;
					frames[idFrame].arrayModuleIndex = new int[temp];
					frames[idFrame].postionX = new int[temp];
					frames[idFrame].postionY = new int[temp];
					frames[idFrame].flags = new int[temp];
				} else if (strBuilder.indexOf("0x") == 0) { // get id
					strBuilder = strBuilder.substring(2).trim();
					frames[idFrame].id = Integer.parseInt(strBuilder, 16);
				} else if (strBuilder.indexOf("FM ") == 0) {
					// FM 0x1000 0 1
					int tempId = 0;
					int index1 = 0;
					int index2 = 0;
					String line = "";
					strBuilder = strBuilder.substring(3);// 0x1000 0 1
					index1 = strBuilder.indexOf(" ");
					// id
					index2 = strBuilder.indexOf(" ");
					line = strBuilder.substring(2, index1);
					tempId = Integer.parseInt(line, 16);
					frames[idFrame].arrayModuleIndex[idModule] = searchIndexInArrayModule(tempId, modules);
					strBuilder = strBuilder.substring(index2).trim();// 0 1
					// x
					index1 = strBuilder.indexOf(" ");
					line = strBuilder.substring(0, index1);
					frames[idFrame].postionX[idModule] = Integer.parseInt(line);
					// y
					strBuilder = strBuilder.substring(index1).trim();// 1
					index2 = strBuilder.indexOf(" ");
					if (index2 > 0)
						line = strBuilder.substring(index1 + 1, index2);
					else
						line = strBuilder;
					frames[idFrame].postionY[idModule] = Integer.parseInt(line);
					idModule++;
					//
					if (idFrame == frameLen - 1 && idModule >= frames[idFrame].numofModule) {
						loadType++;
					}
				}
				break;
			case 4:
				// ANIM "" // Index = 0, AFrames = 7
				// 0x3000
				// AF 0x2000 5 0 0
				int index1 = 0;
				int index2 = 0;
				Log.d(strBuilder, strBuilder);
				if (strBuilder.indexOf("ANIM ") == 0) {

					int temp = strBuilder.indexOf("AFrames =");
					strBuilder = strBuilder.substring(temp + "AFrames =".length()).trim();
					temp = Integer.parseInt(strBuilder.trim());
					idAnim++;// begin it =-1
					anims[idAnim] = new Anim();
					anims[idAnim].numOfFrame = temp;
					anims[idAnim].arrayFrameIndex = new int[temp];
					anims[idAnim].postionX = new int[temp];
					anims[idAnim].postionY = new int[temp];
					anims[idAnim].timeDelay = new int[temp];
					idFrame = 0;
				} else if (strBuilder.indexOf("0x") == 0) { // get id
					strBuilder = strBuilder.substring(2).trim();
					anims[idAnim].id = Integer.parseInt(strBuilder, 16);
				} else if (strBuilder.indexOf("AF ") == 0) {
					// AF 0x2000 5 0 0
					String line = "";
					int tempId = 0;
					// id
					index1 = strBuilder.indexOf(" ");
					index2 = strBuilder.indexOf(" ", index1 + 1);
					line = strBuilder.substring(index1 + 1 + 2, index2).trim();
					tempId = Integer.parseInt(line, 16);
					anims[idAnim].arrayFrameIndex[idFrame] = searchIndexInArrayFrame(tempId, frames);
					// timer
					index1 = strBuilder.indexOf(" ", index2 + 1);
					line = strBuilder.substring(index2 + 1, index1);
					anims[idAnim].timeDelay[idFrame] = Integer.parseInt(line);

					// x
					index2 = strBuilder.indexOf(" ", index1 + 1);
					line = strBuilder.substring(index1 + 1, index2);
					anims[idAnim].postionX[idFrame] = Integer.parseInt(line);

					// y
					index1 = strBuilder.indexOf(" ", index2 + 1);
					if (index1 < 0)
						line = strBuilder.substring(index2 + 1);
					else
						line = strBuilder.substring(index2 + 1, index1);
					anims[idAnim].postionY[idFrame] = Integer.parseInt(line);
					idFrame++;
				}

				if (animLen==0 ||(idAnim == animLen - 1 && idFrame >= anims[idAnim].numOfFrame)) {
					loadType++;
				}
				break;
			}

			if (loadType > 4)
				isParse = false;
		}

	}

	public void drawAModule(Canvas g, int id, int x, int y, int flag)
	{
		modules[id].draw(g, x, y, flag);
		// g.drawBitmap(modules[id].image, x, y, null);

	}

	public void drawAModule(Canvas g, int id, int angle, float Scalex, float Scaley, int x, int y)
	{

		matrix.reset();

		matrix.postRotate(angle, modules[id].width / 2, modules[id].height / 2); // rotation
																					// at
																					// center
																					// of
																					// module
																					// image
		matrix.postScale(Scalex, Scaley);
		matrix.postTranslate(x, y); // move it into x, y position
		g.drawBitmap(modules[id].image, matrix, null);

		// g.drawBitmap(modules[id].image, x, y, null);

	}

	public void drawAModule(Canvas g, int id, int x, int y, int flipx, int fligy)
	{
		g.drawBitmap(modules[id].image, x, y, null);
		// Flip
		// matrix.setScale(-1,1);
		// matrix.postTranslate(x, y);
		// g.drawBitmap(modules[id].image, matrix, null);
	}

	public void drawAFrame(Canvas g, int id, int angle, float Scalex, float Scaley, int x, int y)
	{
		for (int i = 0; i < frames[id].numofModule; i++) {

			int moduleisPaint = frames[id].arrayModuleIndex[i];

			if (angle != 0) {
				// centerx= w/2+x;
				// centery= h/2+y;
				int centerx = (modules[moduleisPaint].width / 2 + frames[id].postionX[i]);
				int centery = (modules[moduleisPaint].height / 2 + frames[id].postionY[i]);
				Point newcenterPoint = rotationPoint(centerx, centery, angle);
				// x= centerx - w/2
				// x= centery - h/2
				int new_x = newcenterPoint.x - modules[moduleisPaint].width / 2;
				int new_y = newcenterPoint.y - modules[moduleisPaint].height / 2;
				drawAModule(g, moduleisPaint, angle, Scalex, Scaley, x + new_x, y + new_y);
			} else
				drawAModule(g, moduleisPaint, angle, Scalex, Scaley, (int) (x + frames[id].postionX[i] * Scalex), (int) (y + frames[id].postionY[i] * Scaley));
		}
	}

	public void drawAFrame(Canvas g, int id, int x, int y)
	{
		// try {
		for (int i = 0; i < frames[id].numofModule; i++) {

			int moduleisPaint = frames[id].arrayModuleIndex[i];
			drawAModule(g, moduleisPaint, x + frames[id].postionX[i], y + frames[id].postionY[i], frames[id].flags[i]);
		}

	}

	// Draw sprite onto screen
	public void setAnim(int id, boolean loop, boolean _showLastFrame)
	{
		currentAnimation = id;
		canLoop = loop;
		ShowLastFrame = _showLastFrame;
		waitDelay = 0;
		currentFrame = 0;

	}

	public void setAnim(int id, int x, int y, boolean loop, boolean _showLastFrame)
	{
		currentAnimation = id;
		canLoop = loop;
		ShowLastFrame = _showLastFrame;
		waitDelay = 0;
		currentFrame = 0;
		xpos = x;
		ypos = y;

	}

	public void drawAnim(Canvas g, int angle, int Scalex, int Scaley, int x, int y)
	{
		if (currentFrame < anims[currentAnimation].numOfFrame)
			// drawAFrame(mainCanvas,0,20,1,1,200,200);
			drawAFrame(g, anims[currentAnimation].arrayFrameIndex[currentFrame], angle, Scalex, Scaley, x + anims[currentAnimation].postionX[currentFrame], y + anims[currentAnimation].postionY[currentFrame]);
		update();
	}

	public void drawAnim(Canvas g, int x, int y)
	{
		if (currentFrame < anims[currentAnimation].numOfFrame)
			drawAFrame(g, anims[currentAnimation].arrayFrameIndex[currentFrame], x + anims[currentAnimation].postionX[currentFrame], y + anims[currentAnimation].postionY[currentFrame]);
		update();
	}

	public void drawAnim(Canvas g)
	{
		if (currentFrame < anims[currentAnimation].numOfFrame)
			drawAFrame(g, anims[currentAnimation].arrayFrameIndex[currentFrame], xpos + anims[currentAnimation].postionX[currentFrame], ypos + anims[currentAnimation].postionY[currentFrame]);
		else if (ShowLastFrame) {
			int frameIndex = anims[currentAnimation].numOfFrame - 1;
			drawAFrame(g, anims[currentAnimation].arrayFrameIndex[frameIndex], xpos + anims[currentAnimation].postionX[frameIndex], ypos + anims[currentAnimation].postionY[frameIndex]);
		}

		update();
	}
	
	public int getFrameWidth(int  id)
	{
		//only one frame begin
		int temp = frames[id].arrayModuleIndex[0];
		temp = modules[temp].width;
		return temp;
		//
	}
	public int getFrameHeight(int  id)
	{
		//only one frame begin
		int temp = frames[id].arrayModuleIndex[0];
		temp = modules[temp].height;
		return temp;
		//
	}
	
	public int getAnimWidth(int  id)
	{
		//only one frame begin
		int frameId = anims[id].arrayFrameIndex[0];
		int temp = frames[frameId].arrayModuleIndex[0];
		temp = modules[temp].width;
		return temp;
		//
	}
	public int getAnimHeight(int  id)
	{
		//only one frame begin
		int frameId = anims[id].arrayFrameIndex[0];
		int temp = frames[frameId].arrayModuleIndex[0];
		temp = modules[temp].height;
		return temp;
		//
	}
	
	
	public int getFrameBeginX(int  id)
	{
		//only one frame begin
		int temp = frames[id].arrayModuleIndex[0];
		temp = frames[id].postionX[0];//here
		return temp;
		//
	}
	public int getFrameBeginY(int  id)
	{
		//only one frame begin
		int temp = frames[id].arrayModuleIndex[0];
		temp = frames[id].postionY[0];//here		
		return temp;
		//
	}		

	// updates the frame counter to the next frame
	public void update()
	{
		waitDelay++;
		if (currentFrame <= anims[currentAnimation].numOfFrame - 1) {
			if (waitDelay > anims[currentAnimation].timeDelay[currentFrame]) {
				currentFrame++;
				waitDelay = 0;
			}
		}
		if (currentFrame >= anims[currentAnimation].numOfFrame) {
			if (canLoop) {
				currentFrame = 0;
				waitDelay = 0;
			} else if (ShowLastFrame) {
				// currentFrame = anims[currentAnimation].animFramesLen - 1;
			}
		}
	}

	public boolean hasAnimationFinished()
	{

		if (currentFrame >= anims[currentAnimation].numOfFrame)
			return true;
		if (currentFrame == anims[currentAnimation].numOfFrame - 1 && waitDelay >= anims[currentAnimation].timeDelay[currentFrame])
			return true;
		return false;
	}

	// FOR MANY OBJECT
	// FOR MANY OBJECT
	// FOR MANY OBJECT
	// FOR MANY OBJECT

	public void setAnim(Actor actor, int id, boolean loop, boolean _showLastFrame)
	{
		actor._currentAnimation = id;
		actor._canLoop = loop;
		actor._ShowLastFrame = _showLastFrame;
		actor._waitDelay = 0;
		actor._currentFrame = 0;

	}

	public void drawAnim(Canvas g, int angle, int Scalex, int Scaley, Actor actor, int x, int y)
	{
		if (actor._currentFrame < anims[actor._currentAnimation].numOfFrame)
			// drawAFrame(mainCanvas,0,20,1,1,200,200);
			drawAFrame(g, anims[actor._currentAnimation].arrayFrameIndex[actor._currentFrame], angle, Scalex, Scaley, x + anims[actor._currentAnimation].postionX[actor._currentFrame], y + anims[actor._currentAnimation].postionY[actor._currentFrame]);
		update(actor);
	}

	public void drawAnim(Canvas g, Actor actor, int x, int y)
	{
		if (actor._currentFrame < anims[actor._currentAnimation].numOfFrame)
			drawAFrame(g, anims[actor._currentAnimation].arrayFrameIndex[actor._currentFrame], x + anims[actor._currentAnimation].postionX[actor._currentFrame], y + anims[actor._currentAnimation].postionY[actor._currentFrame]);
		update(actor);
	}

	public void drawAnim(Canvas g, int _currentAnimation, int _currentFrame, int _waitDelay)
	{
		if (_currentFrame < anims[_currentAnimation].numOfFrame)
			drawAFrame(g, anims[_currentAnimation].arrayFrameIndex[_currentFrame], xpos + anims[_currentAnimation].postionX[_currentFrame], ypos + anims[_currentAnimation].postionY[_currentFrame]);
		else if (ShowLastFrame) {
			int frameIndex = anims[_currentAnimation].numOfFrame - 1;
			drawAFrame(g, anims[_currentAnimation].arrayFrameIndex[frameIndex], xpos + anims[_currentAnimation].postionX[frameIndex], ypos + anims[_currentAnimation].postionY[frameIndex]);
		}

		update();
	}

	public void update(Actor actor)
	{
		actor._waitDelay++;
		if (actor._currentFrame <= anims[actor._currentAnimation].numOfFrame - 1) {
			if (actor._waitDelay > anims[actor._currentAnimation].timeDelay[actor._currentFrame]) {
				actor._currentFrame++;
				actor._waitDelay = 0;
			}
		}
		if (actor._currentFrame >= anims[actor._currentAnimation].numOfFrame) {
			if (actor._canLoop) {
				actor._currentFrame = 0;
				actor._waitDelay = 0;
			} else if (ShowLastFrame) {
				// currentFrame = anims[currentAnimation].animFramesLen - 1;
			}
		}
	}

	public boolean hasAnimationFinished(int _currentAnimation, int _currentFrame, int _waitDelay)
	{
		if(_currentAnimation <0)
			return true;
		if (_currentFrame >= anims[_currentAnimation].numOfFrame)
			return true;
		if (_currentFrame == anims[_currentAnimation].numOfFrame - 1 && _waitDelay >= anims[_currentAnimation].timeDelay[_currentFrame])
			return true;
		return false;
	}

	public static Bitmap loadImageFromAsset(String path)
	{
		AssetManager am = activity.getAssets();
		// BufferedInputStream buf;
		// Bitmap bitmap = null;
		try {
			// buf = new BufferedInputStream(am.open(path));
			// bitmap = BitmapFactory.decodeStream(buf);
			return BitmapFactory.decodeStream(am.open(path));
			// buf.close();
		} catch (IOException e) {
			//
			e.printStackTrace();
		}
		return null;
		// return bitmap;
	}

	public static Point rotationPoint(int x, int y, int degreeAngle)
	{ // width
		// oxy
		// TODO Auto-generated method stub
		double angle = (degreeAngle * Math.PI / 180);
		double cosTheta = Math.cos(angle);
		double sinTheta = Math.sin(angle);
		double temp = (x * cosTheta - y * sinTheta);
		if (temp > 0)
			temp += 0.5;
		else
			temp -= 0.5;
		int new_x = (int) temp;
		temp = (x * sinTheta + y * cosTheta);
		if (temp > 0)
			temp += 0.5;
		else
			temp -= 0.5;
		int new_y = (int) temp;
		// System.out.println(new_x);
		// System.out.print(new_y);

		return new Point(new_x, new_y);

	}
	// END FOR MANY OBJECT
}
