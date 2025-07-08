#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

//struct{
//	int pasword;
//	int username;
//	int pengguna;
//	int admin;
//};

//void pengguna(){
//	pengguna;
//	cout << "Masukkan username : ";
//	getline(cin, pengguna.username);
//	cout << "Masukkan pasword : ";
//	getline(cin, pengguna.pasword);
//}


int main (){
	int pengguna, admin, pilihan, admin123;
	string username, pasword;
	
	cout << "|--------------------------------------------------------|" << endl;
	cout << "|            Perpustakaan UAD Kampus 4                   |" << endl;
	cout << "|--------------------------------------------------------|" << endl;
	cout << "| 1. Login Pengguna                                      |" << endl;
	cout << "| 2. Login Admin                                         |" << endl;
	cout << "| 3. Registrasi Pengguna                                 |" << endl;
	cout << "| Masukkan pilihan :                                     |" << endl;
	cout << "|--------------------------------------------------------|" << endl;
	cin >> pilihan;
	cout << endl << endl;
	
	
	cout << "|--------------------------------------------------------|" << endl;
	cout << "|                 MENU LOGIN PENGGUNA                    |" << endl;
	cout << "|--------------------------------------------------------|" << endl;
	cout << "Masukkan Username: ";
	cin >> username;
	cout << endl;
	cout << "Masukkan Pasword : ";
	cin >> username;
	cout << endl << endl;
	cout << "Login berhasil, Selamat Datang Nabila";
	cout << endl << endl;
	system("cls");
	
	
    cout << "|--------------------------------------------------------|" << endl;
    cout << "|                MENU LOGIN ADMIN                        |" << endl;
    cout << "|--------------------------------------------------------|" << endl;
	cout << "Masukkan username: ";
	cin >> username;
	cout << endl;
	cout << "Masukkan pasword: ";
	cin >> pasword;
	cout << endl << endl;
	cout << "Anda berhasil login, Selamat Datang admin" << endl;
	system("cls");
	cout << "|--------------------------------------------------------|" << endl;
	cout << "|1. Lihat daftar buku                                    |" << endl;
	cout << "|2. Edit buku                                            |" << endl;
	cout << "|3. Tambah stok buku                                     |" << endl;
	cout << "|--------------------------------------------------------|" << endl;
	cout << "Masukkan Pilihan : ";
	cin >> pilihan;
	cout << endl << endl << endl;
	
	cout << "|--------------------------------------------------------|" << endl;
	cout << "|                  MENU REGISTRASI USER                  |" << endl;
    cout << "|--------------------------------------------------------|" << endl;
    cout << "Masukkan username anda: ";
    cin >> username;
    cout << endl;
    cout << "Masukkan pasword anda: ";
    cin >> pasword;
    cout << endl;
    cout << "Selamat Datang di Perpustakaan UAD Kampus 4";
    system("cls");
    
	cout << "|--------------------------------------------------------|" << endl;
	cout << "|             Daftar Buku Perpustakaan Kampus 4          |" << endl;
	cout << "|--------------------------------------------------------|" << endl;
	cout << "| 1. Algoritma Pemorgraman                               |" << endl;
	cout << "| 2. Matematika Diskrit                                  |" << endl;
	cout << "| 3. Kemuhammadiyahan                                    |" << endl;
	cout << "| 4. Bahasa Indonesia                                    |" << endl;
	cout << "| 5. Arsitektur Komputer                                 |" << endl;
	cout << "| 6. Pemrograman WEB                                     |" << endl;
	cout << "| 7. Pendidikan Kewarganegaraan                          |" << endl;
	cout << "| 8. Aljabar Linear Matriks                              |" << endl;
	cout << "| 9. Anatomic Habbits                                    |" << endl;
	cout << "| 10. Pintar Matematika                                  |" << endl;
	cout << "| 11. Aku bisa baca buku                                 |" << endl;
    cout << "|--------------------------------------------------------|" << endl;
    
    
    ofstream file ("hasil_cari_judul.txt", ios::app);
 //   ifstream file ("hasil_cari_judul.txt", ios::app);
    if(file.is_open()){
    	cout << "Data nerhasil di simpan";
	}else{
		cout << "EROR";
	}
    
    void simpanArray(){
    	for(int i = 0; n < i; i++)
	}

	
	
	
	
	
	
	
	
	
	return 0;
}
