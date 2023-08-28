class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        // Time Complexity : O(1) & Space Complexity : O(N)

        int countOfStudents=0, i=0;
        queue<int>q;

        for(auto x:students){
            q.push(x);
        }

        while(countOfStudents<q.size() && i<sandwiches.size()){
            if(q.front()==sandwiches[i]){
                q.pop();
                i++;
                countOfStudents=0;
            }

            else{
                q.push(q.front());
                q.pop();
                countOfStudents++;
            }
        }
        return q.size();
    }
};
