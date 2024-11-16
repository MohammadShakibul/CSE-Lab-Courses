<htmL>
    <head>
        <title>Php Introductory class</title>
    </head>
    <body>
        <?php 
        echo "Hello World. <br>";
        $a = "This is the first class of PHP.";
        echo "$a";
        $x = 5;
        echo "<br>$x<br>";
        var_dump($x);
        echo "<br>";
        var_dump($a);
        $y= 109.35;
        var_dump($y);
        var_dump($y);
        $mobiles = array("iPhone","Samsung","Huawei","Vivo","Oppo");
        echo "<br>";
        var_dump($mobiles);
        echo"<br>";
        $c = "Hello World";
        echo "$c<br>";
        echo strlen($c);
        echo "<br>";
        echo str_word_count($c);
        echo "<br>";
        echo strrev($c);
        echo "<br>";
        echo strpos($c, "World");
        echo "<br>";
        echo str_replace("World","Earth",$c);
        ?>
    </body>
</htmL>