#include<stdio.h>

int main(){
    int a,b,num;
    printf("Enter size of array: ");
    scanf("%d",&a);
     printf("Enter size of array: ");
    scanf("%d",&b);
    printf("Enter elements in array: \n");
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
        printf("a[%d][%d]=",i,j);
        scanf("%d",&num);}
            arr[a][b]=num;
    }


            return 0;
                
}
