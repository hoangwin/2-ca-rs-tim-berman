<?php
//khi goi thi goi nhu ben duoi chu y da ta base co it nhat 5 phan tu
//http://gamethuanviet.com/Kill_Flappy/SetGetData.php?type=select&username=Hello
//http://gamethuanviet.com/Kill_Flappy/SetGetData.php?type=update&username=toanstt&Score=12&Level=31&Played=14&country=14a

$con = mysql_connect("localhost","gamethua_game","30xxxx5");
if (!$con)
  {
	
	die('Could not connect: ' . mysql_error());
  }


$typeCommand =  $_GET['type'];

// some code
mysql_select_db("gamethua_thuanviet", $con);

if($typeCommand == "update")
{	if($_GET["Score"] <78988)
	{
		$UpdateCommand = "INSERT INTO `Kill_Flappy` (`UserName`, `Score`,`Level`, `Played`, `Country`)	" 
		."VALUES ('". $_GET["username"] 
		."'," . $_GET["Score"] 
		. "," .$_GET["Level"]  
		. "," .$_GET["Played"]  
		. ",'" . $_GET["country"] . "'"
		. ") ON DUPLICATE KEY UPDATE "
		. " `Score` = IF( `Score`>" . $_GET["Score"] . ", `Score`," . $_GET["Score"]. " ),"
		. " `Played` = IF( `Played` >" . $_GET["Played"] . ", `Played`," . $_GET["Played"]. " )";	
		//echo $UpdateCommand;
		$result = mysql_query($UpdateCommand);
	}
}else if($typeCommand == "select")
{
	$selectCommand = "SELECT * FROM `Kill_Flappy` ORDER BY `Score` DESC LIMIT 0 , 10";
	//$Insert_UpdateCommand = "INSERT INTO `Kill_Flappy` (`UserName`, `Score`, `Country`, `Unknow`) VALUES (`CaoGia`, 1,'VN','UnKnow') ON DUPLICATE KEY UPDATE `Score` = 1234"
	$result = mysql_query($selectCommand);
	echo mysql_num_rows ($result)."|";
	while($row = mysql_fetch_array($result))
	{
		echo $row['UserName'] . "|" . $row['Score']. "|" . $row['Level'];
		echo "|";
	}
	
	//user rank
	$selectCommand = "SELECT COUNT( * ) AS rank FROM  `Kill_Flappy` WHERE  `Score` >= ( SELECT  `Score` FROM  `Kill_Flappy` WHERE  `UserName` ='".$_GET["username"]. "')";
	
	//echo $selectCommand;
	$result = mysql_query($selectCommand);	
	while($row = mysql_fetch_array($result))
	{
		echo $row['rank']. "|";
	}
	//user info
	$username = $_GET["username"];
	$selectCommand = "SELECT *   FROM  `Kill_Flappy` WHERE  `UserName` =  '".$username."'";
	//echo $selectCommand ;
	$result = mysql_query($selectCommand);
	while($row = mysql_fetch_array($result))
	{
		echo $row['UserName'] . "|" . $row['Score']. "|" . $row['Level'];
		echo "|";
	}
}

//end some code
mysql_close($con);
?> 


