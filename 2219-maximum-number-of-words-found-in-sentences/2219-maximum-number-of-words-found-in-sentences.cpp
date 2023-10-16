class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        // Time Complexity : O(N*N) & Space Complexity : O(1)

        int maxi=0;

        for(string sentence:sentences){
            int count=1;
            for(char c:sentence){
                if(c==' '){
                    count++;
                }
            }
            maxi=max(maxi,count);
        }
        return maxi;
    }
};