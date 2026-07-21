#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> queryCounts(vector<int>& nums,vector<int>& queries){
        vector<int> res;
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        for(int i=0;i<queries.size();i++){
            res.push_back(map[queries[i]]);
        }
        return res;
    }
};
