class Solution {
public:
    int kthElement(vector<int> &a, vector<int>& b, int k) {
      int n1 = a.size(),n2= b.size(); 
      if(n1>n2) return kthElement(b,a,k); 

      int n = n1+n2; // total number of elements 
      int left_number = k; 
      
      int lo = max(0, k-n) ; // km se km itne to lene pdegge
      int hi = min(k,n1) ; // itne se jyada nhi le skte 

      while(lo<=hi){
        int mid1 = (lo+hi)/2; 
        int mid2 = left_number - mid1; 

        int l1 = INT_MIN , l2 = INT_MIN; 
        int r1 = INT_MAX , r2 = INT_MAX; 

        if(mid1<n1) r1=a[mid1]; 
        if(mid2<n2) r2=b[mid2]; 

        if(mid1-1>=0) l1=a[mid1-1]; 
        if(mid2-1>=0) l2=b[mid2-1]; 

        if(l1<=r2 && l2<=r1)
        {
          return max(l1,l2);
        }

        else if (l1>r2) hi = mid1 -1 ; 
        else if(l2>r1) lo = mid1+1; 
  
        
      }
      return 0; //hypothetical ans 

   
  }
};