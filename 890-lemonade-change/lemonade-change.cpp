class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int numof5 = 0,numof10 = 0;

        for(int i = 0;i<bills.size();i++){
            if(bills[i] == 5){
                numof5++;
            }else if(bills[i] == 10){
                numof10++;
                numof5--;
            }else{
                if(numof10 > 0 && numof5 > 0){
                    numof10--;
                    numof5--;
                }else if(numof5 >= 3){
                    numof5-=3;
                }else{
                    return false;
                }
            }

            if(numof5 < 0) return false;
        }

        return true;
    }
};