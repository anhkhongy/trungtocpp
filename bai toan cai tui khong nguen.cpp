#include <bits/stdc++.h>
using namespace std;

struct Item {
    int value;
    int weight;
};

bool cmp(Item a, Item b) {
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}

double fractionalKnapsack(int W, Item arr[], int n) {
    sort(arr, arr + n, cmp);
    int curWeight = 0;  
    double finalValue = 0.0; 
    for (int i = 0; i < n; i++) {
        if (curWeight + arr[i].weight <= W) {
            curWeight += arr[i].weight;
            finalValue += arr[i].value;
        } else {
            int remain = W - curWeight;
            finalValue += arr[i].value * ((double) remain / arr[i].weight);
            break;
        }
    }
    return finalValue;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N, W;
        cin >> N >> W;

        Item items[N];
        for(int i=0; i<N; i++) {
            cin >> items[i].value >> items[i].weight;
        }

        cout << fixed << setprecision(2) << fractionalKnapsack(W, items, N) << endl;
    }
}
