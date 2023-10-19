class Solution {
public:
    string interpret(string command) {
        // Time Complexity : O(N) & Space Complexity : O(1)

        string interpretedString="";
        for(int i=0;i<command.length();){
            if(command[i]=='G'){
                interpretedString+='G';
                i++;
            }

            else if(command[i]=='(' && command[i+1]==')'){
                interpretedString+='o';
                i+=2;
            }

            else{
                interpretedString+="al";
                i+=4;
            }
        }
        return interpretedString;
    }
};