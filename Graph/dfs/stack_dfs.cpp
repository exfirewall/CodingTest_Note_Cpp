#include <iostream>
#include <stdio.h>
using namespace std;

int dfs(int v){
    if(v>7) return;
    else{
        printf("%d", v); // 전위 순회 1 2 4 5 3 6 7
        dfs(v*2);
        printf("%d", v); // 중위 순회 4 2 5 1 6 3 7
        dfs(v*2+1); 
        printf("%d", v); // 후위 순회 4 5 2 6 7 3 1
    }
}
int main()
{
    freopen("input.txt", "rt", stdin);
    dfs(1);
    return 0;
}
