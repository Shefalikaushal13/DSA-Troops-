class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size(); 
        // we must do this for the smallest 
        if (n1>n2) return findMedianSortedArrays(nums2,nums1); 
        // reverse the order : considering first as the smallest 
        // inorder to align the values for l1 l2 r1 r2 
        // other wise the solu will not be constant 


        // calc the final array size 
        int n  = n1 + n2 ; // total length 
        int left_length = (n1+n2+1)/2; // works for both odd and eve

        int lo = 0, hi = n1; 
        // lo must be 0 : no elements from array 1 
        // hi must be n1 : all elements from array 1 

        while(lo<=hi)
        {
            int mid1=(lo+hi)/2 ; // mid 1 for the left
            int mid2 = left_length-mid1;//left half of arr2 

            // calc l1 , l2 , r1, r2 

            int l1 = INT_MIN, l2 = INT_MIN;
            int r1 = INT_MAX, r2 = INT_MAX; 

            //assing values to l1 l2 r1 r2 
            
            if(mid1<n1) r1 = nums1[mid1]; 
            if(mid2<n2) r2 = nums2[mid2]; 
            if(mid1-1>=0) l1 = nums1[mid1-1]; 
            if(mid2-1>=0) l2 = nums2[mid2-1]; 

            // check for validity 

            if (l1<=r2 && l2<=r1)
            {
                if(n%2==1) return max(l1,l2); //odd size 
                else return ((double)(max(l1,l2)+min(r1,r2)))/2.0; 
            }

            // left shift 
            else if (l1>r2) hi = mid1-1; 
            else lo = mid1+1; 



        }
        return 0; 


        
    }
};