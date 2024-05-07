#include <iostream>
#include <array>

using namespace std;

int main(){

    /**
     * contoh 1
    */
    int angkaSaya[5];
    angkaSaya[0] = 1;
    angkaSaya[1] = 2;
    angkaSaya[2] = 3;
    angkaSaya[3] = 4;
    angkaSaya[4] = 5;

    int *ptr = angkaSaya;
    *(ptr + 4) = 99;
    angkaSaya[1] = 77;

    cout << "array ke " << &angkaSaya[0] << " yaitu " << angkaSaya[0] << endl;
    cout << "array ke " << &angkaSaya[1] << " yaitu " << angkaSaya[1] << endl;
    cout << "array ke " << &angkaSaya[2] << " yaitu " << angkaSaya[2] << endl;
    cout << "array ke " << &angkaSaya[3] << " yaitu " << angkaSaya[3] << endl;
    cout << "array ke " << &angkaSaya[4] << " yaitu " << angkaSaya[4] << endl;

    cout << endl;

    /**
     * contoh 2
    */
    array <int, 10> angka;

    for(int i = 0; i <= 9; i++){
        angka[i] = i;
        cout << "nilai array-" << i << " = " << angka[i] << endl;
    }

    cout << endl;

    cout << "jumlah array : " << angka.size() << endl;
    cout << "alamat awal : " << angka.begin() << endl;
    cout << "alamat akhir : " << angka.end() << endl;

    return 0;

}
