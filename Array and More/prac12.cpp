//pair sum
#include<iostream>
#include<vector>
// #include <utility>
#include<algorithm>
using namespace std;

int main() {
    int num = 6;
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    vector<pair<int, int>> ans;  // Use a vector of pairs to store pairs of integers

    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] + arr[j] == num) {
                pair<int, int> p = make_pair(min(arr[i], arr[j]), max(arr[i], arr[j]));
                ans.push_back(p);
            }
        }
    }
    sort(ans.begin(),ans.end());
       for (const pair<int, int>& p : ans) {
        cout << "(" << p.first << ", " << p.second << ")" << endl;
    }

    return 0;
}
