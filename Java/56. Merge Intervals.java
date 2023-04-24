class Solution {
    public int[][] merge(int[][] intervals) {
        int n = intervals.length;
        List<int[]> res = new ArrayList();
        Arrays.sort(intervals,(a,b)-> a[0]-b[0]);
        for(int i = 0; i<n; i++){
            if(res.isEmpty() || res.get(res.size() - 1)[1] < intervals[i][0]){
                res.add(intervals[i]);
            }
            else{
                res.get(res.size() - 1)[1] = Math.max(res.get(res.size() - 1)[1], intervals[i][1]);
                res.get(res.size() - 1)[0] = Math.min(res.get(res.size() - 1)[0], intervals[i][0]);
            }
        }
        return res.toArray(new int[0][]);
    }
}
