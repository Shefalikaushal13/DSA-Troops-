class Solution {
public:
    bool check(vector<int>& arr) {
        int size = arr.size();
        int count = 0 ;  // for the count of pivot values
        if (size<=2) return true;// cause till two , one rotation makes it sorted eitherway 
        for(int i =0; i<size-1; i++)
        {
            if(arr[i]>arr[i+1]){
                // pivot occurs
                count++; 
            }
        }
        // wrap up condition 
        if (arr[size-1]>arr[0]) count++;


        if (count<=1) return true; // covering 0 and 1 pivots 
        else return false; 
        
    }
};