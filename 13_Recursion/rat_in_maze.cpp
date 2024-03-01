#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isSafe(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>> m)
{

    if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}


void solve(vector<string> &ans, vector<vector<int>> m, int n, int x, int y, vector<vector<int>> visited, string path)
{

// base case
    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
        return;
    }
     visited[x][y]=1;
    // 4 choices d l u r

    // down
    int newx = x + 1;
    int newy = y;
    if (isSafe(newx, newy, n, visited, m))
    {
        path.push_back('D');
        solve(ans, m, n, newx, newy, visited, path);
        path.pop_back();
    }

    // left

     newx = x;
     newy = y-1;
    if (isSafe(newx, newy, n, visited, m))
    {
        path.push_back('L');
        solve(ans, m, n, newx, newy, visited, path);
        path.pop_back();
    }

    // up

     newx = x-1;
     newy = y;
    if (isSafe(newx, newy, n, visited, m))
    {
        path.push_back('U');
        solve(ans, m, n, newx, newy, visited, path);
        path.pop_back();
    }
    // right

     newx = x;
     newy = y + 1;
    if (isSafe(newx, newy, n, visited, m))
    {
        path.push_back('R');
        solve(ans, m, n, newx, newy, visited, path);
        path.pop_back();
    }
     visited[x][y]=0;

}

vector<string> findPath(vector<vector<int>> &m, int n)
{
    vector<string> ans;
    if (m[0][0] == 0)
        return ans;

    int srcx = 0;
    int srcy = 0;

    vector<vector<int>> visited = m;
    string path = "";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = 0;
        }
    }
    solve(ans, m, n, srcx, srcy, visited, path);
    sort(ans.begin(), ans.end());
    return ans;
}
int main()
{
    vector<vector<int>> matrix = {{1, 1, 1, 0},
                                  {1, 0, 1, 0},
                                  {1, 1, 1, 1}};

int n = matrix.size();
vector<string> ans = findPath(matrix, n);
for (auto x : ans){
    cout << x << endl;
}

    return 0;
}