#include <iostream>
using namespace std;

int main (){
	int skor; // Variable untuk menyimpan nilai skor pemain
	
	cout << "==================================" << endl;
	cout << "     !Selamat Datang Pemain!      " << endl;
	cout << "==================================" << endl;
	
	//Input dari pengguna
	cout << "Masukkan skor kombo Terbaikmu!!! :";
	cin >> skor;
	
	// Validasi agar yang diinput hanya angka
	if (cin.fail()) {
		cout << "skor tidak valid, silahkan masukkan angka!" << endl;
		return 1; //k\langsung keluar dari program jika yang diinput salah
	}
	
	//Menentukan peti apa yang didapat berdasarkan skor pemain
	 if (skor < 50) {
        cout << "!!Selamat Peti yang Anda dapatkan adalah: PETI PERUNGGU!!" << endl;
    } else if (skor >= 50 && skor < 100) {
        cout << "!!Selamat Peti yang Anda dapatkan adalah: PETI PERAK!!" << endl;
    } else if (skor >= 100 && skor < 200) {
        cout << "!!Selamat Peti yang Anda dapatkan adalah: PETI EMAS!!" << endl;
    } else {
        cout << "!!Selamat Peti yang Anda dapatkan adalah: PETI MITOS!!" << endl;
    }
	
	
	
	cout << "=====================================" << endl;
	cout << "       Terima Kasih Pemain           " << endl;
	cout << "=====================================" << endl;
	
	return 0;
}
