#include <iostream>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;  // Зчитуємо координати точки

    // Визначаємо, в якій чверті знаходиться точка
    if (x > 0 && y > 0) {
        cout << 1 << endl;  // Перша чверть
    } else if (x < 0 && y > 0) {
        cout << 2 << endl;  // Друга чверть
    } else if (x < 0 && y < 0) {
        cout << 3 << endl;  // Третя чверть
    } else if (x > 0 && y < 0) {
        cout << 4 << endl;  // Четверта чверть
    } else {
        cout << 0 << endl;  // Якщо точка на осях
    }

    return 0;
}
