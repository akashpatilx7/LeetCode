class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        // Time Complexity : O(N^2) & Space Complexity : O(N)

        int n=image.size();

        // Horizontal Flip 
        for(int i=0;i<n;i++)
        {
            // Swapping 
            int left=0,right=n-1;

            while(left<=right)
            // while(left<right) can also be used
            {
                int temp=image[i][left];
                image[i][left]=image[i][right];
                image[i][right]=temp;
                left++;
                right--;
            }
        }

        // Inverting
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(image[i][j]==0)
                {
                    image[i][j]=1;
                }

                else
                {
                    image[i][j]=0;
                }
            }
        }

        return image;
    }
};