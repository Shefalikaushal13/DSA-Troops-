class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> charMap;
        int n=s.length();
        int maxL=0;
        int left=0;

        for(int right=0;right<n;right++){
            if(charMap.count(s[right])==0 || charMap[s[right]]<left){
                //If the current character is not in the map or its index is less than left, it means it is a new unique character.
                charMap[s[right]]=right;
                maxL=max(maxL,right-left+1);
            }else{
                left=charMap[s[right]]+1;
                charMap[s[right]]=right;
                //If the character is repeating within the current substring, we move the left pointer to the next position after the last occurrence of the character.
//We update the index of the current character in the charMap and continue the iteration.
            }
        }
        return maxL;
        
    }
};
