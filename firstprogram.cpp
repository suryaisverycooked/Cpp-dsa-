#include<iostream>
using namespace std;

//program to print odd and even numbers
int main()
{   
    int n,choice,i;
    cout<<"Enter A number: "<<endl;
    cin>>n;
    cout<<"Enter 1. for Even Numbers and 2. for Odd Numbers- "<<endl;
    cin>>choice;
    switch(choice){
            case 1:
              cout<<"The even numbers between "<<0<<" and "<<n<<endl;
              for(i=0 ; i<=n ; i=i+2)
                cout<<i<<endl;
              break;
              
            case 2:
                cout<<"The odd numbers between "<<0<<" and "<<n<<endl;
                for(i=0 ; i<n ; i=i+2) 
                    cout<<i+1<<endl;
                break;
            
            default:
                cout<<"Invalid Choice!!!"<<endl;

    }
}