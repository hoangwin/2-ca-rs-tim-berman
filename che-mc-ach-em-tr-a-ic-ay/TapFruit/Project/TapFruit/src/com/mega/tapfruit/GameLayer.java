package com.mega.tapfruit;



import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStream;
import java.util.ArrayList;

import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;
import org.xmlpull.v1.XmlPullParserFactory;

import com.mega.tapfruit.actor.Actor;

import android.content.res.XmlResourceParser;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint.Style;
import android.graphics.Point;
import android.util.Log;

public class GameLayer implements IConstant {
	// layer of background
	// PHICSIC
	// can dat ten cac map giong nhau
	// gom layer = physic
	// image name = physic.png
	public static boolean HAVE_PHYSIC_LAYER = false;
	public static final int PHYSIC_MOVE = 0;
	public static final int PHYSIC_DONT_MOVE = 1;

	public static int TILE_WIDTH = 32;
	public static int TILE_HEIGHT = 32;
	public static int MAX_TILE_COLUMN = 30;
	public static int MAX_TILE_ROW = 30;
	public static int MAP_WIDTH_PIXEL = 10;
	public static int MAP_HEIGHT_PIXEL = 10;
	public static int screenOffsetX = 0;
	public static int screenOffsetY = 0;
	// ArrayList<Bitmap> listBitmap;
	public static ArrayList<Bitmap> arrayListBitmap;
	public static ArrayList<int[][]> arrayListDataMap;
	public static ArrayList<Actor> arrayListAObject;
	public static int PHYSIC_INT_NUM_BEGIN = -1;//
	// public Bitmap layerBitmap;
	// public Sprite layerSprite;
	public static int[][] tileMap = new int[MAX_TILE_COLUMN][MAX_TILE_ROW];

	public GameLayer() {

	}

	public synchronized static boolean loadLayerBG(String path) throws IOException, XmlPullParserException {
		// listBitmap = new ArrayList<Bitmap>();
		// listBitmap.clear();
		String directorystr = path.substring(0, path.lastIndexOf("/"));
		Log.e("Directory : ", directorystr);
		XmlPullParser xrp = null;
		InputStream istr = GameLib.mainView.getContext().getAssets().open(path);
		XmlPullParserFactory factory = XmlPullParserFactory.newInstance();
		factory.setNamespaceAware(false);
		xrp = factory.newPullParser();
		xrp.setInput(istr, "UTF-8");
		if (arrayListBitmap != null) {
			arrayListBitmap.clear();
		}
		if (arrayListDataMap != null) {
			arrayListDataMap.clear();
		}
		arrayListBitmap = new ArrayList<Bitmap>();
		arrayListDataMap = new ArrayList<int[][]>();
		arrayListAObject = new ArrayList<Actor>();
		int eventType = 0;
		eventType = xrp.getEventType();
		String tagName = "";
		Actor object = null;
		while (eventType != XmlPullParser.END_DOCUMENT) {
			switch (eventType) {
			case XmlPullParser.START_DOCUMENT:
				break;
			case XmlPullParser.START_TAG:
				tagName = xrp.getName();
				if (tagName.equals("map")) {
					MAX_TILE_COLUMN = Integer.parseInt(xrp.getAttributeValue(null, "width"));
					MAX_TILE_ROW = Integer.parseInt(xrp.getAttributeValue(null, "height"));
					TILE_WIDTH = Integer.parseInt(xrp.getAttributeValue(null, "tilewidth"));
					TILE_HEIGHT = Integer.parseInt(xrp.getAttributeValue(null, "tileheight"));
					MAP_WIDTH_PIXEL = MAX_TILE_COLUMN * TILE_WIDTH;
					MAP_HEIGHT_PIXEL = MAX_TILE_ROW * TILE_HEIGHT;
				} else if (tagName.equals("tileset")) {
					if (xrp.getAttributeValue(null, "name").equals("physic")) {
						PHYSIC_INT_NUM_BEGIN = Integer.parseInt(xrp.getAttributeValue(null, "firstgid")) - 1;
					}
				} else if (tagName.equals("image")) {
					Bitmap tempBitmap = GameLib.loadImageFromAsset(directorystr + "/" + xrp.getAttributeValue(null, "source"));
					int lenBitmapArrayrow = (tempBitmap.getHeight() / TILE_HEIGHT);
					int lenBitmapArraycol = (tempBitmap.getWidth() / TILE_WIDTH);
					// arrayBitmap = new
					// Bitmap[lenBitmapArrayrow*lenBitmapArraycol];
					Log.d("lenBitmapArrayrow:", " " + lenBitmapArrayrow);
					Log.d("lenBitmapArraycol:", " " + lenBitmapArraycol);
					for (int row = 0; row < lenBitmapArrayrow; row++) {
						for (int col = 0; col < lenBitmapArraycol; col++) {
							arrayListBitmap.add(Bitmap.createBitmap(tempBitmap, col * TILE_WIDTH, row * TILE_HEIGHT, TILE_WIDTH, TILE_HEIGHT, null, false));// here
						}
					}
					tempBitmap = null;
				} else if (tagName.equals("object")) {

					// <object name="doorright" type="door" x="1374" y="569"
					// width="47" height="61">

					// object = new Actor();
					String NAME = xrp.getAttributeValue(null, "name");
					String TYPE = xrp.getAttributeValue(null, "type");
					int m_x = Integer.parseInt(xrp.getAttributeValue(null, "x"));
					int m_y = Integer.parseInt(xrp.getAttributeValue(null, "y"));
					int m_Width = Integer.parseInt(xrp.getAttributeValue(null, "width"));
					int m_Height = Integer.parseInt(xrp.getAttributeValue(null, "height"));
					object = Actor.createActor(m_x, m_y, m_Width, m_Height, NAME, TYPE);

				} else if (tagName.equals("property")) {
					String name = xrp.getAttributeValue(null, "name");
					if (name.equals("level")) {
						String value = xrp.getAttributeValue(null, "value");
					
					}
				}
				break;
			case XmlPullParser.TEXT:

				// Log.d("text", xrp.getText());
				if (tagName.equals("data")) {
					int[][] tempArray = new int[MAX_TILE_ROW][MAX_TILE_COLUMN];
					String str = xrp.getText();
					if (str.charAt(0) == '\n')
						str = str.substring(1);
					String[] strArray = str.split("\n");
					String[] strTempInt;// = str.split("\n");
					for (int row = 0; row < MAX_TILE_ROW; row++) {
						strTempInt = strArray[row].split(",");
						for (int col = 0; col < MAX_TILE_COLUMN; col++) {
							// tempArray[row][col] = new int();
							int num = Integer.parseInt(strTempInt[col]);
							tempArray[row][col] = (num - 1);
						}
					}
					tagName = " ";
					arrayListDataMap.add(tempArray);
				}
				break;
			case XmlPullParser.END_TAG:
				tagName = xrp.getName();
				if (tagName.equals("object")) {
					if (object != null)
						arrayListAObject.add(object);
				}
				tagName = " ";
				break;
			}
			eventType = xrp.next();
		}
		return true;
	}

	public static void drawLayerBackGround(Canvas c) {
		GameLib.mainPaint.setStyle(Style.STROKE);
		int begincol = -screenOffsetX / TILE_WIDTH;// vi nguoc dau nhau
		int beginrow = -screenOffsetY / TILE_HEIGHT;// vi nguoc dau nhau
		int offsetx = screenOffsetX + begincol * TILE_WIDTH;// vi nguoc dau nhau
		int offsety = screenOffsetY + beginrow * TILE_HEIGHT; // vi nguoc dau
																// nhau

		int offsetDrawPhysicMap = 0;
		if (!DEBUG_MAP && HAVE_PHYSIC_LAYER)
			offsetDrawPhysicMap = 1;
		for (int indexlayer = 0; indexlayer < arrayListDataMap.size() - offsetDrawPhysicMap; indexlayer++) {
			for (int row = 0; row <= c.getHeight() / TILE_HEIGHT  + 1; row++)
				for (int col = 0; col <= c.getWidth() / TILE_WIDTH + 1; col++) {
					if (col + begincol < MAX_TILE_COLUMN && row + beginrow < MAX_TILE_ROW) {

						if (arrayListDataMap.get(indexlayer)[row + beginrow][col + begincol] > -1)
							c.drawBitmap(arrayListBitmap.get(arrayListDataMap.get(indexlayer)[row + beginrow][col + begincol]), offsetx + col * TILE_WIDTH, offsety + row * TILE_HEIGHT, null);
					}
				}
		}
	}

	public static void drawLayerObject() {
		Actor object;
		if (arrayListAObject == null)
			return;
		for (int i = 0; i < arrayListAObject.size(); i++) {
			object = arrayListAObject.get(i);
			object.render();
			// Log.d("draw actor", "draw object");
		}
	}

	public static void updatelayer() {
		// TODO Auto-generated method stub
		Actor object;
		if (arrayListAObject == null)
			return;
		for (int i = 0; i < arrayListAObject.size(); i++) {
			object = arrayListAObject.get(i);
			object.update();
		}
	}

	public static boolean checkCollisionPhysic(int[][] physicMap, int x, int y, int w, int h) {

		int tilex1 = x / GameLayer.TILE_WIDTH;
		int tiley1 = y / GameLayer.TILE_HEIGHT;
		int tilex2 = (x + w) / GameLayer.TILE_WIDTH;
		int tiley2 = (y + h) / GameLayer.TILE_HEIGHT;

		for (int i = tilex1; i <= tilex2; i++)
			for (int j = tiley1; j <= tiley2; j++) {
				if (i < 0 || j < 0 || i >= GameLayer.MAX_TILE_COLUMN || j >= GameLayer.MAX_TILE_ROW)
					return true;// have collition
				switch (physicMap[j][i] - PHYSIC_INT_NUM_BEGIN + 1) {
				case PHYSIC_MOVE:
					return false;
				case PHYSIC_DONT_MOVE:
					return true;
				}
			}
		return false;
	}
	public void resetAll(){
		GameLayer.arrayListBitmap = null;
		GameLayer.arrayListDataMap = null;
		GameLayer.arrayListAObject = null;
		GameLayer.tileMap = null;

	}
}
