<?php
    include "processor.php";
    include "disk.php";
    include "ram.php";
    include "pc.php";

    // memasukan data ke dalam kelas kelas
    $core = new processor(3400000, "AMD Ryzen");
    $disk1 = new disk("WD SDD", 3, 4000000);
    $memoryram = new ram(2900000, 16);
    $computer = new pc($core, $disk1, $memoryram);

    // print output
    echo "Processor<br>";
    echo "Nama : ".$core->getName()."<br>";
    echo "Harga : Rp ".$core->getPrice()."<br>";

    echo "<br>Disk<br>";
    echo "Type : ".$disk1->getType()."<br>";
    echo "Kapasitas : ".$disk1->getCapacity()."TB<br>";
    echo "Harga : Rp ".$disk1->getPrice()."<br>";

    echo "<br>RAM<br>";
    echo "Kapasitas : ".$memoryram->getCapacity()."GB<br>";
    echo "Harga : Rp ".$memoryram->getPrice()."<br>";
    
    $computer->setTotalPrice($core->getPrice() + $disk1->getPrice() + $memoryram->getPrice());    
    
    echo "<br> Total harga : Rp ".$computer->getTotalPrice()."<br>";
?>