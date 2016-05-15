package com.thuanviet.Client;

import org.json.JSONException;
import org.json.JSONObject;

public class MilMessage {

	private String TC;
	private int Code;
	private String Content;
	private int LengthContent ;
	
	public MilMessage(){
		this.TC = "";
		this.Code = 0;
		this.Content = "";
		this.LengthContent = 0;
	}
	
	public void OfflineFunctionCode(){
		this.TC = "TS";
		this.Code = 1001;
		this.Content = "{k:'xOvn'}";
		this.LengthContent = this.Content.length();
	}
	
	public String getTC(){
		
		return this.TC;
	}
	public int getCode(){
		return this.Code;
	}
	public String getContent(){
		return this.Content;
	}
	public JSONObject getJson() throws JSONException{
		return new JSONObject(getContent());
	}
	public void setTC(String tc){
		this.TC= tc;
	}
	public void setCode(int code){
		this.Code= code;
	}
	public void setContent (String content){
		this.Content = content;
	}

}
