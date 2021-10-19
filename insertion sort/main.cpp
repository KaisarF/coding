#include <iostream>

using namespace std;

int main()
{
    int angka [6] = {34,74,21,46,50, 13};
    int n = 6;

    for(int a = 1; a < n; a++){
        while(a>=0 && angka[a]<angka[a-1]){

            int temp;
            temp = angka [a-1];
            angka [a-1] = angka [a];
            angka [a]= temp;

            a=a-1;
        }
    }for(int x = 0; x<n; x++){
            cout << "[" << angka[x] << "]";
        }cout << endl;



     for(int a = 1; a <=n; a++){
        while(a>=0 && angka[a]>angka[a-1]){

            int temp;
            temp = angka [a];
            angka [a] = angka [a-1];
            angka [a-1]= temp;

            a=a-1;
        }
    }for(int x = 0; x<n; x++){
            cout << "[" << angka[x] << "]";
        }cout << endl;




}
