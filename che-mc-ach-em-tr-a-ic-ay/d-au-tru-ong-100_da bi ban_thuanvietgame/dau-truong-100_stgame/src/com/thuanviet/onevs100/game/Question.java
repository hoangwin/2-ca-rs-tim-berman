package com.thuanviet.onevs100.game;

import com.niusounds.sqlite.Persistence;
import com.niusounds.sqlite.PrimaryKey;


public class Question {

	@Persistence
    @PrimaryKey(autoIncrement = true)
    private long   _id;

    @Persistence
    private long type;
    
    @Persistence
    private long subID;// nhom cau hoi phu
	
    @Persistence
    private String question;
    
    @Persistence
    private String casea;
    
    @Persistence
    private String caseb;
    
    @Persistence
    private String casec;
    
    @Persistence
    private int truecase;

    public long getType() {
		return type;
	}

	public void setType(long _type) {
		this.type = _type;
	}
    
    public long getSubID() {
		return subID;
	}

	public void setSubID(long _subID) {
		this.subID = _subID;
	}
	
	public String getQuestion() {
		return question;
	}

	public void setQuestion(String question) {
		this.question = question;
	}


	public String getCasea() {
		return casea;
	}

	public void setCasea(String casea) {
		this.casea = casea;
	}

	public String getCaseb() {
		return caseb;
	}

	public void setCaseb(String caseb) {
		this.caseb = caseb;
	}

	public String getCasec() {
		return casec;
	}

	public void setCasec(String casec) {
		this.casec = casec;
	}



	public int getTrueCase() {
		return truecase;
	}

	public void setTrueCase(int trueCase) {
		this.truecase = trueCase;
	}
    
    
   
}
