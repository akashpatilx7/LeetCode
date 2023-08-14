class Solution {
public:
    long long countVowels(string word) {
        // Time Complexity : O(N) & Space Complexity : O(1)

        // LOGIC : As the CONSTRAINTS of the given problem are very large (1<=word.length<=10^5), the checking after the generation of all possible substrings takes too much time. (Time Complexity : N^2). So =, we try to find the NUMBER OF ALL SUBSTRINGS A PARTICULAR VOWEL IS ASSOCIATED WITH. While doing this, we need not care about the Consonants present in/ in between the Vowels in the string.

        long long int i, ans=0,n=word.length();

        for(i=0;i<n;i++)
        {
            if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u')
            {
                
                /* The number of substrings associated with the Vowel 'a' in the string XXXaXXXX are calculated as :
                   Total = Substrings(Left) + Substrings(Right)
                         = (index*(n-index)) + (n-index)               
                */

                ans+=(i*(n-i))+(n-i);
            }
        }
        return ans;
    }
};