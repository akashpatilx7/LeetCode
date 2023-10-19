class Solution {
public:
    int balancedStringSplit(string s) {
        // Time Complexity : O(N) & Space Complexity : O(1)
        
        int count=0;
        int balanced=0;

        for(int i=0;i<s.length();i++){
            if(s[i]=='R'){
                balanced--;
            }
            else{
                balanced++;
            }

            if(balanced==0){
                count++;
            }
        }
        return count;
    }
};