class Solution {
public:
    string toLowerCase(string s) {
        // Time Complexity : O(N) & Space Complexity : O(1)

        for(auto& ch:s){
            if(ch>='A' && ch<='Z'){
                ch+=32;
            }
        } 
        return s;

    //  for(int i=0;i<s.length();i++){
    //      if(s[i]>='A' && s[i]<='Z'){
    //          s[i]+=32;
    //      }
    //  }
    //  return s;
    }
};