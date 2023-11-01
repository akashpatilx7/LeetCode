class Solution {
public:
  bool isPalindrome(int x) {
    // Time Complexity : O(N) & Space Complexity : O(1)

      if(x<0 || x!=0 && x%10==0){
          return false;
      }

      int reverseNumber=0;
      while(x>reverseNumber){
          reverseNumber=(reverseNumber*10)+x%10;
          x=x/10;
      }

      return x==reverseNumber || x==(reverseNumber/10);
  }
};
