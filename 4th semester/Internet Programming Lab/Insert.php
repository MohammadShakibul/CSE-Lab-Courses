<!DOCTYPE html>
<html>
<head>
	
</head>
<body>
	
    <?php 
        $host = "localhost";
        $dbuser="sakib";
        $dbpwd="1234";
        $dbname="registrationinfo";

        $connection = mysqli_connect($host,$dbuser,$dbpwd,$dbname);

     if($connection == False){
        echo "please Enter information correctly";
     }
     else{
        echo "successfull";
     } ?>
		
</body>
</html>
