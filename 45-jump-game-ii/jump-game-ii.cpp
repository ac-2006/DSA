class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size(),maxReachable = 0,lastJumpedPos = 0,jumps = 0;
        int i = 0;
        while(lastJumpedPos < n-1){
            maxReachable = max(maxReachable , i + nums[i]);
            if(i == lastJumpedPos){
                lastJumpedPos = maxReachable;
                jumps++;
            }
            i++;
        }

        return jumps;
    }
};