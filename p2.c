#include<stdio.h>
#include<limits.h>
int hourglassSum(int arr[6][6]){
    int max_sum=INT_MIN;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            int current_sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
             if(current_sum>max_sum){
                max_sum=current_sum;
             }
        }
    }
    return max_sum;
}
int main() {
    int arr[6][6];
    //printf("enter array elements");
        for(int i=0;i<6;i++){
            for(int j=0;j<6;j++){
                scanf("%d",&arr[i][j]);
            }
        }
    

    int result = hourglassSum(arr);
    printf("%d\n", result);

    return 0;
}
