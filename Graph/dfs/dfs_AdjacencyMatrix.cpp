#include <iostream>
#include <stdio.h>

using namespace std;
int map[50][50], ch[30], cnt=0, n;
void dfs(int v){
    int i;
    if(v==n){
        cnt++;
    }
    else{
        for(i=1;i<=n;i++){
            if(map[v][i]==1 && ch[i]==0){
                ch[i]=1;
                dfs(i);
                ch[i]=0;
            }
        }
    }
}
int main()
{
    //freopen("input.txt", "rt", stdin);
    int m, i, a, b;
    scanf("%d %d", &n, &m);
    for(i=1;i<=m;i++){
        scanf("%d %d", &a, &b);
        map[a][b]=1;
    }
    ch[1]=1;
    dfs(1);
    return 0;
}
