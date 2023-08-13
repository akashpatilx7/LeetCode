class Solution {
public:
    void reverseString(vector<char>& s) {
        // Time Complexity : O(N) & Space Complexity : O(1)

        // The most suitable Algorithm to Reverse a String is "TWO-POINTER" Algorithm.

        int left=0;
        int right=s.size()-1;
        char temp;

        while(left<right)
        // Even if we take (left<=right), the swapping of the Middle Element takes place with itself. So, no difference in the string will occur.
        {
            temp=s[left];
            s[left]=s[right];
            s[right]=temp;

            left++;
            right--;
        }
    }
};