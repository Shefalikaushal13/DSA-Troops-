class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m; 
        unordered_set<int> s; 
        for(int i=0; i<arr.size();i++)
        {
            m[arr[i]]++; 
        }
        for(auto ele:m)
        {
            s.insert(ele.second);
        }
        if(s.size()==m.size()) return true; 
        else return false;
        
    }
};