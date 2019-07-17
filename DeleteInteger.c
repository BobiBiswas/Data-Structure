#include<stdio.h>

int main(){
    int num[20];
    int m,n,i;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    //for(i=0;i<n;i++){
      //  printf("%d ",num[i]);
    //}

    printf("\nDeleting position number : ");
    scanf("%d",&m);
    for(i=m-1;i<n-1;i++){
        num[i]=num[i+1];
    }
    for(i=0;i<n-1;i++){
        printf("%d ",num[i]);
    }


}
