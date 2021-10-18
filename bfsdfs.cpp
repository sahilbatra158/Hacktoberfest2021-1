#include<bits/stdc++.h>
using namespace std;

void dfs(int graph[][8] , int start , int n) {
    
    static int visited[8] = {0};

    if(visited[start] == 0) {
        visited[start] = 1;
        cout << start << " ";
        for(int v = 1 ; v <= n ; v++) {
            if(graph[start][v] == 1 && visited[v] == 0) {
                dfs(graph , v , n);
            }
        }
    }


}

void bfs(int graph[][8] , int start , int n) {
    queue<int> q;

    int i = start;
    int visited[8] = {0};

    cout << i << " ";
    visited[i] = 1;
    q.push(i);

    while(!q.empty()) {
        int u = q.front();
        q.pop();
        for(int v = 1 ; v <= n ; v++) {
            if(graph[u][v] == 1 && visited[v] == 0) {
                visited[v] = 1;
                cout << v << " ";
                q.push(v);
            }
        }

    }

}


int main() {
    int G[8][8]= {
        {0 , 0 , 0 , 0 , 0 , 0 , 0 , 0} , 
        {0 , 0 , 1 , 1 , 1 , 0 , 0 , 0} , 
        {0 , 1 , 0 , 1 , 0 , 0 , 0 , 0} , 
        {0 , 1 , 1 , 0 , 1 , 1 , 0 , 0} , 
        {0 , 1 , 0 , 1 , 0 , 1 , 0 , 0} , 
        {0 , 0 , 0 , 1 , 1 , 0 , 1 , 1} , 
        {0 , 0 , 0 , 0 , 0 , 1 , 0 , 0} ,
        {0 , 0 , 0 , 0 , 0 , 1 , 0 , 0}
    };

    dfs(G , 5 , 8);
    return 0;
}