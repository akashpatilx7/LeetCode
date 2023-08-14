class Solution {
public:
    bool isThree(int n) {
        int noOfDivisors=0;

        for(int i=1;i<=n;i++)
        // NOTE : As the Division by 0 is not possible, 0 is not a Divisor of any Number.
        {
            if(n%i==0)
            {
                noOfDivisors++;
            }
        }

        if(noOfDivisors==3)
        {
            return true;
        }
        return false;
    }
};