#include<stdio.h>
int main(){
    int arr[5],i,sum;
    float avg;
    printf("enter the 5 element=");
    //scanf("%d",&arr[i]);
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    
    avg=sum/5.0;
    printf("avg of element=%.2f",avg);
    return 0;
}