class Solution {
public:
    bool isAnagram(string s, string t) {
        // using hash-map 
        // if freq. count is equal in both strings 
        if(s.length()!=t.length()) return false; 
        //if equals then we have to calculate the frequency
        unordered_map<char,int>m;
         //character to frequency 
        unordered_map<char,int>n;
        for(int i=0; i<s.length(); i++)
        {
            m[s[i]]++; 
            n[t[i]]++;
        }
        //compare each key value pair 
        for(auto ele:m)
        {
            char ch1=ele.first; 
            int freq1=ele.second; 
            if(n.find(ch1)!=n.end()){
                //if exits the key in the second map 
                int freq2=n[ch1];// compare freq 
                if(freq1!=freq2) return false;  
            }
            else return false;
        }
        return true;
        
    }
};