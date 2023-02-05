/**
 * @param {number[][]} rooms
 * @return {boolean}
 */
var sol = function(i, rooms, visited){
    visited[i]=true;
    for(var key of rooms[i]){
        if(visited[key]==false){
            sol(key, rooms, visited);
        }
    }
}
    
var canVisitAllRooms = function(rooms) {
    var visited = new Array(rooms.length).fill(false);
    
    sol(0, rooms, visited);
    
    for(var i of visited){
        if(i==false) return false;
    }
    return true;        
};
