// class Solution {
// public:
//     int n;
//     int solve(int index,vector<int>& heights, int bricks, int ladders){
//         if(index==n-1)return 0;

//         if(heights[index+1]<=heights[index]){
//             return 1+solve(index+1,heights,bricks,ladders);
            
//         }else{
//             int byladders=0;
//             int bybricks=0;
//             int diff=heights[index+1]-heights[index];
//             if(bricks>=diff){
//                 bybricks=1+solve(index+1,heights,bricks-diff,ladders);
//             }
//             if(ladders){
//                 byladders=1+solve(index+1,heights,bricks,ladders-1);
//             }
//             return max(bybricks,byladders);
//         }
//     }
//     int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
//         n=heights.size();
//         int index=0;
//         return solve(index,heights, bricks, ladders);
//     }
// };
class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {      
        int n = heights.size();
    
        priority_queue<int> pq;
        
        int i = 0;
        for(;i < n-1;i++) {
            if(heights[i] >= heights[i+1]) {
                continue;
            }
            
            int diff = heights[i+1]-heights[i];
            if(diff <= bricks) {
                bricks -= diff;
                pq.push(diff); //I used diff bricks here (keep track of it)
            } else if(ladders > 0) {
                if(!pq.empty()) {
                    int max_bricks_past = pq.top();
                    if(max_bricks_past > diff) {
                        //it means i unneccasrily used huge bricks in past. Let's get it back
                        bricks += max_bricks_past;
                        pq.pop();
                        pq.push(diff);
                        bricks -= diff;
                    }
                }
                ladders--; //either used in past or present
            } else {
                break;
            }
        }
        return i;
    }
};
