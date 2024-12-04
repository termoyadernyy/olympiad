#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    
    // Зчитування числа
    cin >> num;
    
    // Беремо модуль числа, щоб працювати однаково з від'ємними числами
    int absNum = abs(num);
    
    // Отримуємо цифри
    int hundreds = absNum / 100;            // Сотні
    int tens = (absNum / 10) % 10;          // Десятки
    int ones = absNum % 10;                 // Одиниці
    
    // Виведення цифр
    cout << hundreds << endl;
    cout << tens << endl;
    cout << ones << endl;

    return 0;
}
