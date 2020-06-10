
#include <bits/stdc++.h>
using namespace std;

int get_max_index(vector<int> weights, vector<int> values) {
    int max_i = 0;
    double max = 0;

    for (int i = 0; i < weights.size(); i++) {
        if (weights[i] != 0 && (double) values[i] / weights[i] > max) {
            max = (double) values[i] / weights[i];
            max_i = i;
        }
    }
    return max_i;
}

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
    double value = 0.0;

    for (int i = 0; i < weights.size(); i++) {
        if (capacity == 0) return value; //if capacity has become 0 no need to proceed
        int index = get_max_index(weights, values); // to get index of next max valued element
        int a = min(capacity, weights[index]);
        value += a * (double) values[index] / weights[index]; //getting that part only which can fit for example only 1/3rd of something
        weights[index] -= a; //subtracting so that weight of that element so it becomes 0
        capacity -= a; //reducing capacity of the bag as we put some weight in it
    }

    return value;
}

int main() {
    int n;
    int capacity;
    cin >> n >> capacity;
    vector<int> values(n);
    vector<int> weights(n);
    for (int i = 0; i < n; i++) {
        cin >> values[i] >> weights[i];
    }

    double optimal_value = get_optimal_value(capacity, weights, values);

    cout.precision(10);
    cout << optimal_value << std::endl;
    return 0;
}
