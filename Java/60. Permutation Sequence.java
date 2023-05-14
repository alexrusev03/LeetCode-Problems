class Solution {
    public String getPermutation(int n, int k) {
        String res = "";
        int f=1;
        List<Integer> l = new ArrayList<>();
        for(int i = 1; i<n; i++){
            f*=i;
            l.add(i);
        }
        l.add(n);
        k--;
        while(l.size()>0){
            res+=l.get(k/f);
            l.remove(k/f);
            k%=f;
            if(l.size()!=0){
                f/=l.size();
            }
        }
        return res;
    }
}
