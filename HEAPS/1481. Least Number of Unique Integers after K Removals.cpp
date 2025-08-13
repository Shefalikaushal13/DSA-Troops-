class Solution {
public:
    struct CompareSecond {
     bool operator()(const pair<int,int> &a, const pair<int,int> &b) const {
        return a.second > b.second; // min-heap by second
     }
    };
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, CompareSecond> pq;
        for(auto x:mp){
            pq.push({x.first,x.second});
        }
        while(k){
            int x=pq.top().first;
            int y=pq.top().second;
            pq.pop();
            y--;
            k--;
            if(y){
                pq.push({x,y});
            }
        }
        return pq.size();
    }
};
