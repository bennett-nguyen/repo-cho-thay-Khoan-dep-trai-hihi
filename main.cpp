#include <iostream>

int a[1001];
int psum[1001];
int cnt[1001];

int main() {
//    E4
//    int n, k;
//    std::cin >> n >> k;
//
//    for (int i = 0; i < n; i++) {
//        std::cin >> a[i];
//    }
//
//    int x = 0;
//    int n_after = n;
//    for (int i = 0; i < n; i++) {
//        if (a[i] != k) {
//            a[x] = a[i];
//            x++;
//        } else {
//            a[i] = 0;
//            n_after--;
//        }
//    }
//
//    if (n_after == 0) {
//        std::cout << "Empty";
//        return 0;
//    }
//
//    for (int i = 0; i < n_after; i++) {
//        std::cout << a[i] << ' ';
//    }

//    E5
//    int n;
//    std::cin >> n;
//    for (int i = 0; i < n; i++) {
//        int tmp;
//        std::cin >> tmp;
//        a[n-1-i] = tmp;
//    }
//
//    for (int i = 0; i < n; i++) {
//        std::cout << a[i] << ' ';
//    }

//    E6
//    int n;
//    std::cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        std::cin >> a[i];
//    }
//
//    bool is_increasing = true;
//    bool is_decreasing = true;
//
//    for (int i = 1; i < n; i++) {
//        if (a[i] > a[i-1]) {
//            if (is_decreasing) is_decreasing = false;
//        }
//
//        if (a[i] < a[i-1]) {
//            if (is_increasing) is_increasing = false;
//        }
//    }
//
//    if ((!is_increasing && !is_decreasing) || (is_increasing && is_decreasing)) {
//        std::cout << "Regular";
//        return 0;
//    }
//
//    if (is_increasing) {
//        std::cout << "Not decreasing";
//        return 0;
//    }
//
//    std::cout << "Not increasing";

//    E7
//    int n;
//    std::cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        std::cin >> a[i];
//    }
//
//    int max_length = 1;
//    int idx = 0;
//    for (int i = 0; i < n; i++) {
//        int length = 1;
//
//        for (int j = i+1; j < n; j++) {
//            if (a[j] <= a[j-1]) break;
//            length++;
//        }
//
//        if (length > max_length) {
//            max_length = length;
//            idx = i;
//        }
//    }
//
//    for (int i = idx; i < idx+max_length; i++) {
//        std::cout << a[i] << ' ';
//    }

//    E8
//    int n;
//    int max_sum = -1000000;
//    int idx = -1;
//    int length = -1;
//    std::cin >> n;
//    psum[0] = 0;
//
//    for (int i = 1; i <= n; i++) {
//        std::cin >> a[i];
//
//        psum[i] = psum[i-1] + a[i];
//    }
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = i; j <= n; j++) {
//            int sum = psum[j] - psum[i-1];
//            if (sum > max_sum) {
//                max_sum = sum;
//                idx = i;
//                length = j - i + 1;
//            }
//        }
//    }
//
//    for (int i = idx; i < idx+length; i++) {
//        std::cout << a[i] << ' ';
//    }
}
