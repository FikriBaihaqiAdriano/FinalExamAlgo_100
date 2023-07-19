#include <iostream>
#include <string>
using namespace std;


const int MAX_MAHASISWA = 100;

int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];

int jumlahMahasiswa = 0;


void tambahMahasiswa(
	if (jumlahMahasiswa < MAX_MAHASISWA) {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM          : ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama         : ";
		getline(cin, nama[jumlahMahasiswa]);
		cout << "Tahun Masuk  : ";
		cin >> tahunMasuk[jumlahMahasiswa]);
cin.ignore();		

jumlahMahasiswa++;
cout << "Mahasiswa berhasil ditambahkan!" << endl;
}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
}:

void tampilkanSemuaMahasiswa();

void algorithmacariMahasiswaByNIM();

void algorithmaSortByTahunMasuk();

int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan : ";
		cin >> pilihan;
		cin.ignore();

		switch (pilihan) {
		case 1:

			break;
		case 2:

			break;
		case 3:

			break;
		case 4:

			break;
		case 5:
			cout << "Terima Kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silahkan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);

	return 0;
}

//2. Lineae Search , Merge Sort
//3. kala stack menggunakan LIFO (Last In First Out) dan kalau Queue menggunakan FIFO (First In First Out)
//4. pada saat mengharuskan yang terakhir kali masuk jadi yang pertama kali keluar seperti contoh penumpukan yang outputnya dari atas
//5. a. 5
//5. b. in = salah
//5. b. pre = benar
//5. b. post = benar