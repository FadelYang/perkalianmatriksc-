#include <iostream>
using namespace std;

 int main(){
 	
	//perkalian matriks kita yang input matriksnya
	int barisA, kolomA, barisB, kolomB, x, y, jumlah;
	int matriksA[100][100], matriksB[100][100], hasil[x][y];
	
	cout << "SYARAT PERKALIAN MATRIKS ADALAH JUMLAH KOLOM MATRIKS A DAN JUMLAH BARIS MATRIKS B HARUS SAMA" << endl << endl;
	
	awal :

	//input baris kolom
	cout << "Input jumlah kolom dan baris matriks A" << endl;
	cout << "Baris A = "; cin >> barisA;
	cout << "Kolom A = "; cin >> kolomA;
	cout << endl;
	cout << "Input jumlah kolom dan baris matriks B" << endl;
	cout << "Baris B = "; cin >> barisB;
	cout << "Kolom B = "; cin >> kolomB;
	
	
	if(kolomA != barisB){
		cout << "ordo matriks yang anda masukkan tidak bisa dikalikan" << endl;
		cout << "silahkan masukkan ulang, kolom matriks A harus sama dengan baris matriks B" << endl;
		goto awal;
	}
	else{
	cout << "input elemen matriks A" << endl;
	for(int a = 0; a < barisA; a++){
	for(int b = 0; b < kolomA; b++){
	cout << "Input elemen " << "[" << a+1 << "]" << "[" << b+1 << "]" << " = ";
	cin >> matriksA[a][b];
	}
	cout << endl;
	}
	
	cout << endl;
	cout << "input elemen matriks B" << endl;
	for(int a = 0; a < kolomA; a++){
	for(int b = 0; b < kolomB; b++){
    cout << "Input elemen "<< "[" << a+1 << "]" << "[" << b+1 << "]" << " = ";
	cin >> matriksB[a][b];
	}
	cout << endl;
	}
	
	cout << endl;
	
	cout << "Matriks A = "  << endl;
	
	for(int a = 0; a < barisA; a++){
	for(int b = 0; b < kolomA; b++){
	cout << matriksA[a][b] << " ";
	}
	cout << endl;
	}
	
	cout << endl;
	
	cout << "matriks B = " << endl;
	for(int a = 0; a < kolomA; a++){
	for(int b = 0; b < kolomB; b++){
	cout << matriksB[a][b] << " ";
	}
	cout << endl;
	}
	
	cout << endl;
	cout << "MatriksA x matriksB = ";
	
	for(int a = 0; a < barisA; a++){
    for(int b = 0; b < kolomB; b++){
	for(int c = 0; c < barisB; c++){
    jumlah = jumlah + matriksA[a][c] * matriksB[c][b];
    }
    hasil[a][b] = jumlah;
    jumlah = 0;
    }
    }
    cout << endl;
    cout << endl;
    
    for (int a = 0; a < barisA; a++){
    for (int b = 0; b < kolomA; b++){
    cout << hasil[a][b] << " ";
	}
	cout << endl;
	}
}
	cout << endl;
	
	return 0;
	}	

