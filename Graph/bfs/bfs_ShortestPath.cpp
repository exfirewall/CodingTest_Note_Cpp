
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stdio.h>

using namespace std;

int ch[30], dis[30];
int main()
{
    int n, m, a, b, x;
    vector<int> map[30];
    queue<int> q;
    
    for(int i=0; i<=m; i++){
        scanf("%d", &n, &m);
        map[a].push_back(b);
    }
    
    q.push(1);
    ch[1] = 1;
    while(!q.empty()){
        x = q.front();
        q.pop();
        for(int i=0; i<map[x].size(); i++){
            if(ch[map[x][i]==0){
                ch[map[x][i]]=1;
                q.push(map[x][i]);
                dis[map[x][i]]=map[x]+1;
            }
        }
    }
}
