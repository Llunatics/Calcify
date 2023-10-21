#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << "Andiko Ramadani, NIM: 3337230003" << endl; 

    do{
        int menu;
        cout << "Daftar Menu" << endl;
        cout << "1. Kalkulator Matematika Sederhana" << endl;
        cout << "2. Kalkulator Usia" << endl;
        cout << "3. Kalkulator Konversi Sistem Bilangan" << endl;
        cout << "4. Kalkulator Pajak Penghasilan" << endl;
        cout << "5. Kalkulator BMI" << endl;
        cout << "Silahkan Pilih Menu (1/2/3/4/5): ";
        cin >> menu;

        if(menu==1){
            int opsi;
            cout << "1. Kalkulator Penjumlahan" << endl;
            cout << "2. Kalkulator Pengurangan" << endl;
            cout << "3. Kalkulator Perkalian" << endl;
            cout << "4. Kalkulator Pembagian" << endl;
            cout << "5. Kalkulator Hasil Bagi" << endl;
            cout << "6. Kembali ke Menu Sebelumnya" << endl;
            cout << "7. Keluar Program" << endl;

            do{
                cout << "Silahkan Pilih Opsi (1/2/3/4/5/6/7): ";
                cin >> opsi;

                if(opsi==1){
                    float a, b, hasil;
                    cout << "Masukkan Nilai A: ";
                    cin >> a;
                    cout << "Masukkan Nilai B: ";
                    cin >> b;

                    hasil = a+b;
                    cout << "Hasil Penjumlahan adalah: " << hasil << endl;
                }

                else if(opsi==2){
                    float a, b, hasil;
                    cout << "Masukkan Nilai A: ";
                    cin >> a;
                    cout << "Masukkan Nilai B: ";
                    cin >> b;

                    hasil = a-b;
                    cout << "Hasil Pengurangan adalah: " << hasil << endl;
                }

                else if(opsi==3){
                    float a, b, hasil;
                    cout << "Masukkan Nilai A: ";
                    cin >> a;
                    cout << "Masukkan Nilai B: ";
                    cin >> b;

                    hasil = a*b;
                    cout << "Hasil Perkalian adalah: " << hasil << endl;
                }

                else if(opsi==4){
                    float a, b, hasil;
                    cout << "Masukkan Nilai A: ";
                    cin >> a;
                    cout << "Masukkan Nilai B: ";
                    cin >> b;

                    hasil = a/b;
                    cout << "Hasil Pembagian adalah: " << hasil << endl;
                }

                else if(opsi==5){
                    int a, b, hasil;
                    cout << "Masukkan Nilai A: ";
                    cin >> a;
                    cout << "Masukkan Nilai B: ";
                    cin >> b;

                    hasil = a%b;
                    cout << "Hasil bagi " << a << " dengan " << b << " adalah: " << hasil << endl;
                }

                else if(opsi==6){
                    break;
                }

                else if(opsi==7){

                    return 0;
                }

                else{
                    cout << "Opsi yang anda pilih tidak valid" << endl;
                }

            } while(true);
        }

        else if(menu==2){
            int tanggal, bulan, tahun;
            string kategori;
            cout << "Masukkan tanggal lahir (dd mm yyyy): ";
            cin >> tanggal >> bulan >> tahun;

            int tahunSekarang, bulanSekarang, tanggalSekarang;
            cout << "Masukkan tanggal hari ini (dd mm yyyy): ";
            cin >> tanggalSekarang >> bulanSekarang >> tahunSekarang;

            int selisihTahun = tahunSekarang - tahun;
            int selisihBulan = bulanSekarang - bulan;
            int selisihHari = tanggalSekarang - tanggal;

            if (selisihBulan < 0 || (selisihBulan == 0 && selisihHari < 0)) {
                selisihTahun--;
                selisihBulan += 12;
            }

            if(selisihTahun < 17) {kategori = "Anak-anak";}
            else if(selisihTahun < 25 && selisihTahun >= 17) {kategori = "Remaja";}
            else if(selisihTahun < 50 && selisihTahun >= 25) {kategori = "Dewasa";}
            else if(selisihTahun < 60 && selisihTahun >= 50) {kategori = "Orang tua";}
            else if(selisihTahun < 80 && selisihTahun >= 60) {kategori = "Lansia";}
            else {kategori = "Tidak terdefinisi";}

            cout << "Usia Anda adalah " << selisihTahun << " tahun, " << selisihBulan << " bulan, dan " << selisihHari << " hari." << endl;
            cout << "Anda termasuk kategori: " << kategori << "." << endl;
        }

    else if(menu==3){
        int opsi;
            cout << "1. Konversi Biner" << endl;
            cout << "2. Konversi Octal" << endl;
            cout << "3. Konversi Decimal" << endl;
            cout << "4. Konversi Hexadecimal" << endl;
            cout << "5. Kembali ke Menu Sebelumnya" << endl;
            cout << "6. Keluar Program" << endl;

            do{
                cout << "Silahkan Pilih Opsi (1/2/3/4/5/6): ";
                cin >> opsi;

                if(opsi==1){
                    float biner;
                    cout << "Silahkan Input Bilangan Biner: ";
                    cin >> biner;

                    int tujuan;
                    cout << "1. Octal" << endl;
                    cout << "2. Decimal" << endl;
                    cout << "3. Hexadecimal" << endl;
                    cout << "Pilih Sistem Bilangan Tujuan: ";
                    cin >> tujuan;

                    if(tujuan==1){
                        
                    }

                    else if(tujuan==2){
                        
                    }

                    else if(tujuan==3){

                    }

                }

                else if(opsi==2){
                    float octal;
                    cout << "Silahkan Input Bilangan octal: ";
                    cin >> octal;

                    int tujuan;
                    cout << "1. Biner" << endl;
                    cout << "2. Decimal" << endl;
                    cout << "3. Hexadecimal" << endl;
                    cout << "Pilih Sistem Bilangan Tujuan: ";
                    cin >> tujuan;

                    if(tujuan==1){
                        
                    }

                    else if(tujuan==2){
                        
                    }

                    else if(tujuan==3){

                    }
                }

                else if(opsi==3){
                    float decimal;
                    cout << "Silahkan Input Bilangan Decimal: ";
                    cin >> decimal;

                    int tujuan;
                    cout << "1. Biner" << endl;
                    cout << "2. Octal" << endl;
                    cout << "3. Heksadesimal" << endl;
                    cout << "Pilih Sistem Bilangan Tujuan: ";
                    cin >> tujuan;

                    if(tujuan==1){
                        
                    }

                    else if(tujuan==2){
                        
                    }

                    else if(tujuan==3){

                    }
                }

                else if(opsi==4){
                   float hexadecimal;
                    cout << "Silahkan Input Bilangan Hexadecimal: ";
                    cin >> hexadecimal;

                    int tujuan;
                    cout << "1. Biner" << endl;
                    cout << "2. Octal" << endl;
                    cout << "3. Decimal" << endl;
                    cout << "Pilih Sistem Bilangan Tujuan: ";
                    cin >> tujuan;

                    if(tujuan==1){
                        
                    }

                    else if(tujuan==2){
                        
                    }

                    else if(tujuan==3){

                    }
                }

                else if(opsi==5){
                   break;
                }

                else if(opsi==6){

                    return 0;
                }

                else{
                    cout << "Opsi yang anda pilih tidak valid" << endl;
                }

            } while(true);
        }

    } while(true);
    return 0;
}
