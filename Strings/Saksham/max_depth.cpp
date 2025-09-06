// Using stack 
class Solution {
public:
    int maxDepth(string s) {
        stack<char> st; 
        int max_depth = 0; 
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(')
            {
                st.push(s[i]); 
            }
            else if(s[i]==')')
            {
                if(st.size()>max_depth) max_depth = st.size(); 
                st.pop(); 

            }
        }
        return max_depth; 
        
    }
};


class Solution {
public:
    int maxDepth(string s) {
        // without use of stack 
        int count = 0 ; 
        int max_depth = 0; 
        for(int i = 0; i<s.size();i++)
        {
            if(s[i]=='(')
            {
                count++; 
                max_depth = max(max_depth,count); 
            }
            else if(s[i]==')')
            {
                count--; 
            }
        }
        return max_depth;
        
    }
};