class Solution {
public:
    int singleNumber(vector<int>& nums) {
        /*
	    
	    LOGIC : NUMBER ^ 0 = NUMBER 
	            NUMBER ^ NUMBER = 0
	    
	    */

        int ans=0;

        for(int i=0;i<nums.size();i++)
        {
            ans^=nums[i];
        }

        return ans;
    }
};