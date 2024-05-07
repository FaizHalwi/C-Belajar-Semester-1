#include <iostream>
#include <array>

using namespace std;

int main(){

    array <int, 10> nilai;
    /**
     * nilai masing2 siswa
     * contoh : masukan jumlah siswa dengan nilai 1 - 10 : <masukan jumlah siswa>
    */
   cout << endl;

    cout << "Data nilai siswa" << endl << endl;
    for ( int i = 0; i <= nilai.size(); i++){
        cout << "masukan siswa dengan nilai ";
        if( i == 0){
            cout << "0-9 : ";
        }else if ( i == 10){
            cout << "100 : ";
        }else{
            cout << i*10 << "-" << (i*10) + 9 << ": ";
        }
        cin >> nilai[i];
    }

    cout << endl;

    cout << "Grafik nilai siswa" << endl << endl;
    for (int i = 0; i <= nilai.size(); i++){
        if( i == 0){
            cout << "0-9 : ";
        }else if ( i == 10){
            cout << "100 : ";
        }else{
            cout << i*10 << "-" << (i*10) + 9 << ": ";
        }

        for (int grafik = 0; grafik < nilai[i]; grafik++){
            cout << "*";
        }
        cout << endl;
    }


    cin.get();
    return 0;

}
