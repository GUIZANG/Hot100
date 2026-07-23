#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k){
        int res=0;
        int prefix=0;
        unordered_map<int,int> map;
        map[0]=1;
        for(int i=0;i<nums.size();i++){
            prefix+=nums[i];
            if(map.find(prefix-k)!=map.end()){
                res+=map[prefix-k];
            }
            map[prefix]++;
        }
        return res;
    }
};
