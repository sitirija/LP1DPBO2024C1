#include <bits/stdc++.h>
#include "Anggota.cpp"

using namespace std;

int main()
{
    int i, n = 0;
    // int id;
    string name;
    string bidang;
    string partai;

    list<Anggota> llist;

    //menambah data
    cin >> n;
    for(i = 0 ; i < n ; i++)
    {
        Anggota temp;

        cin >> name >> bidang >> partai;
        
        // temp.set_id(id);
        temp.set_name(name);
        temp.set_bidang(bidang);
        temp.set_partai(partai);

        llist.push_back(temp);
    }

    cout << " DAFTAR ANGGOTA DPR " << '\n';
    i = 0;
    for(list<Anggota>::iterator it = llist.begin(); it != llist.end(); it++)
    {
        cout << (i + 1) << /*". " << it->get_id() <<*/ " | " << it->get_name() << " | " << it->get_bidang() << " | " << it->get_partai() << '\n';
        i++;
    }

    return 0;
}