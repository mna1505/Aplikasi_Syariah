#include <iostream>
#include <iomanip>

using namespace std;

    double hitungNilaiMargin (double hargaBarang, double marginKeuntungan){
        return hargaBarang * (marginKeuntungan / 100);
    } 

    double hitungTotalHarga (double hargaBarang, double nilaiMargin){
        return hargaBarang + nilaiMargin;
    }

    double hitungCicilanBulanan (double totalHarga, double jumlahCicilan){
        return totalHarga / jumlahCicilan;
    }

int main (){
    double hargaBarang, marginKeuntungan;
    int jumlahCicilan;

    cout << "=== Aplikasi Akad Jual Beli Syariah ===" << endl;
    
    cout << "Masukkan harga barang (Rp) : ";
    cin >> hargaBarang;

    cout << "Masukkan margin keuntungan yang disepakati (%) : ";
    cin >> marginKeuntungan;

    cout << "Masukkan jumlah cicilan (bulan) : ";
    cin >> jumlahCicilan;

    cout << endl << endl;

    cout << fixed << setprecision (2);
    cout << "Harga Barang : Rp" << hargaBarang << endl;

    double nilaiMargin = hitungNilaiMargin (hargaBarang, marginKeuntungan);
    cout << "Total Margin Keuntungan : Rp" << nilaiMargin << endl;

    double totalHarga = hitungTotalHarga (hargaBarang, nilaiMargin);
    cout << "Total Harga : Rp" << totalHarga << endl;

    double cicilanBulanan = hitungCicilanBulanan (totalHarga, jumlahCicilan);
    cout << "Cicilan bulanan : Rp" << cicilanBulanan << endl;

    cout << "=== Terimakasih Telah Memakai Aplikasi Akad Jual Beli Syariah ===" << endl;
    cout << "== Semoga Menjadi Amal Jariyah ==";
    cout << endl << endl;
    
}
