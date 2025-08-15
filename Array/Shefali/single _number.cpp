class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //to solve in linear space:hashmaps
        //to solve in constant space: bitwise operation
        int ans=0;
        for(auto i:nums){
            ans=ans^i;
            //elements that appear twice give 0 when operated on bitwise (a^a=0)
            //unique elements appear as ans

        }
        return ans;
    }
};
