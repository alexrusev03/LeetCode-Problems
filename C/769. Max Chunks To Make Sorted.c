int maxChunksToSorted(int* arr, int arrSize){
    int res=0;
    int m=0;
    for(int i=0; i<arrSize; i++){
        m=fmax(m,arr[i]);
        if(m==i){
            res++;
        }
    }
    return res;
}
