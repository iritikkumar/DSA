int* merge(int *a, int n1, int *b, int n2){
    int i,j,k,n=n1+n2;
    int *c = (int*)malloc(sizeof(int)*(n));
    for(i=0,j=0,k=0;k<n;k++){
        if(i==n1 || j==n2)
            break;
        else if(a[i]<b[j]){
            c[k] = a[i];
            i++;
        }
        else{
            c[k] = b[j];
            j++;
        }
    }
    for(;k<n;k++){
        if(i==n1){
            c[k] = b[j];
            j++;
        }
        else{
            c[k] = a[i];
            i++;
        }
    }
    return c;
}