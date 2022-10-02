#include <iostream>	

using namespace std;

int main()
{
	double bulanan, belanja, makan, total, sisa;
	
	cout << "===========================" << endl;
	cout << " PROGRAM PENYORTIRAN BIAYA " << endl;
	cout << "===========================\n" << endl;
	cout << "Masukkan Uang Bulanan : Rp.";
	cin >> bulanan;
	cout << "Uang yang disisihkan untuk makan sehari-hari : Rp.";
	cin >> makan;
	cout << "Uang yang dipakai untuk belanja sehari-hari : Rp.";
	cin >> belanja;
	
	total=bulanan-belanja-makan;
	
	cout << "Sisa dari uang bulananmmu adalah "<<total<<"\n" << endl;
	
	if(total < bulanan*0.01*10){
		cout << "Kamu belum bisa menyortir uangmu dengan baik" << endl;
		if(makan > bulanan*0.01*50){
			cout << "Uang makanmu masih perlu dibenahi kembali" << endl;
		}
		else{
			cout << "Penyortiran uang makanmu sudah baik" << endl;
		}
		if(belanja > bulanan*0.01*40){
			cout << "Uang belanjamu perlu dibenahi kembali" << endl;
		}
		else{
			cout << "Penyortiran uang belanjamu sudah baik, tetapi utamakan kebutuhan bukan keinginan" << endl;
		}	
	}
	else{
		cout << "Kamu sudah bisa menyortir uangmu dengan baik" << endl;
	}
	
	return 0;

}
