#include <iostream>
#include <string>
#include <vector>
using namespace std;
//暴力破解
class Solution {
    public:
        int maxArea(vector<int>& height) {
            int i=0,j=0;
            int res=0;
            while (i<height.size()) {
                while (j<height.size()) {
                   
                    int x=height[i];
                    int y=height[j];
                    
                    if(i<j && height[i]<=height[j] && height[i]*(j-i)>res){
                        res=height[i]*(j-i);
                    }
                    if (i<j && height[j]<height[i] && height[j]*(j-i)>res) {
                        res=height[j]*(j-i);
                    }
                    j++;
                }
                i++;
                j=0;
            }
            return res;
        }
    };
//双指针
class Solution1 {
    public:
    int maxArea(vector<int>& height) {
        int n=0;
        int m=height.size()-1;
        int res=0;
        while (n<m) {
            int current_height = min(height[n], height[m]);
            if (current_height*(m-n)>res){
                res=current_height*(m-n);
            }
            if (n<m && height[n]<height[m] ) {
                n++;
            }
            else {
            m--;
            }
        }
        return res;
    }
    };

    
int main(){
    Solution1 sol;
    vector<int> a;
    a.push_back(1);//0
    a.push_back(8);//1
    a.push_back(6);//2
    a.push_back(2);//3
    a.push_back(5);//4
    a.push_back(4);//5
    a.push_back(8);//6
    a.push_back(3);//7
    a.push_back(7);//8
    cout << sol.maxArea(a);
}