class Solution {
    public void sol(int i, List<List<Integer>> rooms, boolean[] visited){
        visited[i]=true;
        for(int key: rooms.get(i)){
            if(visited[key]==false){
                sol(key, rooms, visited);
            }
        }
    }
    
    public boolean canVisitAllRooms(List<List<Integer>> rooms) {
        boolean[] visited = new boolean[rooms.size()];
        
        sol(0, rooms, visited);
        
        for(boolean i:visited){
            if(i==false) return false;
        }
        return true;
    }
}
