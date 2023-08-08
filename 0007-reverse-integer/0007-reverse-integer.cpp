class Solution {
public:
    int reverse(int x) {
        // Time Complexity : O(1) & Space Complexity : O(1)

        int lastDigit=0;
        int revNum=0;

        while(x){
            if(revNum>INT_MAX/10 || revNum<INT_MIN/10){ // check if revNum is in 32-Bit Range, if not, return 0
                return 0;
            }

            lastDigit=x%10;
            revNum=(revNum*10)+lastDigit;
            x=x/10;
        }
        return revNum; // will only return if revNum is in the 32-Bit Range
    }
};