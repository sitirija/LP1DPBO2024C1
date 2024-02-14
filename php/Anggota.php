<?php

class Anggota{
    private $id = 0;
    private $name = "";
    private $bidang = "";
    private $partai = "";

    public function __construct($id = 0, $name = "", $bidang = "", $partai = ""){
        $this->id = $id;
        $this->name = $name;
        $this->bidang = $bidang;
        $this->partai = $partai;
    }

    public function setId($id){
        $this->id = $id;
    }

    public function getId(){
        return $this->id;
    }

    public function setName($name){
        $this->name = $name;
    }

    public function getName(){
        return $this->name;
    }

    public function setBidang($bidang){
        $this->bidang = $bidang;
    }

    public function getBidang(){
        return $this->bidang;
    }

    public function setPartai($partai){
        $this->partai = $partai;
    }

    public function getPartai(){
        return $this->partai;
    }
}

?>