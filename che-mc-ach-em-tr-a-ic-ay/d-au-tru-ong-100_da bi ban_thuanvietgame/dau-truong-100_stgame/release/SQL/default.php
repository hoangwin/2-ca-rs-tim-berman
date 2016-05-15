<?php
//khi goi thi goi nhu ben duoi chu y da ta base co it nhat 5 phan tu
//http://caogia.byethost10.com/dautruong100/default.php


	$con = mysql_connect("sql106.byethost10.com","b10_11763771","3041975");
	if (!$con)
    {
	
		die('Could not connect: ' . mysql_error());
    }
	$typeCommand =  $_GET['type'];

	// some code
	mysql_select_db("b10_11763771_GameLeaderBoard", $con);
	//user rank
	$selectCommand = "SELECT COUNT( * ) AS rank FROM  `dautruong100`" ;
	
	//echo $selectCommand;
	$result = mysql_query($selectCommand);	
	while($row = mysql_fetch_array($result))
	{
		echo " Tong So Nguoi Choi: " . $row['rank'];
	}
	//end some code
	mysql_close($con);
?> 


