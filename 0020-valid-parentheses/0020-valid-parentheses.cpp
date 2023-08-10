class Solution
{
    public:
        bool isValid(string s)
        {
           	// Time Complexity : O(N) &Space Complexity : O(N)
            stack<int> st;

            for (int i = 0; i < s.length(); i++)
            {
               	// *** conditions for Opening Brackets ***
               	// pushing into the stack, if it's an Opening Bracket
                if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                {
                    st.push(s[i]);
                }

               	// *** conditions for Closing Brackets ***
                else
                {
                   	// if a closed bracket is encountered &the stack is empty
                    if (st.empty())
                    {
                        return false;
                    }

                   	// get stack top for COMPARISON &store it in a variable
                    char c = st.top();

                   	// NOTE : DO NOT POP THE 'char c' BEFORE THE COMPARISON WITH THE CLOSING BRACKET IS DONE. DURING COMPARISON, IF MATCHES, THEN ONLY POP IT!
                    if ((s[i] == ')' && c == '(') || (s[i] == ']' && c == '[') || (s[i] == '}' && c == '{'))
                    {
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
            }

           	// after iteration of the string is completed, check if all the brackets are mapped or not
            if (st.empty())
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};