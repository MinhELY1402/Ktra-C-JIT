// Bai 2: Nhập mảng gồm n số nguyên. Tìm và in ra số lớn nhất chia hết cho 3.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    if (n <= 0) {
        cout << "So phan tu phai lon hon 0." << endl;
        return 1;
    }

    int arr[n];
    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxDiv3 = -1; 
    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 0 && arr[i] > maxDiv3) {
            maxDiv3 = arr[i];
        }
    }

    if (maxDiv3 != -1) {
        cout << "So lon nhat chia het cho 3 la: " << maxDiv3 << endl;
    } else {
        cout << "Khong co so nao chia het cho 3." << endl;
    }

    return 0;
}