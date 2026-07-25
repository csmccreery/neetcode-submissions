class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int first_place = -1; 
        int first_score = 0;
        int second_place = -1; 
        int second_score = 0;

        for (const auto& num : nums) {
            if (num == first_place) {
                first_score++;
            } else if (num == second_place) {
                second_score++;
            } else if (first_score == 0) {
                first_place = num;
                first_score = 1;
            } else if (second_score == 0) {
                second_place = num;
                second_score = 1;
            } else {
                first_score--; second_score--;
            }
        }

        first_score = second_score = 0;
        for (const auto& num : nums) {
            if (num == first_place) first_score++;
            else if (num == second_place) second_score++;
        }

        vector<int> result;
        if (first_score > nums.size() / 3) result.push_back(first_place);
        if (second_score > nums.size() / 3) result.push_back(second_place);

        return result;
    }
};