// Bai 5: Dãy Fibonacci bằng đệ quy
#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int n;
    cout << "Nhap so phan tu cua day Fibonacci: ";
    cin >> n;
    cout << "Day Fibonacci: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}