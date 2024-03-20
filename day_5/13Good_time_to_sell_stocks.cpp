#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int open=prices[0],curr=0,max=0;
        for(int i=0;i<prices.size();i++)
        {
            curr=prices[i];
            if(curr-open>max)
            max=curr-open;
            if(curr-open<0)
            open=curr;
        }
        return max;

        
    }
};