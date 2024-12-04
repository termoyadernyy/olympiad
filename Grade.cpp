#include <iostream>
using namespace std;

int main() {
    int score;
    cin >> score;  // Зчитуємо бал учня

    if (score >= 1 && score <= 3) {
        cout << "Initial" << endl;  // Початковий рівень
    } else if (score >= 4 && score <= 6) {
        cout << "Average" << endl;  // Середній рівень
    } else if (score >= 7 && score <= 9) {
        cout << "Sufficient" << endl;  // Достатній рівень
    } else if (score >= 10 && score <= 12) {
        cout << "High" << endl;  // Високий рівень
    } else {
        cout << "Invalid score" << endl;  // Неприпустимий бал
    }

    return 0;
}
