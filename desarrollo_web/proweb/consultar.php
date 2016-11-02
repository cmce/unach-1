<?php
$mat = $_POST['mat'];

include('conexion.php');
$con = conectaDB();
$sql ="select mat,nombre from alumnos where mat='".$mat."'";

$result=mysql_query($sql, $con);  

$jsondata["success"] = true;
   
$row = mysql_fetch_row($result);

$jsondata = array("nombre"=> $row[1]);
  
 echo json_encode($jsondata);
?>
