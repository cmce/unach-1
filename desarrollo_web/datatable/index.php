<!DOCTYPE html>
<head>
<title>DataTable Basico - Christian MCE</title>
<link rel="stylesheet" href="css/bootstrap.min.css">
<link rel="stylesheet" href="css/dataTables.uikit.css">
</head>
<body>
<div id="wrap">
			<div class="container">
            <h3>Ejemplo basico: HTML5,jQuery, Bootstrap, PHP y MySQL </h3>
<table id="example" class="table table-striped table-bordered" cellspacing="0" width="100%">
        <thead>
            <tr>
                <th>ID</th>
                <th>Name</th>
                <th>Email</th>
                <th>Phone</th>
                <th>Start date</th>
                <th>Modified date</th>
            </tr>
        </thead>        
        <tbody>
		<?php
		include('conexion.php');
		$con = conectaDB();
		$sql ="select id,name,email,phone,created,modified from users";
		$result=mysql_query($sql, $con);  
		
		while($row = mysql_fetch_row($result)){

        echo "<tr>
                <td>$row[0]</td>
                <td>$row[1]</td>
                <td>$row[2]</td>
                <td>$row[3]</td>
                <td>$row[4]</td>
                <td>$row[5]</td>
            </tr>";
			
		}
		?>
        </tbody>
		<tfoot>
            <tr>
                <th>ID</th>
                <th>Name</th>
                <th>Email</th>
                <th>Phone</th>
                <th>Start date</th>
                <th>Modified date</th>
            </tr>
        </tfoot>
    </table>

	</div>
</div>
		<script src="js/jquery.min.js"></script>
		<script src="js/bootstrap.min.js"></script>
		<script src="js/jquery.dataTables.min.js"></script>
		<script src="js/dataTables.bootstrap.min.js"></script>
		<script type="text/javascript">
		$(document).ready(function() {
				$('#example').DataTable();
		} );
</script>
</body>
</html>