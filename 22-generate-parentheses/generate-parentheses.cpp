class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        addingpair(res,"",n,0);

        return res;

    }

    void addingpair(vector<string> &p,string str,int n,int m){
        if(n == 0 && m == 0){
            p.push_back(str);
            return;
        }
        if(m > 0)addingpair(p,str+")",n,m-1);
        if(n > 0)addingpair(p,str+"(",n-1,m+1);
    }
};