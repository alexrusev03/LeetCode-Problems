int compare(const void* a, const void* b){
   int int_a = * ((int*)a);
   int int_b = * ((int*)b);
   return (int_a > int_b) - (int_a < int_b);
}
bool helper(int* position, int positionSize, int m, int d){
    int prevpos = position[0];
    m--;
    for(int i=1; i<positionSize; i++){
        if(position[i]-prevpos >= d){
            m--;
            prevpos = position[i];
        }
        if(m==0){
            return true;
        }
    }
    return false;
}
int maxDistance(int* position, int positionSize, int m){
    qsort(position, positionSize, sizeof(int), compare);
    int l = 1;
    int r = position[positionSize-1] - position[0];
    int mid = 0;
    while(l<=r){
        mid = (l+r)/2;
        if(helper(position,positionSize,m,mid)==true){
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    return r;
}
