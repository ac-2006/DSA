#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";

        // Step 1: Transform the string with separators (#)
        string t = "#";
        for (char c : s) {
            t += c;
            t += "#";
        }

        int n = t.size();
        vector<int> P(n, 0); // Array to store palindrome radius
        int C = 0, R = 0;    // Current center and right boundary
        int maxLen = 0, centerIndex = 0;

        // Step 2: Main loop
        for (int i = 0; i < n; i++) {
            int mirror = 2 * C - i; // Mirror index of i around center C

            if (i < R)
                P[i] = min(R - i, P[mirror]);

            // Expand around center i
            int a = i + (1 + P[i]);
            int b = i - (1 + P[i]);
            while (a < n && b >= 0 && t[a] == t[b]) {
                P[i]++;
                a++;
                b--;
            }

            // Update center and right boundary if expanded past R
            if (i + P[i] > R) {
                C = i;
                R = i + P[i];
            }

            // Track longest palindrome
            if (P[i] > maxLen) {
                maxLen = P[i];
                centerIndex = i;
            }
        }

        // Step 3: Extract result
        int start = (centerIndex - maxLen) / 2; // Map back to original string
        return s.substr(start, maxLen);
    }
};
