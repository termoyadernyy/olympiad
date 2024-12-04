#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;  // Зчитуємо коефіцієнти

    int discriminant = b * b - 4 * a * c; // Обчислюємо дискримінант

    if (discriminant < 0) {
        // Якщо дискримінант менше нуля, коренів немає
        cout << "No roots" << endl;
    } else if (discriminant == 0) {
        // Якщо дискримінант дорівнює нулю, є один корінь
        int root = -b / (2 * a);
        cout << "One root: " << root << endl;
    } else {
        // Якщо дискримінант більше нуля, є два корені
        int root1 = (-b - sqrt(discriminant)) / (2 * a);
        int root2 = (-b + sqrt(discriminant)) / (2 * a);

        if (root1 > root2) {
            swap(root1, root2);  // Гарантуємо, що корені виведені в порядку зростання
        }
        cout << "Two roots: " << root1 << " " << root2 << endl;
    }

    return 0;
}
