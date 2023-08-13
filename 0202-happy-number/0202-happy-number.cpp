class Solution {
public:
    bool isHappy(int n) {
        // Set/ Hashmap based Approach---->Time Complexity : )(N) & Space Complexity : O(N)

        // Declaring a Set
        set<int>myset;

        int val;
        int index;

        while(1){
            val=0;
            while(n){
                index=n%10;
                val+=(index*index);
                n/=10;
            }
            if(val==1){
                return true;
            }
            // if value!=1 & already found in set i.e. a Loop exists in the LL formed from the respective numbers 
            else if(myset.find(val)!=myset.end()){
                return false;
            }

            // if value!=1 & not found in set
            myset.insert(val);

            n=val;
        }
        return false;
    }
};