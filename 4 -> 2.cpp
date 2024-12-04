#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Зчитуємо чотиризначне число

    // Визначаємо середні цифри
    int tens = (n / 10) % 10;  // Друга цифра
    int ones = n % 10;         // Третя цифра

    // Формуємо двозначне число
    int result = tens * 10 + ones;

    // Виводимо результат
    cout << result << endl;

    return 0;
}
