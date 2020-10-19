
#include <iostream>
#include <stdio.h>
using namespace std;

int n, ch[11];
int dfs(int v){
    if(L == n+1) {
        for(int i=0; i<n; i++){
            if(ch[i]==1) printf("%d", i);
        }
    }
    else{
        ch[L] = 1;
        dfs(L+1);
        ch[L] = 0;
        dfs(L+1); 
    }
}
int main()
{
    freopen("input.txt", "rt", stdin);
    scanf("%d", &n);
    dfs(1);
    return 0;
}
