#include <iostream>
#include <stdio.h>

using namespace std;

int target = 12;
int array[4] = { 2, 4, 6, 8 };
int path[11];
int result = 0;

int dfs(int L, int sum){
    if(sum > target) return;
    if(L==4){
        if(sum == target) {
            result++;
            // path 출력
            for(int i=0; i<L; i++){
                printf("%d ", path[i]);       
            }
            puts("");
        }
    }
    else{
        path[L] = a[L]; // path 저장
        dfs(L+1,sum + array[L]);
        path[L] = -a[L];
        dfs(L+1,sum - array[L]);
        path[L] = 0;
        dfs(L+1,sum);
    }
}
int main()
{
    dfs(0, 0);
    printf("%d", result);
}
