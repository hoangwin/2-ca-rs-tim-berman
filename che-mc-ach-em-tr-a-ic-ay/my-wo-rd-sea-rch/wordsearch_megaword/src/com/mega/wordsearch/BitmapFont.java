/*
 * chu y : source nay chua luu chieu rong cua tung ki tu
 * co the ve text ok
 * */
package com.mega.wordsearch; 

import java.io.DataInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;

import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Paint;

//note : request format of dat file is right 
//if not bug crash will occur
public class BitmapFont {
	public Bitmap[] fontImage;
	private int[] charPosX;
	private int[] charPosY;
	private char[] mapChar; // using int to suppoer unicode after
	private int[] charWidth;
	private int fontWidth;// max
	private int fontHeight;// max
	private int numOfChar = 0;
	private int spacewidth = 7;
	private char spaceChar = ' ';
	private int charIndex = -1;// su dung delay index cua ki tu can ve. opt
	// frames
	public static int ALIGN_LEFT = 0;
	public static int ALIGN_RIGHT = 1;
	public static int ALIGN_CENTER = 2;
	//
	public static int CHAR_SPACE = 0;// khoang trang giua hai tu
	public static int LINE_SPACE = 5;// khoang trang giua hai tu
	int[] infowrap = new int[100]; // maxi = 100 line, infowrap[0] = numline
	public  int getFontHeight()
	{
		return fontHeight;
	}
	public String getDirectoryOfFile(String name) {
		int i = name.lastIndexOf('/');

		String strDir = null;
		if (i > 0)
			strDir = name.substring(0, i + 1);
		// CGame.log(strDir);
		return strDir;
	}

	public static String StrString = "";

	public BitmapFont(String path, boolean isUnicode) {
		StrString = GameLib.readTextFile(path, isUnicode);
		String text = null;
		int index = -1;
		int loadStep = 0;
		int index1, index2;
		int numCharIsRead = 0;
		String strNameImageFont = "";
		String endLine = "\n\r";
		int x, y, w;// char posx posy width height
		char c;
		/*
		 * loadStep = 0 loading image loadStep = 1 common ưidth loadStep = 2
		 * commond heihgt loadStep = 3 load total char loadStep = 4 load char
		 */
		// CGame.log("Begin");
		// CGame.log(StrString);
		if (StrString.indexOf(endLine) < 0)
			endLine = "\n";
		while (loadStep < 5) {
			index = StrString.indexOf(endLine);
			if (index < 0) {
				// CGame.log("Error load font data");
				return;
			}
			text = new String(StrString.substring(0, index));
			StrString = StrString.substring(index + 1);
			text = text.trim();
			switch (loadStep) {
			case 0:// load file name
			{
				int i = text.indexOf("IMAGE");
				if (i == 0) {
					i = text.indexOf(" ");
					text = text.substring(i + 1, text.length());
					strNameImageFont = text.trim();
					// CGame.log("Image file name :" + text);
					loadStep++;
				}
				break;
			}
			case 1: {// COMMOND_WIDTH
				int i = text.indexOf("COMMOND_WIDTH");
				if (i == 0) {
					i = text.indexOf(" ");
					text = text.substring(i + 1, text.length());
					fontWidth = Integer.parseInt(text.trim());
					// CGame.log("WIDTH:" + text);
					loadStep++;
				}
				break;
			}
			case 2: {// COMMOND_HEIGHT
				int i = text.indexOf("COMMOND_HEIGHT");
				if (i == 0) {
					i = text.indexOf(" ");
					text = text.substring(i + 1, text.length());
					fontHeight = Integer.parseInt(text.trim());
					// CGame.log("WIDTH:" + text);
					loadStep++;
				}
				break;
			}
			case 3:// NUM_OF_CHAR
			{
				int i = text.indexOf("NUM_OF_CHAR");
				if (i == 0) {
					i = text.indexOf(" ");
					text = text.substring(i + 1, text.length());
					numOfChar = Integer.parseInt(text.trim());
					// CGame.log("NUM_OF_CHAR:" + text);
					fontImage = new Bitmap[numOfChar];
					charPosX = new int[numOfChar];
					charPosY = new int[numOfChar];
					mapChar = new char[numOfChar];
					charWidth = new int[numOfChar];

				}
				loadStep++;
				break;
			}
			case 4: {// load all CHAR
				int i = text.indexOf("CHAR");
				if (i == 0) {
					i = text.indexOf(" ");
					text = text.substring(i + 1).trim();
					c = text.charAt(0);
					index1 = text.indexOf(" ");
					index2 = text.indexOf(" ", index1 + 1);
					x = Integer.parseInt(text.substring(index1 + 1, index2).trim());
					// read y
					text = text.substring(index2 + 1).trim();
					index1 = text.indexOf(" ");
					y = Integer.parseInt(text.substring(0, index1).trim());
					// read w
					text = text.substring(index1 + 1).trim();
					index1 = text.indexOf(" ");
					w = Integer.parseInt(text.trim());
					// numCharIsRead
					charPosX[numCharIsRead] = x;
					charPosY[numCharIsRead] = y;
					mapChar[numCharIsRead] = c;
					// CGame.log("CHAR :" + c);
					charWidth[numCharIsRead] = w;
					numCharIsRead++;
					if (numCharIsRead >= numOfChar)
						loadStep++;

				}

				break;
			}
			case 5:
				loadStep++;
				break;
			default:
				break; 
			}

		}
		StrString = null;
		Bitmap temp = null;
		strNameImageFont = "" + strNameImageFont;
		temp = GameLib.loadImageFromAsset(strNameImageFont);

		// int [] ArrayRGB = new int[temp.getWidth()*temp.getHeight()];

		// Canvas tempG =null;

		for (int i = 0; i < numOfChar; i++) {

			// fontImage[i] = B.createImage(temp, charPosX[i], charPosY[i],
			// charWidth[i], fontHeight, 0);//0 = nomal
			fontImage[i] = Bitmap.createBitmap(temp, charPosX[i], charPosY[i], charWidth[i], fontHeight);// 0
																											// =
																											// nomal
		}
		// release all data to save memory
		temp = null;
	}

	private int MapChar(char ch) {
		int iLeftIndex = 0;
		int iRightIndex = numOfChar - 1;
		int iMiddleIndex = 0;

		while (iLeftIndex <= iRightIndex) {
			iMiddleIndex = (iLeftIndex + iRightIndex) >> 1;

			if (mapChar[iMiddleIndex] == ch) {
				return iMiddleIndex;
			} else if (mapChar[iMiddleIndex] < ch) {
				iLeftIndex = iMiddleIndex + 1;
			} else {
				iRightIndex = iMiddleIndex - 1;
			}
		}

		return -1;
	}

	public void drawChar(Canvas canvas, char ch, int x, int y, int align) {
		charIndex = MapChar(ch);
		if (charIndex >= 0)
			canvas.drawBitmap(fontImage[charIndex], x, y, null);

	}

	public int stringWidth(byte[] st) {
		int width = 0;
		for (int i = 0; i < st.length; i++) {
			if (st[i] >= 0)
				width += charWidth[st[i]] + CHAR_SPACE;
			else
				width += spacewidth;
		}
		return width;
	}

	public int substringWidth(byte[] st, int start, int len) {
		int width = 0;
		int end = start + len;
		if (end > st.length)
			end = st.length;
		int index = -1;
		for (int i = start; i < end && st[i] != -3; i++) {
			index = MapChar((char) st[i]);
			if (index >= 0)
				width += charWidth[index] + CHAR_SPACE;
			else
				width += spacewidth;
		}
		return width;
	}

	public int stringWidth(String st) {
		return substringWidth(st, 0, st.length());
	}

	public int substringWidth(String st, int start, int len) {
		int width = 0;
		int end = start + len;
		if (end > st.length())
			end = st.length();
		int index = -1;
		for (int i = start; i < end; i++) {
			char ch = st.charAt(i);
			index = MapChar(ch);
			if (ch == '\n')
				break;
			if (index >= 0)
				width += charWidth[index] + CHAR_SPACE;
			else
				width += spacewidth;
		}
		return width;
	}

	public void drawString(Canvas canvas, String st, int x, int y, int align) {
		drawSubstring(canvas, st, 0, st.length(), x, y, align);
	}

	public static int numWrapLines = 0;

	public void drawString(Canvas canvas, String str, int x, int y, int width, int align) {
		// wrapString(str, width);
		numWrapLines = 1;
		int y1 = y;
		char ch = ' ';
		int indexBeginSubStr = 0;
		int indexCharSpace = 0;
		for (int i = 0; i < str.length(); i++) {
			ch = str.charAt(i);
			if (ch == ' '){
				indexCharSpace = i;
			}

			if (ch == '\n') {
				y1 += fontHeight;
				drawSubstring(canvas, str, indexBeginSubStr, i - indexBeginSubStr, x, y1, align);
				indexBeginSubStr = i + 1;
				numWrapLines++;
			} else if (substringWidth(str, indexBeginSubStr, i - indexBeginSubStr) > width) {
				numWrapLines++;
				y1 += fontHeight;
				if(indexCharSpace > indexBeginSubStr)
				{
					drawSubstring(canvas, str, indexBeginSubStr, indexCharSpace - indexBeginSubStr, x, y1, align);
					indexBeginSubStr = indexCharSpace + 1;
					
				}else
				{
				drawSubstring(canvas, str, indexBeginSubStr, i - indexBeginSubStr, x, y1, align);
				indexBeginSubStr = i;
				}
			}
			if (i >= str.length() - 1) {
				numWrapLines++;
				y1 += fontHeight;
				drawSubstring(canvas, str, indexBeginSubStr, i + 1 - indexBeginSubStr, x, y1, align);
			}
		}
	}

	public void drawSubstring(Canvas canvas, String str, int start, int len, int x, int y, int align) {
		int x1, y1, pos, end = start + len;
		if (end > str.length())
			end = str.length();

		if (align == ALIGN_LEFT)
			x1 = x;
		else if (align == ALIGN_RIGHT)
			x1 = x - substringWidth(str, start, len);
		else
			x1 = x - (substringWidth(str, start, len) >> 1);
		y1 = y;

		char ch;
		for (int i = start; i < end; i++) {
			ch = str.charAt(i);
			if (ch == '\n') {
				if (align == 0)
					x1 = x;
				else if (align == 1)
					x1 = x - substringWidth(str, i + 1, len - i - start - 1);
				else
					x1 = x - (substringWidth(str, i + 1, len - i - start - 1) >> 1);
				y1 += fontHeight;
			} else if ((pos = MapChar(ch)) >= 0) {
				canvas.drawBitmap(fontImage[pos], x1, y1, null);
				// g.drawRegion(imgFont,0,pos*fontHeight,imgWidth,fontHeight,0,x1,y1,20);
				x1 += charWidth[pos] + CHAR_SPACE;
			} else {
				x1 += spacewidth;
			}
		}
	}
}
