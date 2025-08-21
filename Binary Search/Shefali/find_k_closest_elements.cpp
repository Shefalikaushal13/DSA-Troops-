class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        //Approach
        // We are interested in finding the best starting point left such that 
        //the subarray [left,   left + k - 1] contains the k closest elements to x
        //During the binary search, at each step, we compare the distances 
        //between x and the elements at the current mid and mid + k.
        //If A[mid] is farther from x than A[mid + k], then we move left to mid + 1. 
        //Otherwise, we move right to mid.

        int left=0, right=arr.size()-k;
        while(left<right){
            int mid=(left+right)/2;
            if(x-arr[mid]>arr[mid+k]-x){
                left=mid+1;
            }
            else{
                right=mid;
            }
        }
        return vector<int>(arr.begin()+left,arr.begin()+left+k);
    }
};
