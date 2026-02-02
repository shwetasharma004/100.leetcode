class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
                vector<int> result;

        for(int i=left; i<=right; i++){
             int num = i;              
            bool isDivisible=true;
            while(num>0){
                int digit = num%10;
               if (digit == 0 || i % digit != 0) {
                    isDivisible = false;
                    break;
                }
                num/=10;
            } if (isDivisible) {
                result.push_back(i);
            }
    }
    return result;
    }
};