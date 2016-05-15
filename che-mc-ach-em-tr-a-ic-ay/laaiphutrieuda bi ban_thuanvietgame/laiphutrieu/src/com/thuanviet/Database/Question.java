package com.thuanviet.Database;

import com.niusounds.sqlite.Persistence;
import com.niusounds.sqlite.PrimaryKey;


public class Question {

	@Persistence
    @PrimaryKey(autoIncrement = true)
    private long   _id;

    @Persistence
    private String question;
    
    @Persistence
    private int level;
    
    @Persistence
    private String casea;
    
    @Persistence
    private String caseb;
    
    @Persistence
    private String casec;
    
	@Persistence
    private String cased;
    
    @Persistence
    private int truecase;

	public String getQuestion() {
		return question;
	}

	public void setQuestion(String question) {
		this.question = question;
	}

	public int getLevel() {
		return level;
	}

	public void setLevel(int level) {
		this.level = level;
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

	public String getCased() {
		return cased;
	}

	public void setCased(String cased) {
		this.cased = cased;
	}

	public int getTrueCase() {
		return truecase;
	}

	public void setTrueCase(int trueCase) {
		this.truecase = trueCase;
	}
    
    
   
}
