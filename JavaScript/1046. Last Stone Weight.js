/**
 * @param {number[]} stones
 * @return {number}
 */
var lastStoneWeight = function(stones) {
    var pq = new MaxPriorityQueue();
    for(var i=0;i<stones.length;i++){
        pq.enqueue(stones[i]);
    }
    while(pq.size()!=1){
        var i = pq.dequeue().element;
        var j = pq.dequeue().element;
        pq.enqueue(i - j);
    }
    return pq.front().element;
};
