<?php
$Array = array();
$count = 0;
$fn = fopen("numbers.txt", "r") or die("fail to open file");
while($row = fgets($fn)) 
{
	$Array = explode(" ", $row );
}
fclose($fn);
$i=0;
while ($i<sizeof($Array)-1)
{
	if($Array[$i]==$Array[$i+1])
		$count++;
	$i++;	
}
echo "Count of repeating nimbers is " . $count;
?>