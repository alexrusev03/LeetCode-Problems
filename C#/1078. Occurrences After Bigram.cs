public class Solution {
    public string[] FindOcurrences(string text, string first, string second) {
        string[] arr = text.Split(" ");
        List<string> l = new List<string>();
        for(int i=0; i<arr.Length; i++){ 
            if(i+2 < arr.Length){
                if(arr[i]==first && arr[i+1]==second){
                    l.Add(arr[i+2]);
                }
            }
        }
        string[] res = new string[l.Count];
        for(int j=0;j<l.Count;j++){
            res[j]=l[j];
        }
        return res;
    }
}
