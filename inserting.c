#include<stdio.h>

int main(){
    int i,j;
    int num[15] = {1,3,7,11,32,50,60,67,75,86,95,99};//12
    printf("*** Sorted Array ***\n");
    for(i=0;i<12;i++){
        printf("%d ",num[i]);
    }

    printf("\n*** After inserting 54 ***\n");
    for(i=0;i<12;i++){
        if(num[i]<54 && num[i+1]>54){
            for(j=12; j>i; j--){
                num[j+1] = num[j];
            }
            num[i+1] = 54;
            //break;
        }
    }
    for(i=0;i<13;i++){
        printf("%d ",num[i]);
    }
    printf("\n*** After inserting 99 to 5th position ***\n");
    for(i=12;i>=4;i--){
        num[i+1] = num[i];
    }
    num[4] = 99;
    for(i=0;i<13;i++){
        printf("%d ",num[i]);
    }
    //string part


    char name[10][10]={"abdullah","rabbi","alamin","rifat","shanto","salam"};
    char temp[200];
    for(i=0;i<6;i++){
        for(j=i;j<6;j++){
            if(strcmp(name[i],name[j])>0){
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }


    //Inserting rahim to this sorted array of string
    for(int i=0;i<11;i++){
        if(strcmp(name[i],"rahim")<0 && strcmp(name[i+1],"rahim")>0){
                for(int j = 6;j>i;j--){
                    strcpy(name[j+1],name[j]);
                }
                strcpy(name[i+1],"rahim");
                break;
        }
    }
    printf("\nInserted rahim in a sorted list.\n");
    for(i=0;i<7;i++){
        printf("%s\n",name[i]);
    }



    //inserting karim to fifth position
    for(int i=8;i>=4;i--){
        strcpy(name[i+1],name[i]);
    }
    strcpy(name[4],"karim");
        printf("\nInserted karim to fifth place\n");
    for(i=0;i<8;i++){
        printf("%s\n",name[i]);
    }
}


