class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end()); 

        string first = strs[0]; 
        string last = strs[strs.size()-1];

        // comparing 1 and last string 
        string ans = ""; 

        for(int i = 0 ; i < first.length(); i++)
        {
            if (first[i]==last[i])
            {
                ans.push_back(first[i]);    
            }
            else
            {
                break; 
            }
        } 
        return ans; 
    }
};