/* To find the max and min value from an array we can follow the age old approach of sorting the array using bubble sort
in ascending order and then printing the first and the last index values respectively to get the min and the max values. But 
this approach makes use of functions and hence increases runtime. Better approach would be to just use a loop and compare 
elements with respect to the max and min values already declared.*/
#include<iostream>
using namespace std;
int main(){
    int a[100],n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements into the array"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int max=a[0];
    int min=a[0];
    for(int i=0;i<n;i++){
    if(a[i]<min)
        min=a[i];
    if(a[i]>max)
        max=a[i];
    }
    cout<<"Max is "<<max<<endl;
    cout<<"Min is "<<min<<endl;

}