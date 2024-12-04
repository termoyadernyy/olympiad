#include <iostream>
using namespace std;

int main() {
    int month;
    cin >> month;  // Зчитуємо номер місяця

    // Використовуємо складені умови для визначення пори року
    if (month == 3 || month == 4 || month == 5) {
        cout << "Spring" << endl;  // Весна
    } else if (month == 6 || month == 7 || month == 8) {
        cout << "Summer" << endl;  // Літо
    } else if (month == 9 || month == 10 || month == 11) {
        cout << "Autumn" << endl;  // Осінь
    } else if (month == 12 || month == 1 || month == 2) {
        cout << "Winter" << endl;  // Зима
    }

    return 0;
}

