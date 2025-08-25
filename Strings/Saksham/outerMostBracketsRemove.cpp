class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0 ; 
        string result = ""; 
        for(char ele:s)
        {
            if(ele == '(' && count == 0)
            {
                count++;
                // but donot include 
            }
            else if(ele == ')' && count==1)
            {
                count--; 
                // dont store as this is last closing bracket
            }
            else if (ele == '(')
            {
                result.push_back(ele); 
                count++; 
            }
            else if(ele ==')')
            {
                result.push_back(ele); 
                count--; 
            }
        }
        return result; 
        
    }
};