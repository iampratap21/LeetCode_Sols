class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> res;

        for(int i=0 ; i<nums.size() ; i++) {
            int num_to_find = target - nums[i];

            if(m.find(num_to_find) != m.end()) {
                res.push_back(m[num_to_find]);
                res.push_back(i);
                break;
            }

            m[nums[i]] = i;
        }

        return res;
    }
};