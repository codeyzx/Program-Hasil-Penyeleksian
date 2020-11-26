#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	// deklarasi variabel
	const size_t siswa = 72;
	int hasil, pilih;
	int nis_siswa = 2021118598;

	// deklarasi array
	array<string, siswa> nama_siswa = {
		"ABDUL", "ABIDZAR", "ABIL", "ADE", "AISYAH", "ALDIRA", "ARDHI", "AULIA", "DAIVA", "DEA", "DZAKWAN", "FIKRY", "HERAWATI", "IKHSAN", "INTAN", "INTAN", "KANAYA", "LUTHFI", "AUFA", "ADINATA", "ZAKI", "ALIF", "FAVIAN", "ILHAM", "RAFI", "ZIDAN", "NABILA", "RAAQI", "RANGGA", "REINALDI", "RIFAL", "RIFLAN", "RIYAN", "SANSAN", "STEFHANIE", "YAHYA",
		"NABILA", "RANGGA", "REZA", "ADRI", "ERINNA", "DANIAL", "DIAS", "ANGGA", "ADYKA", "AHMAD", "RANGGA", "SYIFA", "DZIKRAN", "RAZZAN", "ARIFA ", "LAILA", "DIMAS", "MUHAMAD", "WULAN", "I GEDE", "RAKA", "MUHAMMAD", "DHAFIN", "ZAID", "AYU", "RAFKA", "SANDIPA", "FAIRUZ", "HISYAM", "Nazswa", "ILHAM", "MUJAHID", "RATIH", "AMELIA", "SADAM", "ADITHIA"
	};

	array<int, siswa> nilai_siswa = {
		88, 70, 50, 78, 85, 65, 45, 75, 45, 65, 68, 69, 73, 73, 74, 78, 78, 79, 84, 82, 86, 81, 81, 80, 75, 75, 75, 64, 56, 80, 80, 92, 77, 78, 84, 100,
		88, 78, 80, 80, 80, 83, 82, 86, 84, 85, 88, 89, 90, 92, 92, 86, 78, 78, 84, 89, 81, 81, 79, 74, 75, 75, 83, 84, 85, 90, 92, 93, 93, 87, 87, 88
	};

	vector<pair<int, string>> vect;

	// proses input
	cout << "\n    Penyeleksian Coding TKI 4 & TKI 5" << endl;
	cout << "=========================================" << endl;
	cout << "\t1. Hasil Seleksi " << endl;
	cout << "\t2. Ranking" << endl;
	cout << "=========================================" << endl;

	cout << "\nPilih No : ";
	cin >> pilih;

	cout << "\n\n\n\n";

	// kondisi jika user memilih no 1
	if (pilih == 1) {
		cout << "==================================================================================" << endl;
		cout << "\t\tHasil Penyeleksian Coding untuk Penjurusan Kelas 11 " << endl;
		cout << "==================================================================================" << endl;
		for (int i = 0; i < siswa; i++) {
			cout << "NIS : " << (nis_siswa + i) << "\tNAMA: " << nama_siswa[i] << "\t\tNILAI: " << nilai_siswa[i] << "\tHASIL: ";
			hasil = nilai_siswa[i];
			if (hasil < 80) {
				cout << "TIDAK LULUS";
			}
			else if (hasil >= 80) {
				cout << "LULUS";
			}
			cout << endl;
		}
	} // kondisi jika user memilih no 2
	else if (pilih == 2) {
		cout << "====================================================" << endl;
		cout << "\t  Urutan dari Nilai Terbesar " << endl;
		cout << "====================================================" << endl;

		pair<int, string> temp_pair;

		for (int i = 0; i < nilai_siswa.size(); i++) {
			temp_pair = make_pair(nilai_siswa[i], nama_siswa[i]);
			vect.insert(vect.begin() + i, temp_pair);
		}

		sort(vect.begin(), vect.end(), greater<pair<int, string>>());

		string temp_name;
		int temp_nilai;

		for (int i = 0; i < nilai_siswa.size(); i++) {
			temp_nilai = vect[i].first;
			temp_name = vect[i].second;

			cout << "NAMA: " << temp_name << "\t\tNILAI: " << temp_nilai << "\tHASIL: ";

			hasil = temp_nilai;

			if (hasil < 80) {
				cout << "TIDAK LULUS";
			}
			else if (hasil >= 80) {
				cout << "LULUS";
			}

			cout << endl;
		}
	} // kondisi jika user tidak memilih no 1 atau 2
	else {
		cout << "Pilihan yang kamu masukkan tidak terdaftar." << endl;
	}

	//end
	cin.get();
	cin.get();
	return 0;
}
