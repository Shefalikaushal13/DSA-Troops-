class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector <int> ans; 
        int rows = matrix.size(); 
        int cols = matrix[0].size(); 

        int minr = 0 ; 
        int minc = 0 ; 
        int maxr = rows-1; 
        int maxc = cols-1; 

        while(minr<=maxr||minc<=maxc)
        {
            // going left 
            for(int i=minc; i<=maxc; i++) ans.push_back(matrix[minr][i]); 
            minr++; 
            if(minr>maxr||minc>maxc) break ; 

            //going down
            for(int i=minr; i<=maxr; i++) ans.push_back(matrix[i][maxc]); 
            maxc--; 
            if(minr>maxr||minc>maxc) break ;  

            //going left
            for(int i=maxc; i>=minc; i--) ans.push_back(matrix[maxr][i]); 
            maxr--; 
            if(minr>maxr||minc>maxc) break ;  

            //going up 
            for(int i=maxr; i>=minr; i--) ans.push_back(matrix[i][minc]); 
            minc++; 
            if(minr>maxr||minc>maxc) break ; 

            
        }
        return ans; 

        
    }
};