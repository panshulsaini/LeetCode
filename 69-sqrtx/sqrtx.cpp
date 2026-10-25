class Solution {
public:
    int mySqrt(int x) {
        double n = x/2.0, bg = 0.0;
        
        if (x == 0 || x ==1){
            return x;
        }

        while (n != bg){
        bg = n;
        n = (x/bg + bg)/2.0;    
        }

        return n;
    }
};