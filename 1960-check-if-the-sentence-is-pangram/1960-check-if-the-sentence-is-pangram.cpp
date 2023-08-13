class Solution {
public:
    bool checkIfPangram(string sentence) {
        // Time Complexity : O(N*26)=O(N) & Space Complexity : O(N) 
        /* What is the space complexity of vector?
           The space complexity of a std::vector is linear in its size, since the underlying structure is as C-array. std::vector<int> v; an empty container is constructed. If a reallocation happens, the reallocation is itself up to linear in the entire size. 
        */

        
        vector<int>frequency(26,0);
        //vector<datatype>vector_name(vector_size,value);

        /*
        for(char c:sentence)
        {
            frequency[c-'a']++;
        }
        */

        for(int i=0;i<sentence.length();i++)
        {
            frequency[sentence[i]-'a']++;
        }

        for(int i=0;i<26;i++)
        {
            if(frequency[i]==0)
            {
                return false;
            }
        }
        return true;
    }
};