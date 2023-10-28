class Solution {
public:
    void reverseString(vector<char>& s) {
        // Time Complexity : O(N) & Space Complexity : O(1)

        int l=0, r=s.size()-1;

        while(l<r){
            swap(s[l],s[r]);
            l++;
            r--;
        }
    }
};