class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int i = 0 ; //pointer to nums1
        int j = 0 ; //pointer to nums2
        int k = 0 ; //pointer to result
        vector<int> result(nums1.size()+nums2.size()); 
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i]==nums2[j])
            {
                if(k==0 || result[k-1]!=nums1[i])result[k]=nums1[i];
                // check duplicated within itself or skip if k==0 
                i++; 
                j++; 
            }
            else if (nums1[i]<nums2[j])
            {
                if(k==0 || result[k-1]!=nums1[i])result[k]=nums1[i]; 
                i++; 
            }
            else{
                if(k==0 || result[k-1]!=nums2[j])result[k]=nums2[j]; 
                j++; 
                
            }
            k++; 
        }
        // if elements in nums1 are still left
        while(i<nums1.size())
        {
            if(k==0 || result[k-1]!=nums1[i])result[k++]=nums1[i]; 
            i++; 
        }
        // if elements in nums2 are still left 
        while(j<nums2.size())
        {
            if(k==0 || result[k-1]!=nums2[j])result[k++]=nums2[j]; 
            j++; 
        }
        result.resize(k);
        return result; 
    }
};