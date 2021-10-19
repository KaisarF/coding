#include <iostream>

using namespace std;

int main()
{
    int a[6] = {3,78, 25, 51, 100, 5};
    int b=6;

    for(int i=0; i<=b-1;i++){
        int x=i;
        for(int j=i+1; j<b; j++){
            if(a[x]>a[j]){
                x=j;
            }
        }
        int t;
        t=a[x];
        a[x]=a[i];
        a[i]=t;

        for(int y = 0; y<b; y++){
            cout << " [" << a[y] << "] ";
        }cout << endl;
    }


    cout << "Hello world!" << endl;
    return 0;
}
