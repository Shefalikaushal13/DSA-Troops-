class Solution {
public:
    string largestOddNumber(string num) {
        int length = num.length();
        if(num[length-1]%2 ==1) return num; 
        // because the asci codes of odd numbers are also odd
        for(int i = length-2; i>=0; i--)
        {
            if(num[i]%2 == 1)
            {
                return num.substr(0,i+1); 
            }
        }
        return ""; 

        
    }
};