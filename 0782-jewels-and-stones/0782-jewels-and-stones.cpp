class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        // Time Complexity : O(N*N) & Space Complexity : O(1)
        
        int count=0;
        for(int i=0;i<jewels.length();i++){
            for(int j=0;j<stones.length();j++){
                if(jewels[i]==stones[j]){
                    count++;
                }
            }
        }  
        return count;
    }
};