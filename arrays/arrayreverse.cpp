/* To reverse an array we just initialize the first and last indexes as start and end and swap each element in the array until
the start<end
Ex - if array is 1 2 3 4 5
then start =1(0), end=5(4)
then since start<end we swap 1 and 5- 5 2 3 4 1
increment and decremnt start and end by 1 start(2), end(3)
start<end
swap 2 and 4- 5 4 3 2 1. start(3),end(2)
STOP
*/
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a[100],n,start,end;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements into the array"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    start=0;
    end=n-1;
    for(int i=0;i<n;i++){
        while(start<end){
            swap(a[start],a[end]);
            start++;
            end--;
        }
    }
    cout<<"The reversed array is:"<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}