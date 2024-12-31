#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menentukan status kelulusan
string getStatus(double nilaiAkhir) {
    if (nilaiAkhir >= 60.0) {
        return "Lulus";
    } else {
        return "Tidak Lulus";
    }
}

int main() {
    string namaMahasiswa;
    int nim;
    double nilaiTugas, nilaiUTS, nilaiUAS, nilaiAkhir;

    // Input data mahasiswa
    cout << "=== Program Penilaian Mahasiswa ===" << endl;
    cout << "Masukkan Nama Mahasiswa: ";
    getline(cin, namaMahasiswa);
    cout << "Masukkan NIM Mahasiswa: ";
    cin >> nim;
    cout << "Masukkan Nilai Tugas (0-100): ";
    cin >> nilaiTugas;
    cout << "Masukkan Nilai UTS (0-100): ";
    cin >> nilaiUTS;
    cout << "Masukkan Nilai UAS (0-100): ";
    cin >> nilaiUAS;

    // Validasi input nilai
    if (nilaiTugas < 0 || nilaiTugas > 100 || nilaiUTS < 0 || nilaiUTS > 100 || nilaiUAS < 0 || nilaiUAS > 100) {
        cout << "Error: Nilai harus berada dalam rentang 0-100!" << endl;
        return 1;
    }

    // Hitung nilai akhir
    nilaiAkhir = (nilaiTugas * 0.3) + (nilaiUTS * 0.3) + (nilaiUAS * 0.4);

    // Tampilkan hasil
    cout << endl;
    cout << "=== Hasil Penilaian ===" << endl;
    cout << "Nama Mahasiswa: " << namaMahasiswa << endl;
    cout << "NIM: " << nim << endl;
    cout << "Nilai Akhir: " << nilaiAkhir << endl;
    cout << "Status: " << getStatus(nilaiAkhir) << endl;

    return 0;
}
