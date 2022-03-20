class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i;
        int j;
        
        vector <int> result;
        for(i = 0; i < size(nums); i++){
            for(j = i + 1; j < size(nums); j++){
                if(nums[i] + nums[j] == target){
                    result.push_back(i);
                    result.push_back(j);
                    
                }
            }
        }
        return result;
    }
};
