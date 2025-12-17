//Greedy approach ...
class Solution {
public:
    bool isPalindrome(int x) {

        int temp = x;
        long int  isPalindrome = 0;    
        while(temp != 0){          
            int rem =  temp % 10;
            isPalindrome = (isPalindrome * 10) + rem;
            temp /= 10;
        }
        
        if(isPalindrome == x && isPalindrome >= 0 ){
            return true;
        }
        return false;
    }
};

