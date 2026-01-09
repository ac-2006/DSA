class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) return false;//return false if both arr doesnt have same size

        int mapS[256] = {0},mapT[256] = {0};//make two map for both s and t arr

        for(int i = 0;i<s.size();i++){
            char c1 = s[i],c2 = t[i];

            if(mapS[c1] != mapT[c2]) return false; 

            mapS[c1] = i+1;
            mapT[c2] = i+1;
        }


        return true;


    }
};