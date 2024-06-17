#include <stdio.h>

void main(){
    int n,i,ch=0;
    printf("Enter no. of elements in the array and then enter those numbers\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("%d:",i+1);
        scanf("%d,",&arr[i]);
    }
    while(ch!=6){
        printf("Enter your choice \n");
        printf(" 1 - The sum of all elements \n 2 - The largest element \n 3 - The smallest element \n");
        printf(" 4 - The average of all elements\n 5 - Display the array in reverse order\n 6 - Exit\n");
        scanf("%d",&ch);
        if(ch==1){
            int sum=0;
            for(i=0;i<n;i++){
                sum=sum+arr[i];
            }
            printf("The sum of all the elements is %d \n",sum);
        }
        else if(ch==2){
            int max=arr[0];
            for(i=0;i<n;i++){
                if(max<arr[i]){
                    max=arr[i];
                }
            }
            printf("The maximum among all the elements is %d \n",max);
        }
        else if(ch==3){
            int min=arr[0];
            for(i=0;i<n;i++){
                if(min>arr[i]){
                    min=arr[i];
                }
            }
            printf("The minimum among all the elements is %d  \n",min);
        }
        else if(ch==4){
            float avg;
            float sum=0;
            for(i=0;i<n;i++){
                sum=sum+arr[i];
            }
            avg=sum/n;
            printf("The average of all the elements is %f \n",avg);
        }
        else if(ch==5){
            int rev[n];
            for(i=0;i<n;i++){
                rev[n-i-1]=arr[i];
            }
            for(i=0;i<n;i++){
                printf("%d  ",rev[i]);
            }
            printf("\n");
        }
        else if(ch==6);
        else{
            printf("Enter valid choice \n");
        }
    }
}