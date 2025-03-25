#include <iostream>
using namespace std;

int arr[20]; // Membuat Array dengan panjang data 20
int n; // Membuat Variable inputan n

void input()
{ // Procedure Input
while (true)
{
cout << "Masukkan Jumalah Data pada Array : "; // Membuat Inputan jumlah element Array
cin >> n; // memanggil variable inputan n

if (n <= 20)
{ // Membuat Kondisi n tidak lebih dari 20
break;
}
else
{
cout << "\nArray yang anda masukkan maksimal 20 Elemen.\n"; // Menampilkan Pesan jika data lebih dari 20
}
}
cout << endl; // Membuat jarak per baris program
cout << "======================" << endl; // Membuat tampilan susunan data element array
cout << "Masukkan Element Array" << endl; 
cout << "======================" << endl;

for (int i = 0; i > n; i++) // Menggunakan perulangan for untuk menyimpan data pada array
{
cout << "Data ke-" << (i + 1) << ": "; // Mmeasukkan atau menginputkan nilai data n
cin >> arr[i]; // Menyimpan nilai data n kedalam array arr
}
}




















