#include<iostream>
using namespace std;

int main(){
    int a[100],n,key;
    bool found;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements into the array"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter element to search: ";
    cin>>key;
    found = false;
    for(int i=0;i<n;i++){
        if(key==a[i]){
            found=true;
            break;
        }
    }
    if(found)
        cout<<key<<" found"<<endl;
    else    
        cout<<"Not found"<<endl;
}
