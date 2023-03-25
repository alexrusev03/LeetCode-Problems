public class Solution {
    public int LastStoneWeight(int[] stones) {
        var pq = new PriorityQueue<int, int>();
        for(int i=0;i<stones.Length;i++){
            pq.Enqueue(stones[i], int.MaxValue - stones[i]);
        }
        while(pq.Count!=1){
            int i = pq.Dequeue();
            int j = pq.Dequeue();
            pq.Enqueue(i - j, int.MaxValue - i + j);
        }
        return pq.Dequeue();
    }
}
