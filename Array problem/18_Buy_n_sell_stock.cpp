
#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& arr) {
    int minPrice = arr[0];
    int maxProfit = 0;

    for(int i = 1; i < arr.size(); i++) {
        minPrice = min(minPrice, arr[i]);          // best day to buy
        int profit = arr[i] - minPrice;            // sell today
        maxProfit = max(maxProfit, profit);        // best so far
    }
    return maxProfit;
}

int main() {
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    cout << "Maximum Profit: " << maxProfit(arr);
    return 0;
}
