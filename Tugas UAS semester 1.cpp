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
	char ulang;
	string barangygdicari;
    string daftar_barang[] = {"Baju", "Celana", "Rok", "Jaket", "Sweater"}; 
	int daftar_harga[] = {50000, 100000, 100000, 150000, 200000};
    int  i, jenis, total=0;
    int kodebarang[5];
	int jumlahbarang[10]; 
    int harga[10000];    
    int kembali, bayar;
    bool lunas=false;
	
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
		int jumlah_elemen = sizeof(daftar_barang)/sizeof(daftar_barang[0]);
		string key;
	
		cout << "Masukan barang yang dicari (gunakan huruf kapital pada awal huruf) : ";
		cin >> key;
	
		int indeksbarang = sequentialsearch(daftar_barang, jumlah_elemen, key);
		if (indeksbarang==-1){
		cout << "Harga barang tidak tersedia" << endl;
		}
		else{
		cout << "Harga barang yang dicari adalah : " << daftar_harga[indeksbarang] << endl;
		}
	break;
	}
			
	case 3:	
	{
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
		
		for (i=0; i<jenis; i++){ 
		cout << "- Input kode barang ke-"<< i+1 << " : "; 
		cin >> kodebarang[i];
		cout << "Masukkan jumlah barang ke-"<< i+1 << " (max 10) : "; 
		cin >> jumlahbarang[i];
		cout << endl;
				
		harga[i]=jumlahbarang[i]*daftar_harga[kodebarang[i]-1];
		cout << "total harga barang ke-" << i+1 << " : " << harga[i] << endl;
		cout << endl;
				
		total=total+harga[i];
		}
			
		cout << "Total harga yang harus dibayar : " << total << endl; 
		}
	break;
	}
		
	case 4:		
		if(jenis<1){
		cout << "Order barang terlebih dahulu" << endl;
		}
		else {	
		cout << "Total yang harus dibayar : Rp " << total << endl;
   		cout << "Masukan jumlah pembayaran : Rp ";
		cin >> bayar;
		kembali = bayar - total;
	
		if(bayar<total){
		cout << "Uang anda tidak cukup" << endl;
		}	
		else{
		cout << "Kembalian anda = Rp" << kembali << endl;
		lunas=true;
		}	
		}
	break;
			
	case 5:
		if (lunas!=true){
		cout << "Harap lakukan pembayaran terlebih dahulu" << endl;
		}
		
		else {
		cout << "=============== INVOICE ===============" << endl;
		cout << "No  |     Nama Barang      | Harga Barang/pc |  Jumlah  | Total "	<< endl;	
					
		for (i=0; i<jenis; i++){ 
		cout << i+1 << "   |" << daftar_barang[kodebarang[i]-1] << "                | Rp. " 
		<< daftar_harga[kodebarang[i]-1]<< "             |" << jumlahbarang[i]<< "       |" << harga [i] << endl;
		}
			
		cout << endl;
		cout << "Total harga yang harus dibayar : " << total << endl;
		cout << "Uang Pembayaran : " << bayar << endl;
		cout << "Kembalian : " << kembali << endl;
		cout << endl;
		cout << "Terima kasih telah berbelanja di toko kami " << endl;
		}		
	break;
		
	default:
		cout << "Masukkan anda salah" << endl;
		}
			
	cout << "Ingin memilih menu lain (y/t) ? ";
	cin >> ulang; 
	}
		
	while (ulang!='t');
	
		cout << endl;
		cout << "Terima kasih" << endl;
		
	return 0;
}
