class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.length();
        int half_len = n/2;

        string half = s.substr(0,half_len);

        sort(half.begin(),half.end());

        string right_half = half;
        reverse(right_half.begin(),right_half.end());

        if(n%2 == 0){
            return half+right_half;
        }else{
            return half+ s[half_len]+right_half;
        }
    }
};