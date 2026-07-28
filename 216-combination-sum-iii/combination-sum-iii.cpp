class Solution {
public:
    void combo(vector<vector<int>>& ans, vector<int>& curr, int k, int target, int start) {
        if (curr.size() == k && target == 0) {
            ans.push_back(curr);
            return;
        }
        if (curr.size() > k || target < 0) return;

        for (int num = start; num <= 9; num++) {
            curr.push_back(num);
            combo(ans, curr, k, target - num, num + 1);
            curr.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int target) {
        vector<vector<int>> ans;
        vector<int> curr;
        combo(ans, curr, k, target, 1);
        return ans;
    }
};
