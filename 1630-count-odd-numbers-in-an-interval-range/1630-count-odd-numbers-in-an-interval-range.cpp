class Solution {
public:
    int countOdds(int low, int high) {
        // Time Complexity : O(1) & Space Complexity : O(1)

        /* 
        
        LOGIC :
        
        4 Posible Cases ----> low = odd & high = odd
                              low = odd & high = even 
                              low = even & high = odd
                              low = even & high = even (DO NOT ADD 1)

        */

        if(low%2==0 && high%2==0)
        {
            return (high-low)/2;
        }
        return ((high-low)/2)+1;
    }
};