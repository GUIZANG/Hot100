#include <algorithm>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums){
        int res=0;int ans=0;
        unordered_set<int> set(nums.begin(),nums.end());
        for(int num:set){
            if(!set.count(num-1)){
                int current=num;
                ans=1;
                while(set.count(current+1)){
                    current++;
                    ans++;
                }
                res=max(res,ans);
            }
            else continue;
        }
    return res;
}
};
