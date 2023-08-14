class Solution {
public:
    bool detectCapitalUse(string word) {
        // If the FIRST LETTER is UPPER
        if(isupper(word[0]))
        {
            // If the SECOND LETTER is also UPPER 
            if(isupper(word[1]))
            {
                for(int i=2;i<word.length();i++)
                {
                    if(islower(word[i]))
                    {
                        return false;
                    }
                }
            }

            // If the SECOND LETTER is not UPPER i.e. It is LOWER 
            else
            {
                for(int i=2;i<word.length();i++)
                {
                    if(isupper(word[i]))
                    {
                        return false;
                    }
                }
            }
        }

        // If the FIRST LETTER is not UPPER i.e. It is LOWER 
        else
        {
            for(int i=1;i<word.length();i++)
            {
                if(isupper(word[i]))
                {
                    return false;
                }
            }
        }

        return true;
    }
};