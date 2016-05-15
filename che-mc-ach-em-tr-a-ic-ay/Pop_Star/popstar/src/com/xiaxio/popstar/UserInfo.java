package com.xiaxio.popstar;

import java.io.BufferedReader;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.List;
import java.util.regex.Pattern;

import org.apache.http.HttpResponse;
import org.apache.http.client.HttpClient;
import org.apache.http.client.methods.HttpGet;
import org.apache.http.impl.client.DefaultHttpClient;



import android.accounts.Account;
import android.accounts.AccountManager;
import android.app.Activity;
import android.util.Log;
import android.util.Patterns;

public class UserInfo {
	public static UserInfo myUserInfo = new UserInfo();
	public static UserInfo topUserInfo[] = {new UserInfo(),new UserInfo(),new UserInfo(),new UserInfo(),new UserInfo()};
	public static boolean[] achivementLock ={true,true,true,true,true,true};
	public String userName ="---";
	public int score;
	public int level;
	public int Played;
	public int rank;
	public String Country;	
	public UserInfo()
	{
		
	}
			
	public UserInfo(String _userName,int _score,int _level,int _Played,String _Country)
	{
		 userName = _userName;
		  score = _score;
		  level = _level;
		  Played = _Played;
		  Country = _Country;
	}
	public void setUserInfo(String _userName,int _score,int _level,int _Played,String _Country)
	{
		 userName = _userName;
		  score = _score;
		  level = _level;
		  Played = _Played;
		  Country = _Country;
	}
	public static  String getUsername()
	{
		Pattern emailPattern = Patterns.EMAIL_ADDRESS; // API level 8+		
		//Account[] accounts = AccountManager.get(Monster.mainGameLib).getAccounts();
		
		AccountManager manager = AccountManager.get(PopStar.mainGameLib); 
		Account[] accounts = manager.getAccountsByType("com.google"); 
		for (Account account : accounts) 
		{
		    if (emailPattern.matcher(account.name).matches())
		    {
		        String possibleEmail = account.name;
		        String[] parts = possibleEmail.split("@gmail.com");
		        if(parts.length > 0 && parts[0] != null)
		            return parts[0];
		        else
		            return "noname";
		    }
		}
		
		return "noname";
	}
	public static void SendScoreToserver()
	{		
		UserInfo.myUserInfo.score= Map.mTopScore;
		 UserInfo.myUserInfo.userName = getUsername();
		//String url = "http://caogia.byethost10.com/chemca/SetGetData.php?type=update&username=toanstt&Score=12&Level=31&Played=14&country=14a";
		String url = "http://gamethuanviet.com/petmonsterpop/SetGetData.php?type=update&";
		url += "username=" + UserInfo.myUserInfo.userName;
		url += "&Score="+	UserInfo.myUserInfo.score;
		url += "&Level="+UserInfo.myUserInfo.level;
		url += "&Played="+UserInfo.myUserInfo.Played;
		url += "&country="+UserInfo.myUserInfo.Country;		
		try {
			HttpClient httpclient = new DefaultHttpClient();
			 httpclient.execute(new HttpGet(url));			
		} catch (Exception e) {
			Log.d("[GET REQUEST]", "Network exception", e);
		}
		
	}
	public static void resetInfo()
	{
		for(int i=0;i<UserInfo.topUserInfo.length;i++)
		{
				UserInfo.topUserInfo[i].rank = i;
				UserInfo.topUserInfo[i].userName = "---";
				UserInfo.topUserInfo[i].score = 0;
				UserInfo.topUserInfo[i].level = 0;
		}
		UserInfo.myUserInfo.rank = 0;
	}
	public static void getRank()
	{
		String url = "http://gamethuanviet.com/petmonsterpop/SetGetData.php?type=select&username=" + getUsername();
		InputStream content = null;
		try {
			HttpClient httpclient = new DefaultHttpClient();
			HttpResponse response = httpclient.execute(new HttpGet(url));
			content = response.getEntity().getContent();
		} catch (Exception e) {
			Log.d("[GET REQUEST]", "Network exception", e);
		}		
		
		String line ="5|xxx|0|0|xxx|0|0|xxx|1|1|aa|0|0|xxx|0|0|0|xxx|0|0|";
		String tempstr = "";
		if(content!= null)
		{
			tempstr = "";
			BufferedReader br = new BufferedReader(new InputStreamReader(content));
			try {
				while ((line = br.readLine()) != null) {
					System.out.println(line);
					tempstr += line;
				}
				br.close();
			} catch (Exception e) {
				// TODO: handle exception
			}
		}
		//String tempstr = "hoang.nguyenmau|70|aaa|123|toanstt|123|caogia|145|CaoGia|1234|";				
		String[] part = tempstr.split(Pattern.quote("|"));
		int indexPart = 0;
		if (part.length > 2) {	
			//3|Hello|1|1|aa|1|1|toanstt|0|0|3|toanstt|0|0|
			int length = Integer.parseInt(part[indexPart++]);// =3 so phan tu top rank
			
			for(int i=0;i<UserInfo.topUserInfo.length;i++)
			{
				if(i <length)
				{
					UserInfo.topUserInfo[i].rank = i;
					UserInfo.topUserInfo[i].userName = part[indexPart++];
					UserInfo.topUserInfo[i].score = Integer.parseInt(part[indexPart++]);
					UserInfo.topUserInfo[i].level = Integer.parseInt(part[indexPart++]);
				}
				else
				{
					UserInfo.topUserInfo[i].rank = i;
					UserInfo.topUserInfo[i].userName = "---";
					UserInfo.topUserInfo[i].score = 0;
					UserInfo.topUserInfo[i].level = 0;
				}
				
			}
			//my rank
			if(part.length > indexPart)
			{
				UserInfo.myUserInfo.rank = Integer.parseInt(part[indexPart++]) -1;
				if(UserInfo.myUserInfo.rank >=0)
				{
					UserInfo.myUserInfo.userName = part[indexPart++];
					if(UserInfo.myUserInfo.score < Integer.parseInt(part[indexPart]))
					{
						UserInfo.myUserInfo.score = Integer.parseInt(part[indexPart]);
					}
					indexPart++;
					if(UserInfo.myUserInfo.level < Integer.parseInt(part[indexPart++]))
						UserInfo.myUserInfo.level = Integer.parseInt(part[indexPart]);
					for(int i= 0;i<5;i++)
					{
						if(UserInfo.myUserInfo.userName.compareTo(UserInfo.topUserInfo[i].userName) ==0 && UserInfo.myUserInfo.userName.length() == UserInfo.topUserInfo[i].userName.length())
						{
							UserInfo.myUserInfo.rank = i + 1; 
						}
					}
				}
				else
				{
					UserInfo.myUserInfo.userName = "---";
					UserInfo.myUserInfo.rank = 1000;
				}
			}
		}
		
	}
	
}
