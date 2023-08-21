class Solution {
public:
    int calPoints(vector<string>& operations) {
        // Time Complexity : O(N) & Space Complexity : O(N)

        vector<int>scores;
        int size=0;

        for(auto i : operations){
            if(i=="+"){
                scores.push_back(scores[size-1]+scores[size-2]);
                size++;
            }

            else if(i=="D"){
                scores.push_back(2*scores[size-1]);
                size++;
            }

            else if(i=="C"){
                size--; // // decreasing the size of the vector before popping an element
                scores.pop_back();
            }

            else{
                size++; // increasing the size of the vector before pushing an element
                scores.push_back(stoi(i));
            }
        }

        int sum=0;
        for(int i=0;i<size;i++){
            sum+=scores[i];
        }
        return sum;
    }
};