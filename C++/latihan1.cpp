// Materi
// definisi atau penjelasan type data dan array
// jenis-jenis type data pada array Bahasa pemrograman C++
// contoh pengenalan bahasa C++ dan langsung ke array + menjelaskan type data

/**
 * Cara penamaan variabel
 * contoh : typeData namaVariabel = 10;
 * contoh : int angka = 10;
*/

/**
 * Type Data pada C++
 * 
*/



#include <iostream>
using namespace std;

int main(){

    /**
     * Belajar Membuat Array
    */

    /**
     * tentukan type data dan seberapa banyak data
    */
    int nilai[5];
    /**
     * isikan angka dengan sesuai urutan indexnya
    */
    nilai[0] = 1;
    nilai[1] = 2;
    nilai[2] = 3;
    nilai[3] = 4;
    nilai[4] = 5;

    /**
     * menampilkan angka ke terminal
    */
    cout << &nilai[0] << " nilai ke - " << nilai[0] << endl;
    cout << &nilai[1] << " nilai ke - " << nilai[1] << endl;
    cout << &nilai[2] << " nilai ke - " << nilai[2] << endl;
    cout << &nilai[3] << " nilai ke - " << nilai[3] << endl;
    cout << &nilai[4] << " nilai ke - " << nilai[4] << endl;

    /**
     *  menangkap angka yang ingin di ubah
    */
    int *ptr = nilai;
    /**
     * ubah angka sesuai yang di inginkan
    */
    *(ptr + 2) = 90; 
    nilai[3] = 570;

    cout << endl;  // untuk enter

    /**
     *  menampilkan angka ke terminal
    */
    cout << &nilai[0] << " nilai ke - " << nilai[0] << endl;
    cout << &nilai[1] << " nilai ke - " << nilai[1] << endl;
    cout << &nilai[2] << " nilai ke - " << nilai[2] << endl;
    cout << &nilai[3] << " nilai ke - " << nilai[3] << endl;
    cout << &nilai[4] << " nilai ke - " << nilai[4] << endl;

    /**
     * ( c = console, in = input ) => cin
    */
    cout << "masukan angka ke 2 : ";
    cin >> nilai[1];


    cout << &nilai[0] << " nilai ke - " << nilai[0] << endl;
    cout << &nilai[1] << " nilai ke - " << nilai[1] << endl;
    cout << &nilai[2] << " nilai ke - " << nilai[2] << endl;
    cout << &nilai[3] << " nilai ke - " << nilai[3] << endl;
    cout << &nilai[4] << " nilai ke - " << nilai[4] << endl;
    return 0;

}