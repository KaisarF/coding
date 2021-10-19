#include <iostream>
#include <cstring>

using namespace std;

struct data{
    char nama [100];
    int umur ;

}ke[100];

int main()
{
    int n,x;
    char pilihan;

    cout << "jumlah data yang diinput: ";cin >> n;
    cout << endl;

    for(int a=0; a<n;a++){
        cout << "\ndata ke-" << a+1 << endl;
        cout << "nama: "; cin >> ke[a].nama;
        cout << "umur: "; cin >> ke[a].umur;
    }

    cout << "perubahan data yang diinginkan?\n1. edit data\n2. hapus data" << endl; cin >> pilihan;


    if(pilihan=='1'){

        cout << "data keberapa yg ingin dirubah" << endl; cin >> x;
            cout << "\nnama baru: ";
            cin >> ke[x-1].nama;
            cout << "npm baru: ";
            cin >> ke[x-1].umur;

    }
    else if(pilihan=='2'){
        for(int a=x-1; a<x; a++){

            strcpy (ke[a].nama,ke[a+1].nama);
            ke[a].umur=ke[a+1].umur;

            }
    }

    for(int a=0; a<n; a++){
        cout << "\ndata ke-" << a+1 << endl;
        cout << "nama: " << ke[a].nama << endl;
        cout << "umur: " << ke[a].umur << endl;
    }



    return 0;
}
