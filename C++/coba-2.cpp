#include <iostream>
#include <array>

using namespace std;

const int MAX_INVENTARIS = 100;

struct Produk
{
    string nama;
    double harga;
    int stok;
};

int main(){
    Produk inventaris[MAX_INVENTARIS];
    int jumlahProduk;
    int pilihan;

    do{ 
        cout << "====INVENTARIS TOKO====" << endl;
        cout << "1. Tambah Produk" << endl;
        cout << "2. Hapus Produk" << endl;
        cout << "3. Lihat inventasi" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih (1/2/3/4) : " << endl;
        cin >> pilihan;

    switch (pilihan){
        case 1:
        if(jumlahProduk < MAX_INVENTARIS){
            cout << "Nama produk : ";
            cin.ignore();
            getline(cin, inventaris[jumlahProduk].nama);
            cout << "Harga produk : " << endl;
            cin >> inventaris[jumlahProduk].harga;
            cout << "Stok produk : " << endl;
            cin >> inventaris[jumlahProduk].stok;
            jumlahProduk++;
            cout << "Produk telah di tambahkan!" << endl;
        }else{
            cout << "Inventaris penuh. Tidak dapat menambahkan produk" << endl;
        }break;

    

    case 2 :
     if (jumlahProduk > 0){
        string namaProduk;
        cout << "Masukkan nama produk yang ingin di hapus : " ;
        cin.ignore();
        getline(cin, namaProduk);

        bool ditemukan = false;
        for (int i = 0; i < jumlahProduk; i++){
            if(inventaris[i].nama == namaProduk){
                for( int j = i; j < jumlahProduk - 1; j++ ){
                    inventaris[j] = inventaris[j + 1];
                }
                jumlahProduk--;
                cout << "Produk \"" << namaProduk << "\" telah di hapus." << endl;
                ditemukan = true;
                break;
            }
        }
        if(!ditemukan){
            cout << "Produk dengan nama \"" << namaProduk << "\" tidak di temukan" << endl;
        }
     }else{
        cout << "Belum ada data! di perhatikan nama produk" << endl;
     }
    break;

    case 3 :
    cout << "====Inventaris Toko====" << endl;
    if ()

    }






    }while();

    return 0;

}
