/*
 Problem: Validate Coupons
 Platform: LeetCode
 Difficulty: Medium

 Approach:
 - Map each valid business line to a priority value.
 - Iterate through all coupons and filter out invalid ones based on:
   1. Active status
   2. Valid business line
   3. Non-empty and valid coupon code
 - Store valid coupons as (business priority, coupon code).
 - Sort coupons by business priority.
 - Extract and return the sorted coupon codes.

 Time Complexity:
 - O(n * k + n log n)
   where n = number of coupons, k = length of coupon code.

 Space Complexity:
 - O(n)

 Key Learning:
 - Validating input carefully before processing avoids unnecessary work.
 - Using a mapped priority simplifies custom sorting logic.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> validateCoupons(vector<string>& code,
                                   vector<string>& businessLine,
                                   vector<bool>& isActive) {

        int n = code.size();

        unordered_map<string, int> businessPriority;
        businessPriority["electronics"] = 1;
        businessPriority["grocery"]     = 2;
        businessPriority["pharmacy"]    = 3;
        businessPriority["restaurant"]  = 4;

        vector<pair<int, string>> validCoupons;

        for (int i = 0; i < n; i++) {

            if (!isActive[i]) continue;

            if (businessPriority.find(businessLine[i]) == businessPriority.end())
                continue;

            if (code[i].empty()) continue;

            bool isValidCode = true;
            for (char c : code[i]) {
                if (!isalnum(c) && c != '_') {
                    isValidCode = false;
                    break;
                }
            }

            if (!isValidCode) continue;

            validCoupons.push_back({businessPriority[businessLine[i]], code[i]});
        }

        sort(validCoupons.begin(), validCoupons.end());

        vector<string> result;
        for (auto &p : validCoupons) {
            result.push_back(p.second);
        }

        return result;
    }
};
