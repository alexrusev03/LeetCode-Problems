class Solution {
public:
    void sol(int i, vector<vector<int>> & rooms, vector<bool> &visited){
        visited[i]=true;
        for(auto key: rooms[i]){
            if(visited[key]==false){
                sol(key, rooms, visited);
            }
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> visited(rooms.size(), 0);
        
        sol(0, rooms, visited);
        
        for(auto i:visited){
            if(i==false) return false;
        }
        return true;        
    }
};
