class Solution {
  public:   
  int rowWithMax1s(vector < vector < int >> & mat) {
    int row = mat.size(); 
    int cols = mat[0].size(); 
    int max_ones = -1; 
    int ans = -1; 

    for(int i = 0; i<row ; i++)
    {
      int lo = 0; 
      int hi = cols-1; 
      int first_one = -1 ; 
      
      while(lo<=hi)
      {
        int mid = lo+ (hi-lo)/2; 
        if(mat[i][mid]==1)
        {
          // check on the left side 
          first_one = mid; 
          hi = mid - 1; 
        }
        else lo = mid+1; 
      }
      if(first_one!=-1)
      {
        // 1 exit at an index first one 
        int count_ones = cols - first_one; 
        if(count_ones>max_ones)
        {
          max_ones= count_ones; 
          ans=i; 
        }
      }

    }
    return ans; 

  }
};