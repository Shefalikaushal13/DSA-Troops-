class Solution {
public:
    int romanToInt(string s) {
        // use a hashmap 
        unordered_map<char,int> m; 
        m['I']=1; 
        m['V']=5; 
        m['X']=10; 
        m['L']=50; 
        m['C']=100; 
        m['D']=500; 
        m['M']=1000; 
        int ans = 0; 
        int last = 0; // keep the track of last added value 
        // for subtractive cases 

        for(int i = s.size()-1; i>=0; i--)
        {
            int curr = m[s[i]]; 

            if(curr<last)
            {
                // subtractive case 
                ans-= curr; 
            }
            else 
            {
                // additive case 
                ans +=curr; 
            }
            // save the last now 
            last = curr; 

        }
        return ans; 


        
    }
};