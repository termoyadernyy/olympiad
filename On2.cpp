#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    
    // Зчитування кількості елементів
    cin >> n;

    vector<int> arr(n);
    
    // Зчитування елементів масиву
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Обробка масиву: збільшення на 2 всіх невід’ємних елементів
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            arr[i] += 2;
        }
    }
    
    // Виведення нового масиву
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
