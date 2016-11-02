<?php
$mat = $_POST['mat'];

include('conexion.php');
$con = conectaDB();
$sql ="delete from alumnos where mat='".$mat."'";

mysql_query($sql, $con);  

if(mysql_affected_rows()>0){
	echo "1";
}
else{
	echo "2";
}
 
?>
