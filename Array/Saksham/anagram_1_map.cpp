class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false; 
        unordered_map<char,int>m;
        for(int i=0; i<s.length(); i++)
        {
            m[s[i]]++; 
        }
        for(int i=0; i<t.length();i++)
        {
            if(m.find(t[i])!=m.end()){
                //means the occurence occurs
                m[t[i]]--;//lower the frequency 
                if(m[t[i]]==0)m.erase(t[i]);//erase the element if freq reaches 0
            }
            else return false; 
        }
        if(m.size()==0)return true; 
        else return false; 
    
    }
};