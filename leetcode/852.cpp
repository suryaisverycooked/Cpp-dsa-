#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start= 0;
        int n=arr.size();
        int end= n-1;
        int mid= start + ((end-start)/2);
        while(start<end){
            if(arr[mid]<arr[mid+1])
                start = mid+1;
            else
                end = mid;
            mid= start + ((end-start)/2);            
        }
        return mid;
    }  
};

/*
We use binary search to find the peak element in a mountain array.

Initialize:
start = 0
end = n-1

While start < end:
- Calculate mid safely using:
  mid = start + (end-start)/2

- If arr[mid] < arr[mid+1]:
  we are on the increasing slope, so the peak lies on the right.
  Move start = mid + 1.

- Else:
  we are on the decreasing slope or at the peak,
  so move end = mid.

After each update, recalculate mid.

When start == end, both point to the peak index.

Return mid (or start, both are same).

Time Complexity: O(log n)
Space Complexity: O(1)
*/
