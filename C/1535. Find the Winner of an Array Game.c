int getWinner(int* arr, int arrSize, int k){
    int c = 0;
    int max = 0;
    int res = arr[0];
    if(k > arrSize){
        for(int i = 0; i<arrSize; i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;
    }
    for(int i=1; i<arrSize; i++){
        if(c==k){
            break;
        }
        if(arr[i] > res){
            res = arr[i];
            c = 0;
        }
        c++;
    }
    return res;
}
