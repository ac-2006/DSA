class Solution {
public:
    string removeOuterParentheses(string s) {
        int opCount = 0; // op => open parentheses
        int k = 0; // for writing new inside the arr

        for(auto& curr : s){
            if(opCount > 0 && curr == ')')
                opCount--; //close one level before writing
            
            if(opCount > 0){
                s[k++] = curr; //writing only inner parenthese
            }

            if(curr == '('){
                opCount++; //open new level
            }
        }

        s.resize(k);

        return s;
    }
};