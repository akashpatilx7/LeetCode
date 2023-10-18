class Solution {
public:
    string defangIPaddr(string address) {
        // Time Complexity : O(N) & Space Complexity : O(1)

        // NOTE: '.' & "[.]" are to be treated differently!
        string defanged="";
        int n=address.length();

        for(int i=0;i<n;i++){
            if(address[i]!='.'){
                defanged+=address[i];
            }

            else{
                defanged+="[.]";
            }
        }
        return defanged;
    }
};