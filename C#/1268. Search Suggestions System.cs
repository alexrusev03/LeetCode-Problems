public class Solution {
    public IList<IList<string>> SuggestedProducts(string[] products, string searchWord) {
        IList<IList<string>> res = new List<IList<string>>();
        int l = 0;
        int r = products.Length - 1;
        Array.Sort(products);
        for(int i = 0; i < searchWord.Length; i++){
            List<string> temp = new List<string>();
            while(l <= r && (products[l].Length == i || products[l][i] < searchWord[i])){
                l++;
            }
            while(l <= r && (products[r].Length == i || products[r][i] > searchWord[i])){
                r--;
            }
            for(int j = 0; j < 3; j++){
                if(l+j<=r){
                    temp.Add(products[l+j]);
                }
            }
            res.Add(temp);
        }
        return res;
    }
}
