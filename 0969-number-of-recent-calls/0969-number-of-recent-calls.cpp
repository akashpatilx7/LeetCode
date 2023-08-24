class RecentCounter {
public:
    queue<int>q;

    RecentCounter() {
        // Time Complexity : O(1) & Space Complexity : O(N)    
    }
    
    int ping(int t) {
        if(q.size()==0){
            // first call
            q.push(t);
            return 1;
        }

        else{
            if(t<=3000){
                // t is in the range of margin
                q.push(t);
            }

            else{
                // t is not in the range of margin
                int margin=t-3000;
                while(q.size()!=0 && q.front()<margin){
                    q.pop();
                }
                q.push(t);
            }
            return q.size();
        }
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */