#import class file.
from Anggota import Anggota

list = [] # menyimpan data anggota DPR

# menambah data
print("~ Menambahkan Data Anggota DPR ~")
print("Masukkan jumlah anggota DPR:")
    
n = int(input())
for i in range (n):
    id = int(input())
    name = input()
    bidang = input()
    partai = input()
    
    temp = Anggota(id, name, bidang, partai)
    list.append(temp)
    
# Mengubah data
print("\n~ Mengubah Data Anggota DPR ~")
print("Masukkan id dari data anggota DPR yang akan diubah:")
ubah_id = int(input())

for Anggota in llist:
        if Anggota.get_id() == ubah_id:
            print("Masukkan id baru:")
            id = int(input())
            Anggota.set_id(id)
            print("Data telah diubah!\n")
            break
        
# Menghapus data
print("~ Menghapus Data Anggota DPR ~")
print("Masukkan id dari data anggota DPR yang akan dihapus:")
hapus_id = int(input())

for Anggota in llist:
    if Anggota.get_id() == hapus_id:
        list.remove(Anggota)
        print("Data telah dihapus!\n")
        break

# Menampilkan Daftar Anggota DPR
print("~~ DAFTAR ANGGOTA DPR ~~")
for Anggota in list:
    print(Anggota.get_id(), "|", Anggota.get_name(), "|", Anggota.get_bidang(), "|", Anggota.get_partai())