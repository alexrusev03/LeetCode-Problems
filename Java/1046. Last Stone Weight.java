class Solution {
    public int lastStoneWeight(int[] stones) {
        PriorityQueue<Integer> pq = new PriorityQueue<>(Comparator.reverseOrder());
        for(int i=0;i<stones.length;i++){
            pq.add(stones[i]);
        }
        while(pq.size()!=1){
            int i = pq.poll();
            int j = pq.poll();
            pq.add(i - j);
        }
        return pq.poll();
    }
}
