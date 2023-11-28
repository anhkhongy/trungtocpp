#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define N 9
bool isValid(set<pair<int, int>> visited, pair<int, int> p){
	return (p.first >= 0) && (p.second < N) && (p.first >= 0) && (p.second < N) && (visited.find(p) == visited.end()); 
}
void printPaths(list<pair<int, int>> path){
	for (auto it = path.begin(); it != path.end(); it++){
		cout << "(" << it -> first << ", " << it -> second << " -> ";
	}
	cout << "MID" << endl;
}
int row[] = {-1, 1, 0, 0};
int col[] = { 0, 0, -1, 1};
int _row[] = { 0, 0, N-1, N-1};
int _col[] = { 0, N-1, 0, N-1};
void findPathsUtil(int maze[N][N], set<pair<int, int>> &visited, list<pair<int, int>> &path, pair<int, int> &cur){
	if(cur.first == N / 2 && cur.second == N / 2){
		printPaths(path);
		return;
	}
	for (int i = 0; i < 4; i++){
		int n = maze[cur.first][cur.second];
		int x = cur.first + row[i] * n;
		int y = cur.second + col[i] * n; 
		pair<int, int> next = make_pair(x, y);
		if (isValid(visited, next))
        {
            // mark cell as visited
            visited.insert(next);
 
            // add cell to current path
            path.push_back(next);
 
            // recurse for next cell
            findPathsUtil(maze, visited, path, next);
 
            // backtrack
            path.pop_back();
             
            // remove cell from current path
            visited.erase(next);
        }
	}
}
void findPaths(int maze[N][N]){
	set<pair<int, int>> visited;
	list<pair<int, int>> path;
	for (int i = 0; i < 4; i++){
		int x = _row[i];
		int y = _col[i];
		pair<int, int> next  = make_pair(x, y);
		visited.insert(next);
		path.push_back(next);
		findPathsUtil(maze, visited, path, next);
		path.pop_back();
		visited.erase(next);
		
	}
}
int main(int argc, char** argv) {
	int maze[N][N] =
    {
        { 3, 5, 4, 4, 7, 3, 4, 6, 3 },
        { 6, 7, 5, 6, 6, 2, 6, 6, 2 },
        { 3, 3, 4, 3, 2, 5, 4, 7, 2 },
        { 6, 5, 5, 1, 2, 3, 6, 5, 6 },
        { 3, 3, 4, 3, 0, 1, 4, 3, 4 },
        { 3, 5, 4, 3, 2, 2, 3, 3, 5 },
        { 3, 5, 4, 3, 2, 6, 4, 4, 3 },
        { 3, 5, 1, 3, 7, 5, 3, 6, 4 },
        { 6, 2, 4, 3, 4, 5, 4, 5, 1 }
    };
 
    findPaths(maze);
	return 0;
}
