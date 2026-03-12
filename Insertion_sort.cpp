#include<iostream>
using namespace std;

int arr[20];    //membuat array dengan panjang data 20
int n;           //membuat variable inputan n

void input () //Procedure input
{
    while (true)
    {
        cout << "Masukkan Jumlah Data pada Array : ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nArray Tidak Boleh Lebih dari 20\n";
        }
    }
}
