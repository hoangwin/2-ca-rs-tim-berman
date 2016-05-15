package com.mega.wordsearch.game;
import java.util.ArrayList;
import java.util.Random;

import android.graphics.Rect;
import android.location.GpsStatus.NmeaListener;
import android.util.Log;

public class WordSearch {
	public static char[][] data;	// Puzzle without random filler characters
	public static char[][] dataF; // Puzzle with    random filler characters
	public static ArrayList<String> words = new ArrayList<String>();
	public static ArrayList<Boolean> iswordsUnlock = new ArrayList<Boolean>();
	public static ArrayList<Rect> rectWords = new ArrayList<Rect>();
	public static  String[] AllWordIndirectory = null;
	public static int sizeTable = 0;
	
	public WordSearch(String[] wordList, int size) {
		sizeTable = size;
		data = new char[size][size];
		
		for(int i=0; i<data.length; i++)
			for(int j=0; j<data.length; j++)
				data[i][j] = ' ';
		int i = 0;
		words.clear();
		iswordsUnlock.clear();
		rectWords.clear();
		for(String word : wordList) {			
			add(word, data);
			if((i++)%1 == 0)
				data = flipX(data);
			else
				data = flipY(data);
		}
		dataF = fill(data);
		for(int j =0;j<words.size();j++)
		{
			iswordsUnlock.add(new Boolean(false));
		}
		
	}
	
	public String toString() {
		StringBuilder ret = new StringBuilder();
		
		ret.append("Puzzle:\n");
		for(int i=0; i<data.length; i++) {
			for(int j=0; j<data.length; j++) {
				ret.append(dataF[i][j]);
			}
			ret.append("\n");
		}
		
		ret.append("\n");
		
		ret.append("Solution:\n");
		for(int i=0; i<data.length; i++) {
			for(int j=0; j<data.length; j++) {
				ret.append(data[i][j]);
			}
			ret.append("\n");
		}
		
		return ret.toString();
	}
	
	public String getPuzzle() {
		StringBuilder ret = new StringBuilder();
		
		for(int i=0; i<dataF.length; i++) {
			for(int j=0; j<dataF.length; j++) {
				ret.append(dataF[i][j]);
			}
			ret.append("\n");
		}
		
		return ret.toString();
	}
	
	public String getSolution() {
		StringBuilder ret = new StringBuilder();
		
		for(int i=0; i<data.length; i++) {
			for(int j=0; j<data.length; j++) {
				ret.append(data[i][j]);
			}
			ret.append("\n");
		}
		
		return ret.toString();
	}
	
	
	private boolean add(String word, char[][] puzzle) {
		word = word.toUpperCase();
		
		char[][] origPuzzle = new char[puzzle.length][puzzle.length];
		for(int i=0; i<puzzle.length; i++)
			for(int j=0; j<puzzle.length; j++)
				origPuzzle[i][j] = puzzle[i][j];
		
		for(int tries=0; tries<100; tries++) {
			Random r = new Random();
			
			int orientation = r.nextInt(2); // 0 = Forwards,   1 = Backwards
			if(orientation == 1) word = flip(word);
			
			int direction   = r.nextInt(3); // 0 = Horizontal, 1 = Vertical,  2 = Diagonal
			
			int row			= r.nextInt(puzzle.length - word.length() +1);
			int col			= r.nextInt(puzzle.length - word.length() +1);
			//Log.d("--------- :","-------------------------------");
		//	Log.d("word :",word);
		//	Log.d("MAX :","" +(puzzle.length - word.length()));			
		//	Log.d("row :",""+row);
		//	Log.d("col :",""+col);
			
			int i=0;
			boolean canAdd = true;
			for(i=0; i< word.length(); i++) {
				if(puzzle[row][col] == ' ' || puzzle[row][col] == word.charAt(i)) {
					puzzle[row][col] = word.charAt(i);
					
					if(direction == 0) col++;
					if(direction == 1) row++;
					if(direction == 2) { col++; row++; }
				} else {
					for(int j=i; j>0; j--) {
						if(direction == 0) col--;
						if(direction == 1) row--;
						if(direction == 2) { col--; row--; }						
						puzzle[row][col] = origPuzzle[row][col];
						//new
					}
					canAdd = false;
					break;
				}
				
			}
			if(canAdd)
			{
				Log.d("WORD_OK",word);
				switch (Map.mMode) {
				case 0:
					if(words.size()<8)
						words.add(word);	
					break;
				case 1:
					if(words.size()<12)
						words.add(word);
					break;
				case 2:
					if(words.size()<15)
						words.add(word);	
					break;
				}
				
			}
			if(--i >= 0) return true;
			
				
		}
		Log.d("bbbbbbb : ", word);
		return false;
	}
	
	private String flip(String in) {
		StringBuilder ret = new StringBuilder();
		for(int i=in.length()-1; i>=0; i--)
			ret.append(in.charAt(i));
		return ret.toString();
	}
	
	private char[][] fill(char[][] puzzle) {
		char[][] ret = new char[puzzle.length][puzzle.length];
		RandChar r = new RandChar();
		
		for(int i=0; i<ret.length; i++) {
			for(int j=0; j<ret.length; j++) {
				if(puzzle[i][j] != ' ') {
					ret[i][j] = puzzle[i][j];
				} else {
					ret[i][j] = r.nextChar();
				}
			}
		}		
		return ret;
	}
	
	static private char[][] flipX(char[][] puzzle) {
		char[][] ret = new char[puzzle.length][puzzle.length];			
		for(int i=0; i<ret.length; i++) {
			for(int j=0; j<ret.length; j++) {
				ret[i][j] = puzzle[ret.length - i -1][j];
			}
		}
		return ret;
	}	
	static private char[][] flipY(char[][] puzzle) {
		char[][] ret = new char[puzzle.length][puzzle.length];			
		for(int i=0; i<ret.length; i++) {
			for(int j=0; j<ret.length; j++) {
				ret[i][j] = puzzle[i][ret.length - j - 1];
			}
		}
		return ret;
	}	
}
