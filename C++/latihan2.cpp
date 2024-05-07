#include <iostream>
using namespace std;

int main(){
    int angka[10];

    angka[0] = 0;
    angka[1] = 1;
    angka[2] = 2;
    angka[3] = 3;
    angka[4] = 4;
    angka[5] = 5;
    angka[6] = 6;
    angka[7] = 7;
    angka[8] = 8;
    angka[9] = 9;
    angka[10] = 10;

    /**
     * & = refrence
    */
    cout << &angka[0] << " data ke - " << angka[0] << endl;
    cout << &angka[1] << " data ke - " << angka[1] << endl;
    cout << &angka[2] << " data ke - " << angka[2] << endl;
    cout << &angka[3] << " data ke - " << angka[3] << endl;
    cout << &angka[4] << " data ke - " << angka[4] << endl;
    cout << &angka[5] << " data ke - " << angka[5] << endl;
    cout << &angka[6] << " data ke - " << angka[6] << endl;
    cout << &angka[7] << " data ke - " << angka[7] << endl;
    cout << &angka[8] << " data ke - " << angka[8] << endl;
    cout << &angka[9] << " data ke - " << angka[9] << endl;
    cout << &angka[10] << " data ke - " << angka[10] << endl;

    // mengubah angka ke angka lain
    int *ptr = angka;

    *(ptr + 6) = 978;
    angka[9] = 888;

    cout << endl;
    
    cout << &angka[0] << " data ke - " << angka[0] << endl;
    cout << &angka[1] << " data ke - " << angka[1] << endl;
    cout << &angka[2] << " data ke - " << angka[2] << endl;
    cout << &angka[3] << " data ke - " << angka[3] << endl;
    cout << &angka[4] << " data ke - " << angka[4] << endl;
    cout << &angka[5] << " data ke - " << angka[5] << endl;
    cout << &angka[6] << " data ke - " << angka[6] << endl;
    cout << &angka[7] << " data ke - " << angka[7] << endl;
    cout << &angka[8] << " data ke - " << angka[8] << endl;
    cout << &angka[9] << " data ke - " << angka[9] << endl;
    cout << &angka[10] << " data ke - " << angka[10] << endl;

    cout << endl;
    cout << "ukuran array "<< sizeof(angka) << " byte" << endl;
    cout << "jumlah array "<< sizeof(angka)/sizeof(int)<< endl;

    return 0;

}