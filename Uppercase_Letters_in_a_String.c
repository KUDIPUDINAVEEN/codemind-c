#include<stdio.h>
int main(){
    char s[1000];
    scanf("%[^
]s",s);
    int i,c=0;
    for(i=0;s[i]!=0;i++){
        if(s[i]>='A'&&s[i]<='Z'){
            c++;
        }
    }
    printf("%d",c);
}