#include<stdio.h>

void main() {
    int b,n,i=99; 
    char c[17]="0123456789ABCDEF",result[100]; 
    printf("Decimal=? "); 
    scanf("%d",&n);
    printf("Base=? ");
    scanf("%d",&b); 
    
    // result[] 마지막 위치에 Null 문자 넣기 
    result[i]='\0'; // i=99 
    while(n!=0) { 
        result[--i]=c[n%b];
        // result[] <-- 나머지 
        n/=b; // 몫 
    } 
    printf("Answer is %s\n",&result[i]); 
}

