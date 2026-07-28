class Solution {
public:

    void combo(vector<vector<int>> &ans,vector<int> &candidates,vector<int>&curr,int currSum,int i,int target){


        if(currSum == target){
            ans.push_back(curr);
            return;
        }
        if( i>= candidates.size()){
            return;
        }

        if(currSum + candidates[i] <= target){
            curr.push_back(candidates[i]);
            currSum += candidates[i];
            combo(ans,candidates,curr,currSum,i+1,target);
            curr.pop_back();
            currSum -= candidates[i];

            while(i<candidates.size() - 1 && candidates[i] == candidates[i+1]){
                i++;
            }
            combo(ans,candidates,curr,currSum,i+1,target);
        }else{
            return;
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());

        vector<vector<int>> ans;
        vector<int> curr;
        int currSum = 0;
        int i = 0;

        combo(ans,candidates,curr,currSum,i,target);

        return ans;
    }
};