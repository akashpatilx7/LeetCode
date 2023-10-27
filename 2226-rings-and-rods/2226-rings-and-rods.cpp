class Solution {
public:
    int countPoints(string rings) {
        // Time Complexity : O(N) & Space Complexity : O(N)

        int redCount[10]={0};
        int blueCount[10]={0};
        int greenCount[10]={0};

        for(int i=0;i<rings.size();i+=2){
            char color=rings[i];
            int index=rings[i+1]-'0';

            if(color=='R'){
                redCount[index]++;
            }
            else if(color=='G'){
                greenCount[index]++;
            }
            else if(color=='B'){
                blueCount[index]++;
            }
        }

        int count=0;
        for(int i=0;i<10;i++){
            if(redCount[i]>0 && blueCount[i]>0 && greenCount[i]>0){
                count++;
            }
        }
        return count;
    }
};