#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int l = 0, r = height.size() - 1, maxA = 0;

        while (l < r)
        {
            int currentArea = min(height[l], height[r]) * (r - l);
            maxA = max(maxA, currentArea);
            if (height[l] < height[r])
                l++;
            else
                r--;
        }
        return maxA;
    }
};