#include<iostream>
using namespace std;

main()
{
    string nama;
    int umur, nilai, jumlah_nilai, nilai1, nilai2, nilai3, nilai4;;
    float nilai_rata;

    cout << "\tProgram Menentukan Kelulusan Dari Nilai Rata-Rata Ujian Nasional Untuk SMP" << endl;
    cout << "==========================================================================================\n" << endl;

    cout << "Siapa nama lengkap anda ? ";
    getline(cin, nama);
    cout << "Berapa umur anda ? ";
    cin >> umur;

    cout << "\nNama anda adalah " << nama << endl;
    cout << "Umur Anda saat ini adalah " << umur << " tahun\n" << endl;

    cout << "==========================================================================================\n" << endl;

    cout << "Masukkan nilai anda dengan format (0-100) tanpa koma\n";
    cout << "Masukkan nilai Bahasa Indonesia        : ";
    cin >> nilai1;
    cout << "Masukkan nilai Bahasa Inggris          : ";
    cin >> nilai2;
    cout << "Masukkan nilai Matematika              : ";
    cin >> nilai3;
    cout << "Masukkan nilai Ilmu Pengetahuan Alam   : ";
    cin >> nilai4;

    jumlah_nilai=nilai1+nilai2+nilai3+nilai4;
    cout << "\n============================================";
    cout << "\n\tKeseluruhan nilai anda = " << jumlah_nilai;
    cout << "\n============================================\n";

    nilai_rata=jumlah_nilai/4;
    cout << "\n================================================";
    cout << "\n\tNilai rata-rata anda adalah = " << nilai_rata << endl;
    cout << "================================================\n\n";

    if (nilai_rata<75){
    cout << "===========================================================\n";
        cout << "\t\tMohon maaf anda tidak lulus\n";
    cout << "===========================================================\n";
    } else {
    cout << "===========================================================\n";
        cout << "\t\tSelamat anda lulus\n";
    cout << "===========================================================\n";
    }
    return 0;
}
