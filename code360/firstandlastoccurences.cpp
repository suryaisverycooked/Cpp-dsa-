#include<iostream>
#include<vector>
using namespace std;
int firstOccurence(vector<int>& arr, int n, int k){
        int start=0;
        int end=n-1;
        int ans=-1;
        while(start<=end){
            int mid=start+((end-start)/2);
            if(arr[mid]==k){
                ans=mid;
                end=mid-1;
            }
            else if(arr[mid]<k)
                start = mid+1;
            else if(arr[mid]>k)
                end = mid-1;
        }
        return ans;
    }
int lastOccurence(vector<int>& arr, int n, int k){
        int start=0;
        int end=n-1;
        int ans=-1;
        while(start<=end){
            int mid=start+((end-start)/2);
            if(arr[mid]==k){
                ans=mid;
                start=mid+1;
            }
            else if(arr[mid]<k)
                start = mid+1;
            else if(arr[mid]>k)
                end = mid-1;
        }
        return ans;
    }
pair<int, int>firstAndLastPosition(vector<int>& arr, int n, int k)
{
        pair<int, int> p;

        p.first= firstOccurence(arr,n,k);
        p.second= lastOccurence(arr,n,k);

        return p;
}
#include <iostream>
using namespace std;

int main() {
    vector<int> arr = {1,2,2,2,3,4};
    int k = 2;

    pair<int,int> ans = firstAndLastPosition(arr, arr.size(), k);

    cout << "First: " << ans.first << endl;
    cout << "Last: " << ans.second << endl;
}
