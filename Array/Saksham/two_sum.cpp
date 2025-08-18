class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m; 
        vector<int> result; 
        for(int i=0; i<nums.size();i++)
        {
            m[nums[i]]=i; 
            // m [key] = value ; 
            // number -> syntax 
        }
        // now our hash_map is filled 
        for(int i=0;i<nums.size();i++)
        {
            // if there exist any number that adds up to form
            int required_number=target-nums[i]; 
            if(m.find(required_number)!=m.end()&& m[required_number] != i)//not using the same element twice 
            {
                // required_number exists
                result.push_back(i); 
                result.push_back(m[required_number]);
                break;
            }
        }
        return result;

        
    }
};
// one pass 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m; // value -> index
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            int required_number = target - nums[i];
            
            // Check if we already saw the required number
            if (m.find(required_number) != m.end()) {
                result.push_back(m[required_number]); // index of complement
                result.push_back(i);                  // current index
                return result; // found the pair, exit immediately
            }

            // Store current number with its index
            m[nums[i]] = i;
        }
        return result;
    }
};
