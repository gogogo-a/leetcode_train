#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <memory>
#include <numeric>
#include <queue>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <cctype> 
using namespace std;
//队列
class RecentCounter {
    queue<int >q;
    public:
        RecentCounter() {
            
        }
        
        int ping(int t) {
            q.push(t);
            while (q.front()<t-3000) {
                 q.pop();
            }
            return q.size();
        }
    };
    
    /**
     * Your RecentCounter object will be instantiated and called as such:
     * RecentCounter* obj = new RecentCounter();
     * int param_1 = obj->ping(t);
     */