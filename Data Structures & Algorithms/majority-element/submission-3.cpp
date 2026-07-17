class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0, count = 0;

        /* Implements the Boyer-Moore voting algorithm */
        for (const auto& num : nums) {
            if (count == 0) 
                candidate = num;

            /* 
             * Needlessly fancy but here's what's happening 
             * The algorithm requires that there is at least one element with >= L/2 frequency
             * every time a the "vote count" hits 0 a new candidate is selected. Any time that 
             * candidate is seen it gets a "vote". In this way whatever candidate has > L/2 occurrences will
             * naturally have > 0 count at the end.
             */
            count += (num == candidate) ? 1 : -1;
        }

        return candidate;
    }
};