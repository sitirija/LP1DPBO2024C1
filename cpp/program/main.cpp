/*Saya Siti Rija Dana Prima dengan NIM 2202014 mengerjakan LP1 dalam mata kuliah DPBO untuk keberkahanNya 
 maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

//import library and file
#include <bits/stdc++.h>
#include "Anggota.cpp"

//using standard namespace
using namespace std;

int main()
{
    /* Default code. */

    int n; //variabel untuk jumlah anggota DPR
    int id; //variabel untuk ID anggota DPR
    string name; //variabel untuk nama anggota DPR
    string bidang; //variabel untuk nama bidang anggota DPR
    string partai; //variabel untuk nama partai anggota DPR

    list<Anggota> llist; //menyimpan data anggota DPR

    //menambah data
    cout << "~ Menambahkan Data Anggota DPR ~" << '\n';
    cout << "masukan data anggota DPR" << '\n';
    cin >> n; //masukan jumlah anggota DPR
    for(int i = 0 ; i < n ; i++)
    {
        //masukan data tiap anggota DPR
        cin >> id >> name >> bidang >> partai;

        Anggota temp;
        
        temp.set_id(id);
        temp.set_name(name);
        temp.set_bidang(bidang);
        temp.set_partai(partai);

        llist.push_back(temp);
    }

    //Mengubah data
    cout << "\n~ Mengubah Data Anggota DPR ~" << '\n';
    cout << "masukan id dari data anggota DPR yang akan diubah: " << '\n';
    int ubahId; //variabel untuk mengubah id data anggota DPR
    cin >> ubahId;

    for (auto& anggotaDPR : llist) //auto untuk iterator dalam loop for.
    {
        if (anggotaDPR.get_id() == ubahId)
        {
            cout << "Masukan id baru: " << '\n';
            cin >> id;
            
            anggotaDPR.set_id(id);
            // anggotaDPR.set_name(name);
            // anggotaDPR.set_bidang(bidang);
            // anggotaDPR.set_partai(partai);
        
            cout << "Data telah diubah!" << "\n\n";
            break;
        }
    }
    
    //Menghapus data
    cout << "~ Menghapus Data Anggota DPR ~" << '\n';
    cout << "masukan id dari data anggota DPR yang akan dihapus: " << '\n';
    int hapusId; //variabel untuk menghapus id data anggota DPR
    cin >> hapusId;

    for (auto it = llist.begin(); it != llist.end(); ++it) //auto untuk iterator dalam loop for.
    {
        if (it->get_id() == hapusId)
        {
            it = llist.erase(it);
            cout << "Data telah dihapus!" << "\n\n";
            break;
        }
    }


    cout << "~~ DAFTAR ANGGOTA DPR ~~" << '\n';
    // cout << "ID" << " | " << "Nama" << " | " << "Nama Bidang" << " | " << "Nama Partai" << '\n';
    for(auto it = llist.begin(); it != llist.end(); it++)
    {
        cout << it->get_id() << " | " << it->get_name() << " | " << it->get_bidang() << " | " << it->get_partai() << '\n';
    }

    return 0;
}