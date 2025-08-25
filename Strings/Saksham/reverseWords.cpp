// Using stringstream header file 
// stringstream ss(str); 
// string temp ; 
// while(ss>>temp)
// {
//     cout<<
// }


class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s); 
        string temp ; 
        vector<string> str; 
        string result; 
        while(ss>>temp)
        {
            str.push_back(temp); 
        }
        stack<string> mystack; 
        for(int i=0 ; i<str.size(); i++)
        {
            mystack.push(str[i]); 
        }
        while(!mystack.empty())
        {
            string temp = mystack.top(); 
            mystack.pop(); 
            if(!mystack.empty())result+=temp+" ";
            else result+=temp;

        }
        return result;
    }
};