class Solution {
public:
    string sortSentence(string s) {
        vector<string>temp(10);
        string res="";
        string word="";

        for(int i=0;i<s.length();i++){
            if(s[i]>=48 && s[i]<=57){
                temp[s[i]-48]=word+' ';
                word="";
                i++; // imp 
            }

            else{
                word+=s[i];
            }
        }

        for(string i:temp){
            res+=i;
        }

        res.pop_back();
        return res;
    }
};