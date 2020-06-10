#include <bits/stdc++.h>
using namespace std;

long long Max_Pairwise_Product(vector<int> &arr) {
    int n = arr.size();

    int max_index1 = -1;
    for (int i = 0; i < n; ++i)
    {
        if ((max_index1 == -1) || (arr[i] > arr[max_index1]))
        {
            max_index1 = i;
        }
    }

    int max_index2 = -1;
    for (int j = 0; j < n; ++j)
    {
        if ((j != max_index1) && ((max_index2 == -1) || (arr[j] > arr[max_index2])))
        {
            max_index2 = j;
        }
    }
    return ((long long) (arr[max_index1])) * arr[max_index2];
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    long long result = Max_Pairwise_Product(arr);
    cout << result << "\n";
    return 0;
}
