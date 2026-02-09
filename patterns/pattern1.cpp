//Pattern for n*n stars
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Value of N: "<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<" * ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}