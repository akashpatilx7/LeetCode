class Solution {
public:
    string removeDuplicates(string s) {
        // Time Complexity : O(N*N) & Space Complexity : O(1)

        int i=0;
        int j=i+1;

        while(j<s.length()){
            if(s[i]==s[j]){
                s.erase(i,2); // will erase the characters at the index i & i+1 i.e. j & update the string s in its place itself

                i=max(0,i-1);
                j=max(i+1,j-1);
            }

            else{
                i++;
                j++;
            }
        }
        return s;
    }
};