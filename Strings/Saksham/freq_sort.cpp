// using hashmap and custom comparator 
class Solution {
public:
    string frequencySort(string s) {
        // count the freq of characters 
        unordered_map<char, int> freq; 

        for(char c:s)freq[c]++; 
        
        // put the characters into a vector 
        
        vector<pair<char,int>> v; 
        for(auto item : freq)
        {
            v.push_back({item.first,item.second}); 
        }

        //sort the vector using custom comparator 
        sort(v.begin(),v.end(), [](pair<char,int> &a, pair<char,int> &b)
        {
            return a.second>b.second; // higher freq first
        });

        string result = ""; 
        for(auto ele: v)
        {
            result.append(ele.second,ele.first); 
            // p.second times p.first ko append kro
        }
        return result; 

        
    }
};




// Without using a HASHMAP
class Solution {
public:
    string frequencySort(string s) {
        int n = s.size(); 
        vector<pair<char,int>> v(150);
        for (char c : s) {
            int idx = (int)c;
            v[idx].first = c;     // set the char
            v[idx].second++;      // count frequency
        }

        sort(v.begin(),v.end(),[](pair<char,int> &a,pair<char,int>&b)
        {
            return a.second>b.second; 
        });
        // lets prepare the answer 
        string result =""; 
        for(auto ele: v)
        {
            result.append(ele.second,ele.first); 
        }
        return result; 

        
    }
};