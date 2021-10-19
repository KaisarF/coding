#include <iostream>

using namespace std;

int main()
{
    int a[10]={5,1,3,8,11,28,22,14,26,6};
    int b=10;
    int flag=0;
    int cari;

    for (int x=0; x<b; x++){
        for (int y=b; y>=x; y--){
            if (a[y]<a[y-1]){

                int temp;
                temp = a[y];
                a[y]=a[y-1];
                a[y-1] = temp;
            }
        }for(int c=0; c<b; c++){
                cout << " [" << a[c] << "] ";
            }cout << endl;
    }
    cout << endl;
    cout << "masukkan data nomor yang ingin dicari? "; cin >> cari;
    cout<< endl;

    for(int i=0; i<b; i++){
        if (a[i]== cari){
             cout << "data ditemukan pada urutan: " << i+1  << endl;
             flag=1;
    }
        }

        if(flag==0){
            cout << "data tidak tersedia" << endl;
        }
    return 0;
}
