class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set<string> s; 
        for(int i=0; i<words.size(); i++)
        {
            if(s.find(words[i])==s.end())// not exists
            {
                reverse(words[i].begin(),words[i].end());
                s.insert(words[i]);

                
            }

        }
        return words.size()-s.size();
        
    }
};