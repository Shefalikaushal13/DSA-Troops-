class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int boats=0;
        int left=0;
        int right=people.size()-1;
        while(left<=right){
            int sum=people[left]+people[right];
            if(sum<=limit){
                left++;
                right--;
            }
            else{        // sum exceeds the limit, then heaviest person will go alone, hence updating only the right pointer
                right--;
            }
            boats++;
        }
        return boats;
    }
};
