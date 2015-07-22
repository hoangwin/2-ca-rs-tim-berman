using UnityEngine;
using System.Collections;

public class DEF
{
	public static float scaleX;
	public static float scaleY;
	
	public static float sx_ortho=1.0f;
	public static float sy_ortho=1.0f;
	
	//public static float m_VerSize = 1;
	//public static float m_horSize =1;
	
	public static float nm = 100;//default. Chu y la dung chung cho toan game
	public static float DISPLAY_WIDTH;
	public static float DISPLAY_HEIGHT;
	public static float DISPLAY_WIDTH_HALF;
	public static float DISPLAY_HEIGHT_HALF;
	public static float DISPLAY_RATIO;
	public static float DISPLAY_WIDTH_ORTHO;
	public static float DISPLAY_HEIGHT_ORTHO;
	public static float DISPLAY_WIDTH_ORTHO_HALF;
	public static float DISPLAY_HEIGHT_ORTHO_HALF;
	public static float DISPLAY_RATIO_ORTHOR_X;
	public static float DISPLAY_RATIO_ORTHOR_Y;
	public static float MINX,MINY,MAXX,MAXY;
	public static bool IS_INIT = false;
	
	
	//public static Sounds AUDIOS;
	
	public static void Init()
	{
		
		if (IS_INIT == true)
			return;
		
		DISPLAY_WIDTH = Screen.width;
		DISPLAY_HEIGHT = Screen.height;
		DISPLAY_RATIO = DISPLAY_WIDTH / DISPLAY_HEIGHT;
		DISPLAY_HEIGHT_ORTHO = Camera.main.orthographicSize * 2;//m_VerSize
		DISPLAY_WIDTH_ORTHO = DISPLAY_HEIGHT_ORTHO * DISPLAY_RATIO;//m_horSize
		DISPLAY_RATIO_ORTHOR_X = DISPLAY_WIDTH_ORTHO / DISPLAY_WIDTH;
		DISPLAY_RATIO_ORTHOR_Y = DISPLAY_HEIGHT_ORTHO / DISPLAY_HEIGHT;
		DISPLAY_WIDTH_ORTHO_HALF = DISPLAY_WIDTH_ORTHO / 2;
		DISPLAY_HEIGHT_ORTHO_HALF = DISPLAY_HEIGHT_ORTHO / 2;
		DISPLAY_WIDTH_HALF = DISPLAY_WIDTH / 2;
		DISPLAY_HEIGHT_HALF = DISPLAY_HEIGHT / 2;
		MINX = -DISPLAY_WIDTH_HALF;
		MAXX = DISPLAY_WIDTH_HALF;
		MINY = -DISPLAY_HEIGHT_HALF;
		MAXY =  DISPLAY_HEIGHT_HALF;
		scaleX = Screen.width/800.0f;
		scaleY = Screen.height/1280f;
		getScaleOrtho();
		
		IS_INIT = true;
	}
	
	public static Vector3 Vec3(float PixelX, float PixelY, float z = 0)
	{
		return new Vector3(((PixelX * DISPLAY_WIDTH_ORTHO / Screen.width) - DISPLAY_WIDTH_ORTHO / 2), (DISPLAY_HEIGHT_ORTHO / 2 - PixelY * DISPLAY_HEIGHT_ORTHO / Screen.height), z);
	}
	public static Vector3 Pixel2Othor(Vector3 vec)
	{
		return new Vector3 (vec.x *DISPLAY_RATIO_ORTHOR_X,vec.y *DISPLAY_RATIO_ORTHOR_Y,vec.z );
	}
	//public static Vector3 Pixel2Othor(float x,float y)
	//{
	//return new Vector3 (x *DISPLAY_RATIO_ORTHOR_X,y *DISPLAY_RATIO_ORTHOR_Y,0 );
	//}
	//public static Vector2 Pixel2OthorVec2(float x,float y)
	//{
	//return new Vector2 (x *DISPLAY_RATIO_ORTHOR_X,y *DISPLAY_RATIO_ORTHOR_Y );
	//}
	public static Vector3 Pixel2Othor(float x,float y,float z)
	{
		return new Vector3 (x *DISPLAY_RATIO_ORTHOR_X,y *DISPLAY_RATIO_ORTHOR_Y,z );
	}
	public static Vector3 Pixel2OthorAmDuong(Vector3 vec)
	{
		return new Vector3 (vec.x *DISPLAY_RATIO_ORTHOR_X - DISPLAY_WIDTH_ORTHO_HALF,vec.y *DISPLAY_RATIO_ORTHOR_Y-DISPLAY_HEIGHT_ORTHO_HALF,vec.z );
	}
	public static Vector2 Pixel2OthorAmDuongVec2(float x,float y)
	{
		return new Vector2 (x *DISPLAY_RATIO_ORTHOR_X - DISPLAY_WIDTH_ORTHO_HALF,y *DISPLAY_RATIO_ORTHOR_Y-DISPLAY_HEIGHT_ORTHO_HALF );
	}
	public static Vector2 Pixel2PixelAmDuongVec2(float x,float y)
	{
		return new Vector2 (x - DISPLAY_WIDTH_HALF,y -DISPLAY_HEIGHT_HALF );
	}
	public static void ResizeBySize(GameObject g,float _x,float _y)
	{
		//g.transform.localScale = new Vector3 (1, 1, 1);
		g.transform.localScale = new Vector3 (1, 1, 1);
		SpriteRenderer c = g.GetComponent<SpriteRenderer> ();
		
		sx_ortho = _x / DISPLAY_WIDTH* DISPLAY_WIDTH_ORTHO;
		sy_ortho = _y/  DISPLAY_HEIGHT * DISPLAY_HEIGHT_ORTHO;
		sx_ortho /= c.bounds.size.x;
		sy_ortho /= c.bounds.size.y;
		
		
		if(_y==-1)
			sy_ortho = sx_ortho ;
		else if(_x==-1)
			sx_ortho = sy_ortho;
		g.transform.localScale = new Vector3 (sx_ortho, sy_ortho, 1);
		Debug.Log ("SCALE " + sx_ortho + " " + sy_ortho);
	}
	
	public static void getScaleOrtho()
	{
		sx_ortho = DISPLAY_WIDTH_ORTHO*1f/(800.0f/100f);
		sy_ortho = DISPLAY_HEIGHT_ORTHO*1f/(1280f/100f);
		Debug.Log ("SCALE:: " + sx_ortho + " " + sy_ortho);
		//chu y dung cho tung loai man hing va anh nen// mac dinh la 800x1280
		
	}
	public static void ScaleAnchorGui()
	{
		//chu y dung cho tung loai man hing va anh nen// mac dinh la 800x1280
		GameObject mobject = GameObject.Find("Anchor");
		float s1 = DISPLAY_WIDTH/DISPLAY_HEIGHT;
		float s2 = 800.0f/1280f;
		mobject.transform.localScale = new Vector3 (1-(s2-s1), 1,1);		
	}
	
}

