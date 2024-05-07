#include <iostream>
using namespace std;

int main(){

    int angkaSaya[4];

    angkaSaya[0] = 3;
    angkaSaya[1] = 4;
    angkaSaya[2] = 5;
    angkaSaya[3] = 6;

    int *ptr = angkaSaya;
    *(ptr + 2) = 10;
    angkaSaya[1] = 55;
    angkaSaya[3] = 88;

    cout << &angkaSaya[0] << " ini angka ke - " << angkaSaya[0] << endl;
    cout << &angkaSaya[1] << " ini angka ke - " << angkaSaya[1] << endl;
    cout << &angkaSaya[2] << " ini angka ke - " << angkaSaya[2] << endl;
    cout << &angkaSaya[3] << " ini angka ke - " << angkaSaya[3] << endl;


    cout << endl;
    cout << "ukuran angka = " << sizeof(angkaSaya) << " byte" << endl;
    cout << "jumlah angka = " << sizeof(angkaSaya)/sizeof(int) << endl;

    return 0;

}