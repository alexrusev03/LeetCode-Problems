class Solution {
    public String removeOccurrences(String s, String part) {
        StringBuilder sb = new StringBuilder(s);
        int i = sb.indexOf(part);
        while(i != -1){
            sb.delete(i,i + part.length());
            i = sb.indexOf(part);
        }
        return sb.toString();
    }
}
