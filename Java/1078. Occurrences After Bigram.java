class Solution {
    public String[] findOcurrences(String text, String first, String second) {
        String arr[] = text.split(" ");
        ArrayList<String> l = new ArrayList<>();
        for(int i=0; i<arr.length; i++){ 
            if(i+2 < arr.length){
                if(arr[i].equals(first) && arr[i+1].equals(second)){
                    l.add(arr[i+2]);
                }
            }
        }
        String res[] = new String[l.size()];
        for(int j=0;j<l.size();j++){
            res[j]=l.get(j);
        }
        return res;
    }
}
