class Solution {
public:
    string sortSentence(string s) {
        // Time Complexity: O(N) & Space Complexity : O(N)

        vector<string>temp(10);
        string res="";
        string word="";

        for(int i=0;i<s.length();i++){
            if(s[i]>=48 && s[i]<=57){
                temp[s[i]-48]=word+" ";
                // erasing the current word for the next iteration to start
                word="";
                i++;
            }

            else{
                word+=s[i];
            }
        }

        for(string i:temp){
            res+=i;
        }
        // deleting the space present at end
        res.pop_back();
        return res;
    }
};