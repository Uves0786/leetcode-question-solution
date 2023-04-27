class Solution {
public:
    void colors(vector<vector<int>>& image, int newcolor,int color,int i,int j)
    {
        if(i<0 || j<0 || i>=image.size() || j>=image[0].size() || image[i][j]!=newcolor)
        {
            return;
        }
        image[i][j]=color;
        colors(image,newcolor,color,i,j-1);
        colors(image,newcolor,color,i-1,j);
        colors(image,newcolor,color,i,j+1);
        colors(image,newcolor,color,i+1,j);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color)
    {
        int newcolor=image[sr][sc];
        if(newcolor==color)
        {
            return image;
        }
         colors(image,newcolor,color,sr,sc);
        return image;
    }
};