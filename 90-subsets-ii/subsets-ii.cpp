class Solution {
public:

    void sub(vector<int>&nums,vector<vector<int>> &ans,vector<int> &curr,int i){
        ans.push_back(curr);

        for(int j = i;j<nums.size();j++){
            curr.push_back(nums[j]);
            sub(nums,ans,curr,j+1);
            curr.pop_back();
            while(j < nums.size()-1 && nums[j] == nums[j+1]){
                j++;
            }
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        sort(nums.begin(),nums.end());

        sub(nums,ans,curr,0);

        return ans;
    }
};