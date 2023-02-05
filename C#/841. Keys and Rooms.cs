public class Solution {
    public void sol(int i, IList<IList<int>> rooms, IList<bool> visited){
        visited[i]=true;
        foreach(var key in rooms[i]){
            if(visited[key]==false){
                sol(key, rooms, visited);
            }
        }
    }
    
    public bool CanVisitAllRooms(IList<IList<int>> rooms) {
        var visited = new bool[rooms.Count];
        
        sol(0, rooms, visited);
        
        foreach(var i in visited){
            if(i==false) return false;
        }
        return true;        
    }
}
