#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int n, c[64], i = 0;
    cout<<"Insert the number you want to convert into base 2\n\n";
    cin>>n;
    do
    {
        c[i] = n % 2;
        n/= 2;
        ++i;
    }
    while(n!=0);

    --i;
    for(  ; i>=0; i--)
    {
        cout << c[i];
    }
    cout<<endl;
    system("pause");
    return 0;
}

