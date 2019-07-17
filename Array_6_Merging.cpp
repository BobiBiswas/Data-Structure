#include <stdio.h>
#include <iostream>
#define Sz 100000

using namespace std;

void PrintInt(int a[] , int n){
    for(int i = 0 ; i < n;i++)
        cout<<a[i]<<' ';
    cout<<endl;
}

void PrintChar(char ch[] , int n){
    for(int i = 0 ; i < n ; i++)
        cout<<ch[i]<<' ';
    cout<<endl;
}

int main(){
    int i , j , n , m,k,l;
    //a)
    int a[Sz];//Sz is macro written in top = 10^5
    printf("Enter the number of element in first array and elements\n");
    cin>>n;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the number of element in Second array and elements\n");
    cin>>m;
    int size = n + m;

    for(i=n;i<size;i++)
        scanf("%d",&a[i]);

    PrintInt(a,size);

    //b)
    char ch[Sz];//Same process as array do it yourself

    printf("Enter the number of character in first array and elements\n");
    cin>>n;
    for(i=0;i<n;i++){
        scanf("%c",&ch[i]);
    }
    printf("Enter the number of character in Second array and elements\n");
    cin>>m;
    int tsize = n + m;

    for(i=n;i<tsize;i++){
        scanf("%c",&ch[i]);
    }
    PrintChar(ch,tsize);
    return 0;
}
