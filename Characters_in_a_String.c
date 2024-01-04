#include<stdio.h>
int main(){
    char s[1000];
    int n=0;
    scanf("%[^
]s",&s);
    for(int i=0;s[i]!=0;i++){
        n++;
    }
    printf("%d",n);
}