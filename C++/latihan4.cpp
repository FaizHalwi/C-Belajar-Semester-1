#include <iostream>
#include <array>
using namespace std;

int main(){
    /**
     * membuat array dengan standar library
     * array <int, jumlahArray>  namaVariabel
    */
    array < int, 5> nilai;

    for (int i = 0; i <=  4; i++){
        nilai[i] = i;
        cout << "nilai array[" << i << "] = " << nilai[i] << " - address = " << &nilai[i] << endl;
    }

    cout << endl;

    cout << "ukuran array ; " << nilai.size() << endl;
    cout << "address awal : " << nilai.begin() << endl;
    cout << "address akhir : " << nilai.end() << endl;
    cout << "nilai ke 3 : " << nilai.at(3) << endl;


    cin.get();
    return 0;
}