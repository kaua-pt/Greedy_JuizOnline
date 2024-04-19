#include <bits/stdc++.h>

using namespace std;

// knapsack + minimun delay

class Solution
{
public:
    int findMaximizedCapital(int k, int w, vector<int> &profits, vector<int> &capital)
    {
        vector<pair<int, int>> v;
        priority_queue<int> pq;
        int n = profits.size();
        // n
        for (int i = 0; i < profits.size(); i++)
            v.push_back({capital[i], profits[i]});

        // ordena vetor
        sort(v.begin(), v.end());
        int index = 0;
        while (k--)
        {
            while (index < n && v[index].first <= w)
                pq.push(v[index++].second);

            if (pq.empty())
                break;

            w += pq.top();
            pq.pop();
        }
        return w;
    }
};