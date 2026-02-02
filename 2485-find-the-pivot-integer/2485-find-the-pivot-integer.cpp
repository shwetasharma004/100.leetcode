class Solution {
public:
    int pivotInteger(int n) {
        int totalSum = (n * (n + 1)) / 2;
    int leftSum = 0;

    for (int i = 1; i <= n; ++i) {
        leftSum += i;
        if (leftSum * 2 - i == totalSum) {
            cout << i;
            return i;
        }
    }

    cout << -1;
    return -1;
    }
};