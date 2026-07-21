#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int,int> map;
    vector<int> res;
    for(int i=0;i<nums.size();i++){
        int add=target-nums[i];
        if(map.find(add)!=map.end()){
            res.push_back(map[add]);
            res.push_back(i);
            return res;
        }
        else map[nums[i]]=i;
    }
    return res;
}
};
