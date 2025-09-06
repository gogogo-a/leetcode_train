#include <algorithm>
#include <iostream>
#include <memory>
#include <numeric>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;
//暴力破解
class Solution {
    public:
    bool equal(int row, int col, vector<vector<int> >& grid) {
        int n = grid.size();
        for (int i = 0; i < n; i++) {
            if (grid[row][i] != grid[i][col]) {
                return false;
            }
        }
        return true;
    }
    int equalPairs(vector<vector<int> >& grid) {
        int res = 0, n = grid.size();
        for (int row = 0; row < n; row++) {
            for (int col = 0; col < n; col++) {
                if (equal(row, col, grid)) {
                    res++;
                }
            }
        }
        return res;
    }

    };