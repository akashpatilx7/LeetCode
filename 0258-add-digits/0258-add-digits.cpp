class Solution {
public:
    int addDigits(int num) {
        // Time Complexity : O(log10(num)) & Space Complexity : O(1)

        int sum=INT_MAX;
        while(sum>9){
            int rem=num%10;
            num/=10;
            sum=rem+num;
            num=sum;
        }
        return sum;
    }
};