class Solution {
public:
    string countAndSay(int n) {
        // Time Complexity : O(N*N) & Space Complexity : O(N*N)

        if(n==1){
            return "1";
        }  

        if(n==2){
            return "11";
        }
        string s="11";
        for(int i=3;i<=n;i++){
            string temp="";
            s=s+'$'; // delimeter
            int count=1;
            for(int j=1;j<s.length();j++){
                if(s[j]!=s[j-1]){
                    temp=temp+to_string(count);
                    temp=temp+s[j-1];
                    // minimum count of every element
                    count=1;
                }
                else{
                    count++;
                }
            }
            s=temp;
        }
        return s;
    }
};