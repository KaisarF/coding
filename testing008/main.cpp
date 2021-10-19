#include <iostream>
#include <cstring>
#include <string.h>
#include <istream>

using namespace std;

int main()
{

    int angka[100]={2,6,1,4,3,6  };
    char abjad[100][100]={ "ffff", "dddd", "aaaa", "zzzz", "gggg", "jjjj" };
    int a=6;

    for(int x=0; x<a; x++){
            cout << " [" << angka[x] << "] ";
            }cout << endl;

    for(int i=0; i<=a;i++){
        for(int j=i+1; j<a;j++){
            if(angka[i]>angka[j]){


                char n[100];
                strcpy(n, abjad[i]);
                strcpy(abjad[i],abjad[j]);
                strcpy(abjad[j],n);

                int m;
                m=angka[i];
                angka[i]=angka[j];
                angka[j]=m;


            }//cout << "\n" << j << "\n";


            for(int x=0; x<a; x++){
            cout << " [" << angka[x] << " , " << abjad[x] <<"] ";
            }cout << endl;
        }
    }



    /*
    cout << "1. " << angka[0] <<"\n2. " << angka[1];
    char m[100];
    strcpy(m,angka[0]);
    strcpy(angka[0], angka[1]);
    strcpy(angka[1],m);
    cout << "\n1. " << angka[0] <<"\n2. " << angka[1];
    */


    return 0;
}
