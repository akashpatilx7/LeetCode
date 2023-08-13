class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        // Time Complexity : O(N) & Spac Complexity : O(1)

        int i=0,j=nums.size()-1;
        long long int totalConcatValue=0;

        while(i<=j)
        {
            long long int concatValue=0;

            if(i!=j)
            {
                /*

                LOGIC :
                The Concatenation Value formed by concatenating the two numbers can be obtained as : 7 * 10^(1) + 4 

                */

                string s=to_string(nums[j]);
                concatValue=nums[i]*pow(10,s.size());
            }

            concatValue+=nums[j];
            totalConcatValue+=concatValue;
            i++;
            j--;
        }
        return totalConcatValue;
    }
};