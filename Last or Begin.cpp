#include <iostream>
using namespace std;

int main() {
    int num;
    
    // Зчитування числа
    cin >> num;
    
    // Отримуємо першу та останню цифри
    int firstDigit = num / 100;      // Перша цифра — результат цілочисельного ділення на 100
    int lastDigit = num % 10;        // Остання цифра — залишок від ділення на 10
    
    // Порівняння
    if (firstDigit > lastDigit) {
        cout << firstDigit << endl; // Виводимо першу цифру, якщо вона більша
    } else if (lastDigit > firstDigit) {
        cout << lastDigit << endl;  // Виводимо останню цифру, якщо вона більша
    } else {
        cout << "=" << endl;        // Якщо цифри рівні, виводимо знак "="
    }

    return 0;
}
