#include<bits/stdc++.h>
using namespace std;
#define ll long long

////////////////////// Fractional Knapsack /////////////////////

/////// Comparison function to sort items

bool cmp(pair<int , int> a , pair<int , int> b) {
    double r1 = (double)a.first / (double)a.second;
    double r2 = (double)b.first / (double)b.second;

    return r1 > r2;
}

////// Greedy function to solve the problem

double fractionalKnapsack(int W , vector<pair<int , int>> &v , int n) {
    // Sort the vector
    sort(v.begin() , v.end() , cmp);

    int currentWeight = 0;
    double profit = 0.0;

    for(int i = 0 ; i < n ; i++) {
        // Check if adding items lead to overflow
        if(currentWeight + v[i].second <= W) {
            currentWeight += v[i].second;
            profit += v[i].first;
        } else {
            int remain = W - currentWeight;
            profit += v[i].first * ((double)remain / (double)v[i].second);
            break;
        }
    }

    return profit;
}

int main() {
    int W = 15;
    vector<pair<int , int>> v {make_pair(10 , 2) , make_pair(5 ,3) , make_pair
    (15 , 5) , make_pair(7 , 7) , make_pair(6 , 1) , make_pair(18 , 4) , make_pair(3 , 1)};


    cout << "The max profit is: " << fractionalKnapsack(W , v , v.size()) << endl;
    return 0;

}