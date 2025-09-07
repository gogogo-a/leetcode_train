#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <memory>
#include <numeric>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;
class Solution {
    public:
        vector<int> asteroidCollision(vector<int>& asteroids) {
            vector<int> stack;
            for (int a :asteroids) {
                while (!stack.empty()&&a<0&&stack.back()>0) {
                    int top=stack.back();
                    if (abs(a)>abs(top)) {
                         stack.pop_back();
                    }else if (abs(a)==abs(top)) {
                        stack.pop_back();
                        a=0;
                        break;
                    }else {
                        a=0;
                        break;
                       }
                    }
                    if (a!=0) {
                        stack.push_back(a);
                    }
                    
                }
            return stack;
            }
           
        };