<?php
require ('Anggota.php');

$Anggota1 = new Anggota('1', 'Rifa', 'Pertanian', 'Golkar');
echo $Anggota1->getId();
echo $Anggota1->getName();
echo $Anggota1->getBidang();
echo $Anggota1->getPartai();
echo '<hr>';

$Anggota1->setName('Rifa');
echo $Anggota1->getName();

$Anggota2 = new Anggota('2', 'Syifa', 'Industri', 'Perindo');
echo '<hr>';

?>