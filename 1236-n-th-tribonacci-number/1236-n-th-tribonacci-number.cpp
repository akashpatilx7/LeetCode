class Solution {
public:
    int tribonacci(int n) {
        int a=0,b=1,c=1;
        int ans,count=0;

        if(n==0)
        {
            return 0;
        }

        if(n==1 || n==2)
        {
            return c;
        }

        count=3;
        while(count<=n)
        {
            ans=a+b+c;
            a=b;
            b=c;
            c=ans;
            count++;
        }
        return ans;
    }
};