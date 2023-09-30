class Solution {
public:
    int myAtoi(string s) {
        // Time Complexity : O(N) & Space Complexity : O(1) 
        // "_ _ _-4193xyzabc"

        if(s.length()==0){
            return 0;
        }

        int i=0;
        while(i<s.length() && s[i]==' '){
            i++;
        }
        s=s.substr(i); // trims the leading white spaces from the given string

        int sign=+1;
        long ans=0;
        int MAX=INT_MAX;
        int MIN=INT_MIN;

        if(s[0]=='-'){
            sign=-1;
        }

        if(s[0]=='+' || s[0]=='-'){
            i=1;
        }
        else{
            i=0;
        }

        while(i<s.length()){
            if(s[0]==' ' || !isdigit(s[i])){
                break;
            }

            ans=ans*10+s[i]-'0';

            if(sign==-1 && -1*ans<MIN){
                return MIN;
            }

            if(sign==1 && ans>MAX){
                return MAX;
            }
            i++;
        }
        return int(sign*ans);
    }
};