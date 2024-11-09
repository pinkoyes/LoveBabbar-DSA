#include <iostream>

// size of an array is 2M + 1 (odd number)
// find a number which appear only once in an array
// XOR (a ^ a equals to 0) 

int main() {
    int t, n;
    std::cin >> t;
    while (t--) {
        std::cin >> n;

        int arr[n];

        for (int i=0; i<n; i++) {
            std::cin >> arr[i];
        }

        int ans = 0;
        for (int i=0; i<n; i++) {
            ans = ans^arr[i];
        }

        std::cout << ans << "\n";
    }
}
