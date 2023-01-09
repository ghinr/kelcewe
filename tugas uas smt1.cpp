#include <iostream>
using namespace std;
	
int sequentialsearch(string barang[], int jumlah_elemen, string key){
	bool status=false;
	for (int i=0; i<jumlah_elemen; i++){
		if(key==barang[i]){
			status=true;
			return i;
			break;
		}
	}
	if (status==false)
		return -1;
}

int main (){

	int pilihmenu;
	char menulain;
	char ulang;
	string barangygdicari;
	
	do{
	cout << "## Toko Baju Sederhana ## " << endl;
	cout << "========================= " << endl;
	cout << endl;
	cout << "Pilihan Menu :" << endl;
	cout << "1. Lihat Pricelist" << endl;
	cout << "2. Cari Harga Barang" << endl;
	cout << "3. Mulai Order" << endl;
	cout << "4. Bayar" << endl;
	cout << "5. Cetak Receipt" << endl;
	
	cout << "Inputkan menu : " ;
	cin >> pilihmenu;
	
	switch(pilihmenu){
		case 1:
			cout << "===== Pricelist Toko Baju Sederhana =====" << endl;
			cout << "1. Baju : Rp. 50.000" << endl;
			cout << "2. Celana : Rp. 100.000" << endl;
			cout << "3. Rok : Rp. 100.000" << endl;
			cout << "4. Jaket : Rp. 150.000" << endl;
			cout << "5. Sweater : Rp. 200.000" << endl;
			cout << endl;		
			break ;
			
		case 2:
			{
			string daftar_barang[] = {"Baju", "Celana", "Rok", "Jaket", "Sweater"};
			int daftar_harga[] = {50000, 100000, 100000, 150000, 200000};
		
			int jumlah_elemen = sizeof(daftar_barang)/sizeof(daftar_barang[0]);
	
			string key;
	
			cout << "Masukan barang yang dicari (gunkan huruf kapital pada awal huruf) : ";
			cin >> key;
	
			int indeksbarang = sequentialsearch(daftar_barang, jumlah_elemen, key);
			if (indeksbarang==-1){
			cout << "Harga barang tidak tersedia" << endl;
			}
			else{
			cout << "Harga barang yang dicari adalah : " << daftar_harga[indeksbarang] << endl;
			}
			break;}
			
		case 3:	
		{
			int  i, jenis, total;
			int kodebarang [i];
			int jumlahbarang [i];
			int daftarharga[] = {0, 50000, 100000, 100000, 150000, 200000};
			int harga[i];
			
				cout << "===== Pricelist Toko Baju Sederhana =====" << endl;
				cout << "1. Baju : Rp. 50.000" << endl;
				cout << "2. Celana : Rp. 100.000" << endl;
				cout << "3. Rok : Rp. 100.000" << endl;
				cout << "4. Jaket : Rp. 150.000" << endl;
				cout << "5. Sweater : Rp. 200.000" << endl;
			
				cout << "Berapa jenis barang yang ingin kamu beli : " ; 
				cin >> jenis;
				cout << endl;
	
			if (jenis<1){
				cout << endl;
				cout << "Jumlah barang tidak boleh 0 " << endl;
			}
			else {
				cout << "> Input " << jenis << " Jenis Barang : " << endl;
			
			for (i=1; i<=jenis; i++){
				cout << "- Input kode barang ke-"<< i << " : "; 
				cin >> kodebarang[i];
				cout << "Masukkan jumlah barang ke-"<< i << " : "; 
				cin >> jumlahbarang[i];
				cout << endl;
				
				harga[i]=jumlahbarang[i]*daftarharga[kodebarang[i]];
				cout << "total harga barang ke-" << i << " : " << harga[i] << endl;
				cout << endl;
				
				total=total+harga[i];
			}
			
			cout << "Total harga yang harus dibayar : " << total << endl;
		}
			break;
	}
		
		case 4:
			int bayar;
			int total;
			int kembali;
			
			cout << "Total yang harus dibayar : Rp " << total << endl;
    cout << "Masukan jumlah pembayaran : Rp ";
	cin >> bayar;
	kembali = bayar - total;
	
	if(bayar>total){
		cout << "Kembalian anda = Rp " << kembali << endl;
	}	
	else{
		cout << "Ga cukup wangnya" << endl;
	}
			break;
			
		case 5:
			cout << "=============== INVOICE ===============" << endl;
			break;
		
		default:
				cout << "Masukkan anda salah" << endl;
			}
			
		cout << "Ingin memilih menu lain (y/t) ? ";
		cin >> ulang; }
		while (ulang!='t');

	return 0;
}
