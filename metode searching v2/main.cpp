#include <iostream>

using namespace std;

int main()
{
    int a[13]={5,1,3,8,11,28,22,14,26,6,4,25,29};
    int b=13;
    int i,r,m;
    i=0;
    r=b-1;
    int ktm=0;
    int cari;

    cout << "masukkan nilai: "; cin >> cari;
    cout << endl;

    while(i<=r && ktm==0){
        m= (i+r)/2;
        cout << "data tengah: " << m << endl;
        if(a[m]==cari){ktm=1;}
        else if(cari<a[m]){
            cout << "cari dikiri" << endl;
            r=m-1;
        }else if(cari>a[m]){
            cout << "cari dikanan" << endl;
            i=m+1;
        }

    }

    if (ktm==1){cout << "data ada" << endl;}
    else {cout << "data tidak ditemukan" << endl;}


    return 0;
}
