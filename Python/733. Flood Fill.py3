class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, color: int) -> List[List[int]]:
        a = image[sr][sc]
        self.dfs(image, sr, sc, color, a)
        return image
    def dfs(self, image: List[List[int]], sr: int, sc: int, color: int, x: int):
        if sr<0 or sc<0 or sr>=len(image) or sc>=len(image[0]) or image[sr][sc]==color or image[sr][sc]!=x:
            return
        image[sr][sc]=color
        self.dfs(image,sr+1,sc,color,x)
        self.dfs(image,sr-1,sc,color,x)
        self.dfs(image,sr,sc+1,color,x)
        self.dfs(image,sr,sc-1,color,x)
