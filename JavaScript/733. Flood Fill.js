/**
 * @param {number[][]} image
 * @param {number} sr
 * @param {number} sc
 * @param {number} color
 * @return {number[][]}
 */
var dfs = function(image, sr, sc, color, x){
    if(sr<0 || sc<0 || sr>=image.length || sc>=image[0].length || image[sr][sc]==color || image[sr][sc]!=x){
        return;
    }
    image[sr][sc]=color;
    dfs(image,sr+1,sc,color,x);
    dfs(image,sr-1,sc,color,x);
    dfs(image,sr,sc+1,color,x);
    dfs(image,sr,sc-1,color,x);
};
var floodFill = function(image, sr, sc, color) {
    var a = image[sr][sc];
    dfs(image, sr, sc, color, a);
    return image;
};
