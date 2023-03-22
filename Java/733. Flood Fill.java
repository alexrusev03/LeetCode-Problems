class Solution {
    public int[][] floodFill(int[][] image, int sr, int sc, int color) {
        int a = image[sr][sc];
        dfs(image, sr, sc, color, a);
        return image;
    }
    public void dfs(int[][] image, int sr, int sc, int color, int x){
        if(sr<0 || sc<0 || sr>=image.length || sc>=image[0].length || image[sr][sc]==color || image[sr][sc]!=x){
            return;
        }
        image[sr][sc]=color;
        dfs(image,sr+1,sc,color,x);
        dfs(image,sr-1,sc,color,x);
        dfs(image,sr,sc+1,color,x);
        dfs(image,sr,sc-1,color,x);
    }
}
