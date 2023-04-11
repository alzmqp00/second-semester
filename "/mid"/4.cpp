#include <iostream>
#include <cmath>
using namespace std;

int sx, sy, ex, ey;
typedef struct {
    int x;
    int y;
} coodi;

void path(char**, int, int, int,int, int*, int[], coodi[], coodi**, int, int*);

int main() {
    
    int x = 0, y = 0;
    int state = 0;
;
    int min_step = 100;

    int a, b;
    cin >> a >> b;
 
    int count_map = 0, count_step[a*b] = { 0 };
    coodi path_temp[a*b];
    char** maze;
   maze = new char*[a];
    for (int i = 0; i < a; i++) {
    maze[i] = new char[b];
}
coodi **all;
all = new coodi*[a];
    for (int i = 0; i < a; i++) {
    all[i] = new coodi[b];
}
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

    //0 0 3 3
    path(maze, sx, sy, a,b, &count_map, count_step, path_temp, all, 0, &min_step);
    if (state != 1) {
        cout << "no path" << endl;
    }
    else {
        cout << "The shortest path is: " << min_step << endl;
        cout << "All shortest paths in map are shown below" << endl;

        for (int i = 0; i < count_map; i++) {
            if (min_step == count_step[i]) {
                cout << "Path: " << i + 1 << endl;
                for (int j = 0; j < count_step[i]; j++) {
                    cout << "(" << all[i][j].x << "," << all[i][j].y << ")->";
                }
                cout << endl;
            }
        }
    }
}
void path(char **map, int x, int y, int a,int b, int* count_map, int count_step[], coodi path_temp[], coodi **all, int len, int* min_step) {
    map[x][y] = '*';
    if (x == ex and y == ey) {

        path_temp[len].x = x;
        path_temp[len].y = y;
        len++;
        count_step[*count_map] = len;
        *count_map += 1;
       /*cout << "Path " << *count_map << ":\n";
        for (int i = 0; i < len; i++) {
            all[*count_map - 1][i].x = path_temp[i].x;
            all[*count_map - 1][i].y = path_temp[i].y;
           cout << "(" << all[*count_map - 1][i].x << "," << all[*count_map - 1][i].y << ")->";
        }*/ 
        map[ex][ey]='E';
        map[sx][sy]='S';
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
            cout <<map[i][j];
        }
        cout <<endl;
        }
        cout << "\n";
        if (*min_step > len) {
            *min_step = len;
        }
    }
    else {
        path_temp[len].x = x;
        path_temp[len].y = y;
        len++;
        //cout <<map[1][ 0]<<endl;
            if ((map[x][y + 1] == '0' or map[x ][y+1] =='E')and y + 1 < b) {
             //cout <<"y + 1"<<endl;
            path(map, x, y + 1, a,b, count_map, count_step, path_temp, all, len, min_step);
        }
        if ((map[x + 1][y] == '0' or map[x + 1][y] =='E')and x + 1 < a) {
          // cout <<"x + 1"<<endl;
            path(map, x + 1, y,  a,b, count_map, count_step, path_temp, all, len, min_step);
        }

        if ((map[x - 1][y]== '0' or map[x - 1][y] =='E')and x - 1 >= 0) {
            //cout <<"x - 1"<<endl;
           path(map, x - 1, y, a,b, count_map, count_step, path_temp, all, len, min_step);
        }
        if ((map[x][y - 1] == '0' or map[x][y - 1] =='E') and y - 1 >=0) {
             //cout <<"y - 1"<<endl;
            path(map, x, y - 1,  a,b, count_map, count_step, path_temp, all, len, min_step);
        }
    }
    map[x][y] = '0';
}
