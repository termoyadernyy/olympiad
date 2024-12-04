#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;  // Зчитуємо довжини сторін трикутника

    // Перевіряємо тип трикутника
    if (a == b && b == c) {
        cout << 1 << endl;  // Рівносторонній трикутник
    } else if (a == b || b == c || a == c) {
        cout << 2 << endl;  // Рівнобедрений трикутник
    } else {
        cout << 3 << endl;  // Різносторонній трикутник
    }

    return 0;
}
