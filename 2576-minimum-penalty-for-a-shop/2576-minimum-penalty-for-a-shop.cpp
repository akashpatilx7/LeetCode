class Solution {
public:
    int bestClosingTime(string customers) {
        // Prefix & Suffix Sums Approach
        // Time Complexity : O(N) & Space Complexity : O(N)

        int s=customers.size();

        // declaring 2 vectors, 1 for Prefix & 1 for Suffix Sums
        vector<int>y,n;
        y.push_back(0);
        n.push_back(0);

        int count=0;
        for(int i=0;i<s;i++){
            if(customers[i]=='N'){
                count++;
            }
            n.push_back(count);
        }

        count=0;
        for(int i=s-1;i>=0;i--){
            if(customers[i]=='Y'){
                count++;
            }
            y.push_back(count);
        }

        reverse(y.begin(),y.end());

        int ans=INT_MAX, ind=0;
        for(int i=0;i<s+1;i++){ // 0-indexed string
            int h=y[i]+n[i];

            if(h<ans){
                ans=h;
                ind=i;
            }
        }
        return ind;
    }
};