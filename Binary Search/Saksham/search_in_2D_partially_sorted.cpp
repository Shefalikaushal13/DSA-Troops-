class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size(); 
        int cols = matrix[0].size(); 

        int i = 0 ; 
        int j = cols-1; // right most top corner 


        while(i<rows&&j>=0)
        {
            if(matrix[i][j]==target) return true; 
            else if (matrix[i][j]>target) j--; // go left
            else i++; // go down 
        }
        return false;
        
    }
};