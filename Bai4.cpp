// Bai 4: Đếm số giá trị phân biệt
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    int dem = 0;
    if (n <= 0) {
        cout << "So phan tu phai lon hon 0." << endl;
        return 1;
    }

    int arr[n];
    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; i++) {
        cout<< "Nhap phan tu " << i << ": ";
        cin >> arr[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        bool isDistinct = true;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDistinct = false;
                break;
            }
        }
        if (isDistinct) {
            dem++;
        }
    }
    cout << "So phan tu phan biet trong mang la: " << dem << endl;
    return 0;
}
