class Solution {
public:
    string removeDuplicates(string s) {
        // Time Complexity : O(N) & Space Complexity : O(1)

        // NOTE : push_back() & pop_back() can also be used with strings!
        string temp="";
        int i=0;

        while(i<s.length()){
            if(temp.empty() || s[i]!=temp.back()){
                temp.push_back(s[i]);
            }

            else{
                temp.pop_back();
            }

            i++;
        }
        return temp;
    }
};