<?php
//khi goi thi goi nhu ben duoi chu y da ta base co it nhat 5 phan tu
//http://caogia.byethost10.com/WordSearch_MegaWordSearch/SetGetData.php?type=select&username=Hello
//http://caogia.byethost10.com/WordSearch_MegaWordSearch/SetGetData.php?type=update&username=toanstt&Score=12&country=14a
//
/*
SELECT COUNT( * ) AS rank
FROM  `WordSearch_MegaWordSearch` 
WHERE  `Score` >= ( 
SELECT  `Score` 
FROM  `WordSearch_MegaWordSearch` 
WHERE  `UserName` =  'toanstt' )
*/
$con = mysql_connect("sql106.byethost10.com","b10_11763771","3041975");
if (!$con)
  {
	
	die('Could not connect: ' . mysql_error());
  }


$typeCommand =  $_GET['type'];

// some code
mysql_select_db("b10_11763771_GameLeaderBoard", $con);

if($typeCommand == "update")
{	
	$UpdateCommand = "INSERT INTO `WordSearch_MegaWordSearch` (`UserName`, `Score`,`Country`)	" 
	."VALUES ('". $_GET["username"] 
	."'," . $_GET["Score"] 		 
	. ",'" . $_GET["country"] . "'"
	. ") ON DUPLICATE KEY UPDATE "
	. " `Score` = IF( `Score`>" . $_GET["Score"] . ", `Score`," . $_GET["Score"]. " )";
	
	//echo $UpdateCommand;
	$result = mysql_query($UpdateCommand);
}else if($typeCommand == "select")
{
	$selectCommand = "SELECT * FROM `WordSearch_MegaWordSearch` ORDER BY `Score` DESC LIMIT 0 , 5";
	//$Insert_UpdateCommand = "INSERT INTO `WordSearch_MegaWordSearch` (`UserName`, `Score`, `Country`, `Unknow`) VALUES (`CaoGia`, 1,'VN','UnKnow') ON DUPLICATE KEY UPDATE `Score` = 1234"
	$result = mysql_query($selectCommand);
	echo mysql_num_rows ($result)."|";
	while($row = mysql_fetch_array($result))
	{
		echo $row['UserName'] . "|" . $row['Score'];
		echo "|";
	}
	
	//user rank
	$selectCommand = "SELECT COUNT( * ) AS rank FROM  `WordSearch_MegaWordSearch` WHERE  `Score` >= ( SELECT  `Score` FROM  `WordSearch_MegaWordSearch` WHERE  `UserName` ='".$_GET["username"]. "')";
	
	//echo $selectCommand;
	$result = mysql_query($selectCommand);	
	while($row = mysql_fetch_array($result))
	{
		echo $row['rank']. "|";
	}
	//user info
	$username = $_GET["username"];
	$selectCommand = "SELECT *   FROM  `WordSearch_MegaWordSearch` WHERE  `UserName` =  '".$username."'";
	//echo $selectCommand ;
	$result = mysql_query($selectCommand);
	while($row = mysql_fetch_array($result))
	{
		echo $row['UserName'] . "|" . $row['Score'];
		echo "|";
	}
}

//end some code
mysql_close($con);
?> 


