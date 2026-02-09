/*
    1 2 3 4 5 5 4 3 2 1 
    1 2 3 4 * * 4 3 2 1 
    1 2 3 * * * * 3 2 1 
    1 2 * * * * * * 2 1 
    1 * * * * * * * * 1
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    int i = 1;
    while(i <= n){
        int j=1;
        int count=1;
        while(j<=n-i+1){
            cout<<count<<" ";
            j=j+1;
            count++;
        }
        int space=1;
        while(space<=i-1){
            cout<<"* ";
            space++;
        }
        int space1=1;
        while(space1<=i-1){
            cout<<"* ";
            space1++;
        }
        int k = n - i + 1;
        while(k >= 1)
        {
            cout << k << " ";
            k--;
        }
         cout<<endl;
         i++;
    }
}

            
