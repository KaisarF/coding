#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
   float a ;
   float b ;
   float e;
   int iterasi;


   cout << "masukkan batas atas: "; cin >>a;
   cout << "masukkan batas bawah: "; cin >>b;
   cout << "masukkan batas toleransi e: "; cin >>e;
   cout << "masukkan batas iterasi maxsimum: "; cin >>iterasi;

   float x = {(a+b)/2};
   float fa =(a*exp(-a))+1;
   float fb =(b*exp(-b))+1;
   float fx =(x*exp(-x))+1;
   float absolute =abs(b-a);

   cout << "iterasi\ta\tb\tx\tf(a)\tf(b)\tf(x)\tabs"<< endl;
   cout<< 1 << "\t" << a << "\t" << b << "\t" << x << "\t"  << fa << "\t" << fb << "\t" << fx << "\t" << absolute <<endl;
   for(int l=1; l<iterasi; l++ ){
      if(fx*fa<0 && absolute>e){
            b=x;
            x=(a+b)/2;
            fx =(x*exp(-x))+1;
            fa =(a*exp(-a))+1;
            absolute =abs(b-a);

            cout<< l+1<< "\t" << a << "\t" << b << "\t" << x << "\t" << fa << "\t" << fb << "\t" << fx << "\t" << absolute <<endl;
        }else if(fx*fa>0 && absolute>e){
            a=x;
            x=(a+b)/2;
            fx =(x*exp(-x))+1;
            fa =(a*exp(-a))+1;
            absolute =abs(b-a);

            cout<< l+1 << "\t" << a << "\t" << b << "\t" << x << "\t" << fa << "\t" << fb << "\t" << fx << "\t" << absolute <<endl;

        }
   }
    return 0;
}
