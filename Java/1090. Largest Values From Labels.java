class Solution {
    public int largestValsFromLabels(int[] values, int[] labels, int numWanted, int useLimit) {
        List<Pair> l = new ArrayList<>();
        HashMap<Integer, Integer> mp = new HashMap<Integer, Integer>();
        int n = values.length;
        int res = 0;
        for(int i=0; i<n; i++){
            l.add(new Pair(values[i],labels[i]));
        }
        Collections.sort(l,(a,b)->b.value-a.value);
        for(int i=0; i<n; i++){        
            if((!mp.containsKey(l.get(i).label) || mp.get(l.get(i).label)<useLimit) && numWanted!=0){
                mp.put(l.get(i).label,mp.getOrDefault(l.get(i).label,0)+1);
                res+=l.get(i).value;
                numWanted--;
            }
        }
        return res;
    }
}
class Pair{
    int value;
    int label;
    public Pair(int value, int label){
        this.value=value;
        this.label=label;
    }
}
