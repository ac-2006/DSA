class Solution {
public:
    string largestOddNumber(string num) {
        for(int i = num.size()-1;i>=0;i--){
            if( num[i] % 2 != 0){
                return num;
            }else{
                num.resize(i);
            }
        }

        return "";
    }
};