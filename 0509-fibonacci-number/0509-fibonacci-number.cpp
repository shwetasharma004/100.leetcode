class Solution {
public:
    int fib(int n) {
         if(n == 0) return 0;
        if(n == 1) return 1;
    
        int p1 = 0, p2=1, p3=0;
        for(int i=2; i<=n; i++){
            p3 = p1 + p2;
            p1 = p2; p2 = p3; 
        }
         return p3;
    }
};