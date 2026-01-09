class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string prefix = strs[0]; // Start with the first string as the base

        for (int i = 1; i < strs.size(); ++i) {
            // Shrink prefix until it's a prefix of strs[i]
            while (strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.size() - 1);//shrink the original prefix arr by 1 
                if (prefix.empty()) return "";
            }
        }

        return prefix;
    }
};