#include <iostream>
using namespace std;

int main() {
    // Array untuk menyimpan data suhu harian selama seminggu (7 hari)
    double suhuHarian[7] = {30.5, 31.2, 29.8, 28.5, 32.0, 30.7, 29.1};

    // Menghitung rata-rata suhu harian
    double totalSuhu = 0;
    for (int i = 0; i < 7; i++) {
        totalSuhu += suhuHarian[i];
    }
    double rataRataSuhu = totalSuhu / 7;

    cout << "Rata-rata suhu harian selama seminggu adalah: " << rataRataSuhu << " derajat Celsius" << endl;

    return 0;
}
