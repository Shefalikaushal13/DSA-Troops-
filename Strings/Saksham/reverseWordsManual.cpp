class Solution {
public:
    string reverseWords(string s) {
        vector<string> str; 
        string temp = ""; 
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i]!=' ')
            {
                // keep adding it up 
                temp.push_back(s[i]); 
            }
            else if(s[i]==' ' && temp.length()!=0)
            {
                // word is  complete 
                str.push_back(temp); 
                //flush your temp 
                temp = ""; 
            }
        }
        if(temp.size()!=0) str.push_back(temp); 

        string result ; 
        for(int i  = str.size()-1; i>=0 ; i--)
        {
            result+=str[i]; 
            if(i>0) result+=" "; 
        }
        return result; 
    }
};