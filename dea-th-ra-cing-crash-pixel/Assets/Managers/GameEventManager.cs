public static class GameEventManager {

	public delegate void GameEvent();

	public static event GameEvent GameStartEvent, GameOver,GameReStart,GameInitEvent;

	public static void TriggerGameStart(){
		if(GameStartEvent != null){
			GameStartEvent();
		}
	}

	public static void TriggerGameReStart(){
		if(GameReStart != null){
			GameReStart();
		}
	}

	public static void TriggerGameOver(){
		if(GameOver != null){
			GameOver();
		}
	}
	public static void TriggerGameInit()
	{
			if(GameInitEvent != null){
				GameInitEvent();
			}
		
	}
}