//import library
import java.util.Scanner;
import java.util.ArrayList;

public class main{
    public static void main(String[] args){
        //let's try another method as usual.
        // int i, n = 0;
        // int id;
        // String name;
        // String bidang;
        // String partai;

        System.out.println("~ Menambahkan Data Anggota DPR ~");
        System.out.println("Masukkan jumlah anggota DPR:");

        ArrayList<Anggota> list = new ArrayList<>();
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();


        for(int i = 0; i < n; i++){
            int id = sc.nextInt();
            String name = sc.next();
            String bidang = sc.next();
            String partai = sc.next();

            Anggota temp = new Anggota(id, name, bidang, partai);
            list.add(temp);
        }

        /* Output. */

        //MENGUBAH DATA ANGGOTA DPR
        System.out.println("\n~ Mengubah Data Anggota DPR ~");
        System.out.println("Masukkan ID data anggota DPR yang akan diubah:");
        int ubahId = sc.nextInt();

        for(int i = 0; i < n; i++){
            if(list.get(i).getId() == ubahId){
                System.out.println("Masukkan ID baru:");
                int id = sc.nextInt();
                // list.set(i).setId(id);
                System.out.println("Data telah diubah!\n");
                break;
            }
        }

        //MENGHAPUS DATA ANGGOTA DPR
        System.out.println("~ Menghapus Data Anggota DPR ~");
        System.out.println("Masukkan ID data anggota DPR yang akan dihapus:");
        int hapusId = sc.nextInt();

        for (int i = 0; i < n; i++) {
            // Anggota anggota = list.get(i);
            if (list.get(i).getId() == hapusId) {
                list.remove(i);
                System.out.println("Data telah dihapus!\n");
                break;
            }
        }
        
        System.out.println("~~ DAFTAR ANGGOTA DPR ~~");
        for(int i = 0; i < n; i++){
            System.out.println(list.get(i).getId() + " | " + list.get(i).getName() + " | " + list.get(i).getBidang() + " | " + list.get(i).getPartai());
        }

        //close scanner. What the heck is this? well, search it on Internet.
        sc.close();
    }
}