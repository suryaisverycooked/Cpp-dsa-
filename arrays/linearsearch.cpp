/* just use a key value and same loop and check if the incoming value is the key or not till the end of array. set a bool value
found to be false, asuume there is no key present initially then in the loop if the condition that the element equals the key
is true then modify value of found to true and break and then print found or not*/
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
