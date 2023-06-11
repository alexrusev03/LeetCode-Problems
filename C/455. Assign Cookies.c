int compare(const void* a, const void* b) {
    return *(const int*) a > *(const int*) b;
}
int findContentChildren(int* g, int gSize, int* s, int sSize){
    int res = 0;
    int ch = 0;
    int co = 0;
    qsort(g, gSize, sizeof(int), compare);
    qsort(s, sSize, sizeof(int), compare);
    while(ch < gSize && co < sSize){
        if(s[co] >= g[ch]){
            res++;
            ch++;
        }
        co++;
    }
    return res;
}
