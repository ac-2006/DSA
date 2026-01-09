class Solution {
public:
    string reverseWords(string s) {
        //1.remove space in-place
        int n = s.size();
        int i = 0,j=0;

        while(i < n && s[i] == ' ')i++;//for remove front spaces

        bool spacePending = false;

        while(i < n){
            if(s[i] != ' '){
                if(spacePending){
                    s[j++] = ' ';
                    spacePending = false;
                }
                s[j++] = s[i];
            }else{
                spacePending = true; //in this all multiple spaces are collapsed 
            }
            i++;
        }
        
        s.resize(j); //resize whole array after remove all space


        //2.reverse the whole array
        reverse(s.begin(),s.end());

        //reversee the words


        //imp notice => we are just remove some space so dont use n again
        int start = 0;
        for(int end = 0;end <= s.size();end++){
            if(end == s.size() || s[end] == ' '){
                reverse(s.begin() + start,s.begin() + end);
                start = end +1;
            }
        }

        return s;
    }
};