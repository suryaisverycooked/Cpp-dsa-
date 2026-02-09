//pattern of alphabets A B C
#include <iostream>
using namespace std;
int main()
{
    int n;
    char c ='A';
    cout<<"Enter Value of N: ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<c<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
        c=c+1;
    }
}