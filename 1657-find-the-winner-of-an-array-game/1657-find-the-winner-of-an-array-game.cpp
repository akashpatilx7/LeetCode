class Solution {
public:
  int getWinner(vector<int>& arr, int k) {
    //   Time Complexity : O(N) & Space Complexity : O(1)

    // ***TRAP***
    // The larger integer wins and remains at position 0, and the smaller integer moves to the end of the array.

    // assuming 1 of the 2 numbers as a winner already & if false, then updating the winner!
      int winner=arr[0];
      int winCount=0;

      for(int i=1;i<arr.size();i++){
          if(winner<arr[i]){
              winner=arr[i];
              winCount=0;
          }
          winCount++;
          if(winCount==k){
              return winner;
          }
      }
      return winner;
  }
};
