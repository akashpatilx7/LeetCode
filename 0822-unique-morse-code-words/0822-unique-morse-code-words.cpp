class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        // Time Complexity : O(N) & Space Complexity : O(N)

        string morseCodes[27]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        // to store only the unique transformations formed
        unordered_set<string>uset;

        for(int i=0;i<words.size();i++){
            string curr="";
            // whenever you don't know the size of the string/ array to be traversed, use "for loop using auto"! 
            for(auto& ch:words[i]){
                curr+=morseCodes[ch-'a'];
            }
            uset.insert(curr);
        }
        return uset.size();
    }
};