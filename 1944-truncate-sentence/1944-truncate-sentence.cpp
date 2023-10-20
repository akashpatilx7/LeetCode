class Solution {
public:
    string truncateSentence(string s, int k) {
        // Time Complexity : O(N) & Space Complexity : O(1)

        string res="";
        int count=0;

        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                count++;
                if(count==k){
                    break;
                }
            }
            res.push_back(s[i]);
        }
        return res;  
    }
};