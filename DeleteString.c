#include<stdio.h>

int main(){
    int i,j;
    int p;
    char name[10][10]={"fahim","faysal","karim","munna","nirob"};
    char temp[200];





    for(i=0;i<5;i++){
            if (strcmp(name[i],"nirob")==0){
                strcpy(name[i],name[i+1]);
            }

    }
     for(i=0;i<4;i++){
        printf("%s\n",name[i]);
    }



    return 0;

}
