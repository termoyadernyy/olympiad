#include <iostream>
#include <cmath>
using namespace std;

// Функція для обчислення мінімальної кількості сірників
long long minMatches(long long n) {
    // Для розташування кубиків у паралелепіпеді
    long long minMatches = LLONG_MAX;

    for (long long x = 1; x * x * x <= n; ++x) {
        for (long long y = 1; x * y * y <= n; ++y) {
            long long z = (n + x * y - 1) / (x * y); // Округлення вгору
            long long matches = 3 * (x * y + y * z + z * x); // Підрахунок ребер
            minMatches = min(minMatches, matches);
        }
    }

    return minMatches;
}

int main() {
    long long n;
    cout << "Введіть кількість кубиків: ";
    cin >> n;

    long long result = minMatches(n);
    cout << "Мінімальна кількість сірників: " << result << endl;

    return 0;
}
