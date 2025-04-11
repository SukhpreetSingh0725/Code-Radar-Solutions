int factorial(int n){
    int fact=1;
    return fact*(fact(n-1));
}
int factorialrange(int start,int end){
    int fact=1;
    if(start<0){
        printf("Invalid range");
    }
    else{
        for(int i=start, i<end,i++){
            printf(factorial(start));
            printf("\n");
        }
        
    }

}