class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res=0; //return value
        int majority=0; //freq of majority number  i.e. res
        for(int n:nums){
            if(majority==0){
                res=n; //institlise res with current element of array
            }
            if (n == res){
            majority += 1 ;
            }
            else majority-=1;
            //update majority if the n is equal to res
            //if n is equal to res we inclrease majority by 1. Otherwise decrement it by 1.
            
        }
        return res;

        //HASH MAP APPROACH
        // unordered_map<int,int> mp;
        // int res=0;
        // int majority=0;
        // for(int n:nums){
        //     mp[n]=1+mp[n];
        //     if(mp[n]>majority){
        //         majority=mp[n];
        //         res=n;
        //     }
        // }
        // return res;
        
    }
};
