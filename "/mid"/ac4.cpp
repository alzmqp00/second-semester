#include <iostream>
#include <cmath>
using namespace std;

int sx, sy, ex, ey;
typedef struct {
    int x;
    int y;
} coodi;

void path(char**, int, int, int,int, int*, int[], coodi[], coodi[][100], int, int*);

int main() {
    
    int x = 0, y = 0;
    int state = 0;
;
    int min_step = 1000;

    int a, b;
    cin >> a >> b;
 
    int count_map = 0, count_step[a*b] = { 0 };
    coodi path_temp[a*b];
    char** maze;
   maze = new char*[a];
    for (int i = 0; i < a; i++) {
    maze[i] = new char[b];
}
/*coodi **all;
all = new coodi*[a];
    for (int i = 0; i < a; i++) {
    all[i] = new coodi[b];
}*/
coodi all[1000][100];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> maze[i][j];
            if (maze[i][j] == 'S') {
                sx = i;
                sy = j;
            }
            else if (maze[i][j] == 'E') {
                ex = i;
                ey = j;
            }
        }
    }
    /*cout <<"this"<<endl;
     for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << maze[i][j];
           
        }
        cout <<endl;
    }*/

    //0 0 3 3
    path(maze, sx, sy, a,b, &count_map, count_step, path_temp, all, 0, &min_step);
   
     for (int i = 0; i < count_map; i++) {
            if (min_step == count_step[i]) {
               
                for (int j = 0; j < count_step[i]; j++) {
                    maze[all[i][j].x][all[i][j].y]='*';
                }
                break;
            }
     }
     maze[sx][sy]='S';
     maze[ex][ey]='E';
    for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
            cout <<maze[i][j];
        }
        cout <<endl;
    }
    cout << "Total " << min_step -1<<" steps."<<endl;
    return 0;

}
void path(char **map, int x, int y, int a,int b, int* count_map, int count_step[], coodi path_temp[], coodi all[][100], int len, int* min_step) {
    map[x][y] = '*';
 //  cout <<"("<<x<<","<<y<<")"<<endl;
    
   // cout <<x<<" "<<y<<endl;
    if (x == ex and y == ey) {
        
        map[ex][ey]='E';
        map[sx][sy]='S';
        path_temp[len].x = x;
        path_temp[len].y = y;
        len++;
        count_step[*count_map] = len;
        *count_map += 1;
     //  cout << *count_map << ":\n";
      //  cout << len << ":\n";
        for (int i = 0; i < len; i++) {
            
            all[*count_map - 1][i].x = path_temp[i].x;
            all[*count_map - 1][i].y = path_temp[i].y;
          //  cout <<all[*count_map - 1][i].x<<" "<<all[*count_map - 1][i].y<<endl;
            
          // cout << "(" << all[*count_map - 1][i].x << "," << all[*count_map - 1][i].y << ")->";
        }
    
        if (*min_step > len) {
            *min_step = len;
            
        }
    }
    else {
        path_temp[len].x = x;
        path_temp[len].y = y;
        len++;
        
          if ((x + 1 )< a)
        { if (((x + 1 )< a and map[x + 1][y] == '0' or map[x + 1][y] =='E')) {
          // cout <<((map[x+1][y + 1] == '0' or map[x ][y+1] =='E')and (y + 1) < b)<<endl;
           //cout <<"x+1"<<endl;
           //cout <<"("<<x<<","<<y<<")"<<endl;
           //cout <<"x:"<<x<<"y:"<<y<<endl;
           //cout <<map[x+1][y + 1]<<endl;
            path(map, x + 1, y,  a,b, count_map, count_step, path_temp, all, len, min_step);
            
        }}
        if ( (y + 1) < b){
        if ( (y + 1) < b and (map[x][y + 1] == '0' or map[x ][y+1] =='E')) {
             //cout <<"y + 1"<<endl;
             //cout <<"("<<x<<","<<y<<")"<<endl;
            path(map, x, y + 1, a,b, count_map, count_step, path_temp, all, len, min_step);
        }
        }
      
       
        
        if ((x - 1) >= 0){
        if ( (x - 1) >= 0 and (map[x - 1][y]== '0' or map[x - 1][y] =='E')) {
           // cout <<"x - 1"<<endl;
            //cout <<"("<<x<<","<<y<<")"<<endl;
           path(map, x - 1, y, a,b, count_map, count_step, path_temp, all, len, min_step);
        }
        }
        if  ((y - 1 )>=0 ){
        if  ((y - 1 )>=0 and (map[x][y - 1] == '0' or map[x][y - 1] =='E')) {
             //cout <<"y - 1"<<endl;
             //cout <<"("<<x<<","<<y<<")"<<endl;
            path(map, x, y - 1,  a,b, count_map, count_step, path_temp, all, len, min_step);
        }
        }
    }
    map[x][y] = '0';
}
