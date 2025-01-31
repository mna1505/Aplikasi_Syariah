#include <iostream>
#include <iomanip>

using namespace std;

double hitungTotalKeuntungan (double tabunganAwal, double persentaseKeuntungan, int periode, double jumlahPeriode){
    periode = jumlahPeriode * 12;
    return (tabunganAwal * persentaseKeuntungan / 100) * periode;
    
}

double hitungBagiHasilNasabah (double hasilKeuntungan, double nisbahNasabah){
    return hasilKeuntungan * nisbahNasabah /100;
}

double hitungBagiHasilBank (double hasilKeuntungan, double nisbahBank){
    return hasilKeuntungan * nisbahBank / 100;
}

double hitungSaldoAkhir (double tabunganAwal, double hasilNasabah){
    return tabunganAwal + hasilNasabah;
}
int main () {
    
    double tabunganAwal, nisbahNasabah, nisbahBank, jumlahPeriode;
    int periode, persentaseKeuntungan;

    cout << "=== Aplikasi Perhitungan Tabungan Syariah ===" << endl << endl;

    cout << "Masukkan jumlah tabungan awal (Rp) : ";
    cin >> tabunganAwal;

    cout << "Masukkan jumlah persen nisbah nasabah (%) : ";
    cin >> nisbahNasabah;

    cout << "Masukkan jumlah persen nisbah bank (%) : ";
    cin >> nisbahBank;

    cout << "Masukkan jumlah periode (dalam satu periode berjumlah 12 bulan) : ";
    cin >> jumlahPeriode;

    cout << "Masukkan jumlah persentase tingkat keuntungan bulanan (%) : ";
    cin >> persentaseKeuntungan;

    cout << " " << endl << endl;

    cout << "=== Hasil Perhitungan ===" << endl;

    double hasilKeuntungan = hitungTotalKeuntungan (tabunganAwal, persentaseKeuntungan, periode, jumlahPeriode);
    cout << fixed << setprecision (2);
    cout << "Total keuntungan investasi : Rp" << hasilKeuntungan << endl;

    double hasilNasabah = hitungBagiHasilNasabah (hasilKeuntungan, nisbahNasabah);
    cout << "Jumlah bagi hasil untuk nasabah : Rp" << hasilNasabah << endl;

    double hasilBank = hitungBagiHasilBank (hasilKeuntungan, nisbahBank);
    cout << "Jumlah bagi hasil untuk bank : Rp" << hasilBank << endl;

    double hasilSaldoAkhir = hitungSaldoAkhir (tabunganAwal, hasilNasabah);
    cout << "Jumlah saldo akhir nasabah : Rp" << hasilSaldoAkhir << endl << endl;

    cout << "=== Terimakasih Telah Memakai Aplikasi Perhitungan Tabungan Syariah ===" << endl;
    cout << "== Semoga Menjadi Amal Jariyah ==";
}
