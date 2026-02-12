/*
Binary search works only on a SORTED array.

We initialize:
start = 0
end = n-1

We calculate mid using:
mid = start + (end-start)/2
(this avoids overflow).

Inside the while loop (start <= end):

- If arr[mid] == key, we return the key (found).

- If arr[mid] < key, we move to the right half of the array
  by updating start.

- If arr[mid] > key, we move to the left half of the array
  by updating end.

After updating start or end, we recalculate mid.

If the loop ends without finding the element, we return -1
which means element not found.
*/

#include <iostream>
using namespace std;

int binarysearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid = start +((end -start)/2);
    while(start<=end){
        if(arr[mid]==key)
            return key;
        if(arr[mid]<key)
            start = mid+1;
        if(arr[mid]>key)
            end = mid-1;
        mid= start +((end -start)/2);
    }
    return -1;
}
int main(){
    int arr[100],n,key;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements into the array"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter element to search: ";
    cin>>key;
    int index = binarysearch(arr,n,key);
    if((index)>=0)
        cout<<"Element found"<<endl;
    else
        cout<<"Element not found"<<endl;
}
            