public class Solution {
    public int LargestValsFromLabels(int[] values, int[] labels, int numWanted, int useLimit) {
        int n = values.Length;
        var arr = new Pair[n];
        Dictionary<int, int> dict = new Dictionary<int, int>();
        int res = 0;
        for(int i=0; i<n; i++){
            arr[i] = new Pair(values[i], labels[i]);
        }
        Array.Sort(arr,(a,b) => b.value.CompareTo(a.value));
        for(int i=0; i<n; i++){        
            if(numWanted!=0){
                if(!dict.ContainsKey(arr[i].label)){
                    dict.Add(arr[i].label, 0);
                }
                if(dict[arr[i].label] < useLimit){   
                    dict[arr[i].label]++;
                    res+=arr[i].value;
                    numWanted--;
                }
            }
        }
        return res;
    }
    public class Pair{
        public int value;
        public int label;
        public Pair(int value, int label){
            this.value=value;
            this.label=label;
        }
    }
}
