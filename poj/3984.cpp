#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<stack>
#include<queue>
#include<cstdio>
#include<string>
#include<cstring>
#include<cmath>
#include<complex>
#include<sstream>
#include<map>
#include<set>
#define DEBUG(x) cout<<"line"<<__LINE__<<":"<<#x" == "<<x<<endl
#define REP(i,n) for(int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(),(x).end()
#define INF 1000000
using namespace std;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
typedef long long ll;
typedef pair<int,int> P;

int maze[5][5];
bool flag_maze[5][5];
P route[5][5];
vector<P> r;
queue<P> que;
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
///////////////////////////////////////////////////////////////
void bfs(int x,int y){
    flag_maze[x][y] =true;
    if(maze[x][y] ==1){
        //      r.pop_back();
        return;
    }
    if(x==4&&y==4){
//        cout<<"test"<<endl;
        return;
    }
    
    for(int i = 0 ;i<4;i++){
        P temp(x+dx[i],y+dy[i]);
        if(!flag_maze[temp.first][temp.second]&&0<=temp.first&&temp.first<=4&&0<=temp.second&&temp.second<=4){
//            cout<<"pre "<<x<<" "<<y<<endl;
            //          cout<<temp.first<<" "<<temp.second<<endl;
            //      r.push_back(make_pair(temp.first,temp.second));
            que.push(temp);
            route[temp.first][temp.second] = make_pair(x,y);
            
        }
    }
    while(!que.empty()){
        P temp = que.front();
        que.pop();
        if(0<=temp.first&&temp.first<5&&0<=temp.second&&temp.second<5){
//            cout<<"pop"<<temp.first<<","<<temp.second<<endl;
            bfs(temp.first,temp.second);
        }
    }
}


int main(){
    for(int i =0 ;i< 5;i++){
        for(int j =0 ; j<5;j++){
            flag_maze[i][j] = false;
            route[i][j] = make_pair(0,0);
            cin>>maze[i][j];
        }
    }
    bfs(0,0);
//        cout<<"("<<r[i].first<<","<<r[i].second<<")"<<endl;

    // REP(i,5){
    //     puts("");
    //     REP(j,5){
    //     cout<<route[i][j].first<<route[i][j].second<<" ";;
    //     }
    // }
    
    int i=4;
    int j =4;

//    cout<<"test"<<route[2][4].first<<" "<<route[2][4].second<<endl;
    while(1){
//        cout<<i<<" "<<j<<endl;
        r.push_back(make_pair(i,j));
        int temp_x =route[i][j].first;
        int temp_y=route[i][j].second;
        i = temp_x;
        j=temp_y;
        if(i == 0&&j==0) {
            r.push_back(make_pair(0,0));
            break;
        }
        
    }
    
    for(int z = (int)r.size()-1;0<=z;z--){
        cout<<"("<<r[z].first<<", "<<r[z].second<<")"<<endl;
    }
    return 0;
}

