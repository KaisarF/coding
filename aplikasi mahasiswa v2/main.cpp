#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include <istream>

using namespace std;

//struct
struct mahasiswa{
    char nama [100];
    int npm;
    char alamat [100];
           }ke[200];

//fungsi input

void garis(int x) {
	int a;
	for(a = 0; a < x; a++) {
		cout << "=";
	}
	cout << "\n";
}


void input(int a){
for (int b = 0; b<a ;b++){

    cout << "\ndata ke - "<< b+1<< endl;
    cout << "nama: ";
    cin >> ke[b].nama;

    cout<< "npm: ";
    cin >>ke[b].npm;

    cout<< "alamat: ";
    cin >>ke[b].alamat;
    }
}

//fungsi edit
void edit(int z){


            cout << "\nnama baru: ";
            cin >> ke[z-1].nama;
            cout << "\nnpm baru: ";
            cin >> ke[z-1].npm;
            cout << "\nalamat baru: ";
            cin >> ke[z-1].alamat;
};




int main(){

int a, cari;
char x,y,z;
char e,f;
int flag=0;

//jumlah inputan yang diinginkan
cout << "jumlah data yang diinput: ";
cin >> a;
garis(50);
//memanggil fungsi input
input(a);

    //dihapus atau dirubah
garis(50);
cout << "\napa yang ingin anda rubah?" << endl;
cout << "\n1. edit\n2. hapus\n3. tidak ada" << endl;

cin >>y;
cout << endl;
garis(50);

 if(y=='1'){
 //memanggil fungsi edit
     cout << "data keberapa yang ingin di ubah?" << endl;
     cin>>z;
       edit(z);

    }
 else if(y=='2'){
      cout << "data keberapa yang ingin dihapus?" << endl;

        cin>>z;

            for(int x=z-1; x<a; x++){

            strcpy (ke[x].nama,ke[x+1].nama);
            ke[x].npm=ke[x+1].npm;
            strcpy (ke[x].nama,ke[x+1].nama);

            }

        a -=1;

        }
else if(y=='3'){
    cout << "baik terima kasih" << endl;
}

    for (int c = 0; c<a ;c++){

    cout << "\n\ndata ke - "<< c+1;
    cout << "\nnama: " << ke[c].nama;
    cout << "\nnpm: " << ke[c].npm;
    cout << "\nalamat: " << ke[c].alamat;

    }
cout << "\n" << endl;
garis(80);

cout << "urutkan data ascending atau descending?" << "\n1. ascending \n2. descending\n" <<endl;
cin >> e;

cout << "\ninsertion sort atau selections sort" << "\n1. insertion sort\n2. selection sort\n" << endl;
cin >> f;

if(e=='1'&& f=='1'){

cout << "\n\nurutan ascending insertion sort berdasarkan npm\n" <<endl;
        for(int x = 1; x < a; x++){
        while(x>=0 && ke[x].npm<ke[x-1].npm){

            int l;
            l = ke[x-1].npm;
            ke[x-1].npm = ke[x].npm;
            ke[x].npm= l;

            char m[100];
            strcpy (m,ke[x-1].nama);
            strcpy (ke[x-1].nama,ke[x].nama);
            strcpy (ke[x].nama, m);

            char n[100];
            strcpy (n,ke[x-1].alamat);
            strcpy (ke[x-1].alamat,ke[x].alamat);
            strcpy (ke[x].alamat, n);


            x=x-1;
        }
    }for (int c = 0; c<a ;c++){

    cout << "\n\ndata ke - "<< c+1;
    cout << "\nnama: " << ke[c].nama;
    cout << "\nnpm: " << ke[c].npm;
    cout << "\nalamat: " << ke[c].alamat;
    }
}

else if(e=='2'&&f=='1'){


cout << "\n\nurutan descending insertion sort berdasarkan npm\n" <<endl;
        for(int x = 1; x < a; x++){
        while(x>=0 && ke[x].npm>ke[x-1].npm){

            int l;
            l = ke[x].npm;
            ke[x].npm = ke[x-1].npm;
            ke[x-1].npm= l;

            char m[100];
            strcpy (m,ke[x].nama);
            strcpy (ke[x].nama,ke[x-1].nama);
            strcpy (ke[x-1].nama, m);

            char n[100];
            strcpy (n,ke[x].alamat);
            strcpy (ke[x].alamat,ke[x-1].alamat);
            strcpy (ke[x-1].alamat, n);


            x=x-1;
        }
    }for (int c = 0; c<a ;c++){

    cout << "\n\ndata ke - "<< c+1;
    cout << "\nnama: " << ke[c].nama;
    cout << "\nnpm: " << ke[c].npm;
    cout << "\nalamat: " << ke[c].alamat;

    }
}

else if(e=='1'&&f=='2'){

cout << "\n\nurutan ascending selection sort berdasarkan npm\n" <<endl;

for(int i=0; i<=a-1;i++){
        int x=i;
        for(int j=i+1; j<a; j++){
            if(ke[x].npm<ke[x-1].npm){
                x=j;
            }
        }
            int l;
            l = ke[x].npm;
            ke[x].npm = ke[i].npm;
            ke[i].npm= l;

            char m[100];
            strcpy (m,ke[x].nama);
            strcpy (ke[x].nama,ke[i].nama);
            strcpy (ke[i].nama, m);

            char n[100];
            strcpy (n,ke[x].alamat);
            strcpy (ke[x].alamat,ke[i].alamat);
            strcpy (ke[i].alamat, n);


    }for (int c = 0; c<a ;c++){

    cout << "\n\ndata ke - "<< c+1;
    cout << "\nnama: " << ke[c].nama;
    cout << "\nnpm: " << ke[c].npm;
    cout << "\nalamat: " << ke[c].alamat;
    }
}

else if (e=='2'&&f=='2'){

cout << "\n\nurutan ascending selection sort berdasarkan npm\n" <<endl;

for(int i=0; i<=a-1;i++){
        int x=i;
        for(int j=i+1; j<a; j++){
            if(ke[x].npm>ke[x-1].npm){
                x=j;
            }
        }
            int l;
            l = ke[x].npm;
            ke[x].npm = ke[i].npm;
            ke[i].npm= l;

            char m[100];
            strcpy (m,ke[x].nama);
            strcpy (ke[x].nama,ke[i].nama);
            strcpy (ke[i].nama, m);

            char n[100];
            strcpy (n,ke[x].alamat);
            strcpy (ke[x].alamat,ke[i].alamat);
            strcpy (ke[i].alamat, n);


    }for (int c = 0; c<a ;c++){

    cout << "\n\ndata ke - "<< c+1;
    cout << "\nnama: " << ke[c].nama;
    cout << "\nnpm: " << ke[c].npm;
    cout << "\nalamat: " << ke[c].alamat;
    }

}

else{cout << "invalid" << endl;}

 cout << endl;
    cout << "masukkan nomor npm yang ingin dicari? "; cin >> cari;
    cout<< endl;

    for(int i=0; i<a; i++){
        if (ke[i].npm== cari){
             cout << "data ditemukan pada urutan: " << i+1  << endl;
             flag=1;
    }
        }

        if(flag==0){
            cout << "data tidak tersedia" << endl;
        }


return 0;
}


