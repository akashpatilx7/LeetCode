class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        // Time Complexity : O(N*N) & Space Complexity : O(1)
        //  used unordered_set as we need to operate find operation in O(1) time!

        unordered_set<char>uset;
        for(char ch:allowed){
            uset.insert(ch);
        }
        int count=0;

        for(int i=0;i<words.size();i++){
            // We will traverse and check each charecters of word wether it is allowed or not. If allowed, then check will remain 1, else check=-1 and break the loop immediately for lesser number of operations.
            int check=1;

            for(auto& ch:words[i]){
                if(uset.find(ch)==uset.end()){
                    check=-1;
                    break;
                }
            }
            if(check==1){
                count++;
            }
        }
        return count;   
    }
};