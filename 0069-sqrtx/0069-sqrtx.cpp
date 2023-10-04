class Solution {
public:
    int mySqrt(int x) {
        // Time Complexity : O(logN) & Space Complexity : O(1)

        long long low=1, high=x;

        while(low<=high){
            long long mid=(low+high)/2;
            long long val=mid*mid;

            if(val<=x){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return high;
    }
};