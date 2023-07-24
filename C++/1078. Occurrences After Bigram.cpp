class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> res;
        vector<string> arr;
        string word = "";
        for(int i=0; i<text.size(); i++){
            if(text[i]!=' '){
                word+=text[i];
            }
            else{
                arr.push_back(word);
                word="";
            }
        }
        arr.push_back(word);
        for(int i=0; i<arr.size(); i++){ 
            if(i+2 < arr.size()){
                if(arr[i]==first && arr[i+1]==second){
                    res.push_back(arr[i+2]);
                }
            }
        }
        return res;
    }
};
