class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int i=0;i<stones.size();i++){
            pq.push(stones[i]);
        }
        while(pq.size()!=1){
            int i = pq.top();
            pq.pop();
            int j = pq.top();
            pq.pop();
            pq.push(i - j);
        }
        return pq.top();
    }
};
