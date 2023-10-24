class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string morseCodes[27]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        unordered_set<string>uset;

        for(int i=0;i<words.size();i++){
            string curr="";
            for(auto& ch:words[i]){
                curr+=morseCodes[ch-'a'];
            }
            uset.insert(curr);
        }
        return uset.size();
    }
};