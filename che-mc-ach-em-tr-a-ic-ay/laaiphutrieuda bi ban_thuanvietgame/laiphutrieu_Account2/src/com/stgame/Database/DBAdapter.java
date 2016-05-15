

package com.stgame.Database;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.SQLException;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import android.util.Log;

public class DBAdapter {
    public static final String KEY_ROWID = "_id";
    public static final String KEY_QUESTION = "Question";
    public static final String KEY_CASEA = "CaseA";
    public static final String KEY_CASEB = "CaseB";
    public static final String KEY_CASEC = "CaseC";
    public static final String KEY_CASED = "CaseD";
    public static final String KEY_ANSWER = "TrueCase";
    
    private static final String TAG = "DBAdapter";
    
    private static final String DATABASE_NAME = "Cauhoi";
    public static final String DATABASE_TABLE1 = "Question1";
    public static final String DATABASE_TABLE2 = "Question2";
    public static final String DATABASE_TABLE3 = "Question3";
    public static final String DATABASE_TABLE4 = "Question4";
    public static final String DATABASE_TABLE5 = "Question5";
    public static final String DATABASE_TABLE6 = "Question6";
    public static final String DATABASE_TABLE7 = "Question7";
    public static final String DATABASE_TABLE8 = "Question8";
    public static final String DATABASE_TABLE9 = "Question9";
    public static final String DATABASE_TABLE10 = "Question10";
    public static final String DATABASE_TABLE11 = "Question11";
    public static final String DATABASE_TABLE12 = "Question12";
    public static final String DATABASE_TABLE13 = "Question13";
    public static final String DATABASE_TABLE14 = "Question14";
    public static final String DATABASE_TABLE15 = "Question15";
    
    private static final int DATABASE_VERSION = 2;

    private static final String DATABASE_CREATE =
        "create table question_bil (_id integer primary key autoincrement, "
        + "Question text not null, " +
        "CaseA text not null, " +
        "CaseB text not null, " +
        "CaseC text not null, " +
        "CaseD text not null, " +
        "TrueCase text not null);";
        
    private final Context context;    

    private DatabaseHelper DBHelper;
    private SQLiteDatabase db;

    public DBAdapter(Context ctx) 
    {
        this.context = ctx;
        DBHelper = new DatabaseHelper(context);
    }
        
    private static class DatabaseHelper extends SQLiteOpenHelper 
    {
        DatabaseHelper(Context context) 
        {
            super(context, DATABASE_NAME, null, DATABASE_VERSION);
        }

        @Override
        public void onCreate(SQLiteDatabase db) 
        {
        	try {
        		db.execSQL(DATABASE_CREATE);	
        	} catch (SQLException e) {
        		e.printStackTrace();
        	}
        }

        @Override
        public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) 
        {
            Log.w(TAG, "Upgrading database from version " + oldVersion + " to "
                    + newVersion + ", which will destroy all old data");
            db.execSQL("DROP TABLE IF EXISTS contacts");
            onCreate(db);
        }
    }    

    //---opens the database---
    public DBAdapter open() throws SQLException 
    {
        db = DBHelper.getWritableDatabase();
        return this;
    }

    //---closes the database---    
    public void close() 
    {
        DBHelper.close();
    }
    
    //---insert a question into the database---
    public long insertContact(String question, 
    							String caseA,
    							String caseB,
    							String caseC,
    							String caseD,
    							String answer,
    							String DatabaseTable) 
    {
        ContentValues initialValues = new ContentValues();
        initialValues.put(KEY_QUESTION, question);
        initialValues.put(KEY_CASEA, caseA);
        initialValues.put(KEY_CASEB, caseA);
        initialValues.put(KEY_CASEC, caseA);
        initialValues.put(KEY_CASED, caseA);
        initialValues.put(KEY_ANSWER, answer);
        
        return db.insert(DatabaseTable, null, initialValues);
    }

    //---deletes a particular contact---
    public boolean deleteContact(long rowId,String DatabaseTable) 
    {
        return db.delete(DatabaseTable, KEY_ROWID + "=" + rowId, null) > 0;
    }

    //---retrieves all the contacts---
    public Cursor getAllContacts(String DatabaseTable) 
    {
        return db.query(DatabaseTable, new String[] {KEY_ROWID, 
        		KEY_QUESTION,
        		KEY_CASEA,
        		KEY_CASEB,
        		KEY_CASEC,
        		KEY_CASED,
        		KEY_ANSWER}, null, null, null, null, null);
    }

    //---retrieves a particular contact---
    public Cursor getContact(long rowId,String DatabaseTable) throws SQLException 
    {
        Cursor mCursor =
                db.query(true, DatabaseTable, new String[] {KEY_ROWID,
                		KEY_QUESTION, 
                		KEY_CASEA,
                		KEY_CASEB,
                		KEY_CASEC,
                		KEY_CASED,
                		KEY_ANSWER}, KEY_ROWID + "=" + rowId, null,
                null, null, null, null);
        if (mCursor != null) {
            mCursor.moveToFirst();
        }
        return mCursor;
    }

    //---updates a contact---
    public boolean updateContact(long rowId, 
    		String question, 
    		String caseA,
    		String caseB,
    		String caseC,
    		String caseD,
    		String answer,
    		String DatabaseTable) 
    {
        ContentValues args = new ContentValues();
        args.put(KEY_QUESTION, question);
        args.put(KEY_CASEA, caseA);
        args.put(KEY_CASEB, caseB);
        args.put(KEY_CASEC, caseC);
        args.put(KEY_CASED, caseD);
        args.put(KEY_ANSWER, answer);
        return db.update(DatabaseTable, args, KEY_ROWID + "=" + rowId, null) > 0;
        
    }
}
