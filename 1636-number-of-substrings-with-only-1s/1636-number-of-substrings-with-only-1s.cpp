class Solution {
public:
    int numSub(string s) {
        // LOGIC : While starting, initialise the "count" variable with 0. Increment count till encountering "0". After encountering 0, RESET the count to 0 again.

        /* modulo 10^9+7 ----> Taking % of the answer with (10^9+7) i.e.
           modulo 10^9+7 ----> Answer % (10^9+7)
        */

        int ans=0, count=0;
        int mod=1000000007;

        for(int i=0;i<s.length();i++)
        {
            // s[i] = s.charAt(i)
            if(s[i]=='1')
            {
                count+=1;
                ans=(ans+count)%mod;
            }

            else
            {
                count=0;
            }
        }
        return ans;
    }
};