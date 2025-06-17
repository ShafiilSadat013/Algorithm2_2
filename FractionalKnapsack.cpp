#include <bits/stdc++.h>
using namespace std;

void fractionalknapsack(int n, float value[], float weight[], float capacity) {
    int index[n];
    for (int i = 0; i < n; i++) {
        index[i] = i;
    }

    // Sorting items by value-to-weight ratio
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            float r1 = value[index[i]] / weight[index[i]];
            float r2 = value[index[j]] / weight[index[j]];
            if (r1 < r2) {
                swap(index[i], index[j]);
            }
        }
    }

    float totalvalue = 0.0;
    cout << "Items taken (value, weight, fraction taken):\n";

    for (int i = 0; i < n && capacity > 0; i++) {
        int item = index[i];
        if (weight[item] <= capacity) {
            capacity -= weight[item];
            totalvalue += value[item];
            cout << value[item] << " " << weight[item] << " (1.0)\n";
        } else {
            float fraction = capacity / weight[item];
            totalvalue += value[item] * fraction;
            cout << value[item] << " " << weight[item] << " (" << fraction << ")\n";
            capacity = 0;
        }
    }

    cout << "\nMaximum total value: " << totalvalue << endl;
}

int main() {
    int n = 3;
    float value[] = {60, 100, 120};
    float weight[] = {10, 20, 30};
    float capacity = 50;

    fractionalknapsack(n, value, weight, capacity);

    return 0;
}
