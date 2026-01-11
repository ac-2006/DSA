class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;

        vector<int> count(26,0);

        for(char c:t) count[c -'a']++;
        for(char c:s) count[c-'a']--;


        for(int i = 0;i<count.size();i++){
            if(count[i] != 0)return false;
        }

        return true;
    }
};