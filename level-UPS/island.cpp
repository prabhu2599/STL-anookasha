#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int state[100][100];
int a[100][100];
int isValid(int x, int y);
void bfs(int c, int y);
int n,m;
/*
input :
4 4                                                                                                                                     
1 1 0 0                                                                                                                                 
0 0 1 1                                                                                                                                 
1 0 0 0                                                                                                                                 
1 1 1 1

*/
int main() {
    cin>>n>>m;
    for (int i = 0; i < n ; i++){
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int count = 0; // ye hai sirf no of distinct islands ke lie
    for (int i = 0; i < n ; i++){
        for(int j = 0; j < m; j++) {
            if(state[i][j] == 0 && a[i][j] == 1) {
                bfs(i,j);
                count++;
            }
        }
    }
    
    cout<<count<<endl;
    
    return 69;
}

void bfs(int x, int y) {
    queue<pair<int,int>> q;
    pair<int,int> p;

    state[x][y] = 1;
    q.push(make_pair(x,y));

    while(!q.empty()) {
      p = q.front();
      q.pop();

      int curX = p.first;
      int curY = p.second;

      if(isValid(curX-1,curY) && a[curX-1][curY] == 1 && state[curX-1][curY] == 0) {
        state[curX - 1][curY] = 1;
        q.push(make_pair(curX - 1, curY));
      }
      if (isValid(curX+1, curY) && a[curX+1][curY] == 1 && state[curX+1][curY] == 0)
      {
        state[curX + 1][curY] = 1;
        q.push(make_pair(curX + 1, curY));
      }
      if (isValid(curX, curY-1) && a[curX][curY-1] == 1 && state[curX][curY-1] == 0)
      {
        state[curX][curY - 1] = 1;
        q.push(make_pair(curX, curY - 1));
      }
      if (isValid(curX, curY+1) && a[curX][curY+1] == 1 && state[curX][curY+1] == 0)
      {
        state[curX][curY + 1] = 1;
        q.push(make_pair(curX, curY + 1));
      }
    }
}

int isValid(int x, int y) {
  if(x < 0 || x >= n || y < 0 || y >= m){
    return false;
  }
  else
    return true;
}
