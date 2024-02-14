public class Anggota{
    //private atributes.
    private int id;
    private String name;
    private String bidang;
    private String partai;

    /* Constructors */

    public Anggota(){
        this.id = 0;
        this.name = "";
        this.bidang = "-";
        this.partai = "-";
    }

    public Anggota(int id, String name, String bidang, String partai){
        this.id = id;
        this.name = name;
        this.bidang = bidang;
        this.partai = partai;
    }

    /* Getter and Setter. */

    //get name
    public int getId(){
        return this.id;
    }

    //set name
    public void setId(int id){
        this.id = id;
    }

    //get name
    public String getName(){
        return this.name;
    }

    //set name
    public void setName(String name){
        this.name = name;
    }

    //get bidang
    public String getBidang(){
        return this.bidang;
    }
    //set bidang
    public void setBidang(String bidang){
        this.bidang = bidang;
    }

    //get partai
    public String getPartai(){
        return this.partai;
    }

    //set partai
    public void setPartai(String partai){
        this.partai = partai;
    }
}