class Solution {
    public List<List<Integer>> minimumAbsDifference(int[] arr) {
        int n = arr.length;
        List<List<Integer>> res = new ArrayList<>();
        Arrays.sort(arr);
        int diff = Integer.MAX_VALUE;
        for(int i=0;i<n-1;i++){
            diff = Math.min(diff,arr[i+1]-arr[i]);
        }
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i] == diff){
                res.add(Arrays.asList(arr[i],arr[i+1]));
            }
        }
        return res;
    }
}
