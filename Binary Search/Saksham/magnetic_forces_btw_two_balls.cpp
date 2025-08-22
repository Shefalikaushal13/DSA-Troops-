class Solution {
public:


    int check (vector<int> position, int total_balls , int dist)
    {
        int count = 1; 
        int lastpos = position[0]; 

        for(int i=0; i<position.size(); i++)
        {
            if(position[i]-lastpos>=dist)
            {
                count++; 
                lastpos=position[i]; 
            }
            if(count>=total_balls) return true; 
        }
        return false;
    }


    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end()); 
        int lo = 1; // min distance btw the two
        int hi = position.back()-position.front(); 
        int ans = -1 ; // we wont reach here 
        
        while(lo<=hi)
        {
            int mid = lo + (hi-lo)/2; 
            if(check(position,m,mid)==true)
            {
                // we have to look for a max distance 
                ans = mid ; // this can be our potential ans  
                // check right 
                lo = mid + 1; 
            }
            else hi = mid - 1 ; //else go left
        }
        return ans; 
        
    }
};