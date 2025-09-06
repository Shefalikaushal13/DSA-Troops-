class Solution {
public:
  int func(int N, int M , int mid)
  {
    long long ans = 1; 
    for(int i = 0; i<N; i++)
    {
      ans *= mid; 
      if(ans>M) return 2; 
    }
    if(ans==M) return 1; 
    else return 0 ; 

  }

  int NthRoot(int N, int M) {
    int lo = 1 ;
    int hi = M; 
    while(hi>=lo)
    {
      int mid = lo + (hi - lo)/2; 
      // there are three possibilties
      //yes (1)
      // no but smaller (0)
      // no but larger (2) 
      int midN = func(N,M, mid); 
      if(midN==1) return mid; 
      else if(midN==0) lo = mid + 1; 
      else if (midN==2) hi = mid-1; 
    }
    return -1; 
       
    }
};
