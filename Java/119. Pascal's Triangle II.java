class Solution {
    public List<Integer> getRow(int rowIndex) {
        List<Integer> arr = new ArrayList<>();
        for (int i = 0; i <= rowIndex; i++) {
            arr.add(0,1);
            for(int j = 1; j < i; j ++) {
                arr.set(j, arr.get(j) + arr.get(j + 1));
            }
        }
        return arr;
    }
}
