class Solution {
public:
        bool containsDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> myMap;

    for (const int& num : nums) {
        if (myMap.count(num) > 0) { // if num is already in the map
            return true;
        }
        myMap[num] = 1;
    }

    return false;
    }

};
