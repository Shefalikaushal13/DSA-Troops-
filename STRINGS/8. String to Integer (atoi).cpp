class Solution {
public:
    int myAtoi(string s) {
        long long x=0;
        int n=s.size();
        bool sign=0;
        bool visited=0;
        for(int i=0;i<n;i++){
            if(!visited&&s[i]==' ')continue;
            else if(!visited&&s[i]=='-'){
                sign=1;
                visited=1;
            }
            else if(!visited&&s[i]=='+'){
                sign=0;visited=1;
            }
            else {
                if(isdigit(s[i])){
                    x=x*10+s[i]-'0';
                    visited=1;
                    if (!sign && x >= INT_MAX) return INT_MAX;
                    if (sign && -x <= INT_MIN) return INT_MIN;
                }else break;
            }
        }
        return sign?-x:x;
    }
};
