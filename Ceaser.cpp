#include <iostream>
#include <string>

std::string caesarCipherEncrypt(const std::string& text, int shift) {
    std::string result = "";

    // Нормалізуємо зміщення до діапазону 0-25
    shift = shift % 26;

    for (char c : text) {
        // Для великих літер
        if (c >= 'A' && c <= 'Z') {
            result += char(int('A') + (c - 'A' + shift) % 26);
        }
        // Для малих літер
        else if (c >= 'a' && c <= 'z') {
            result += char(int('a') + (c - 'a' + shift) % 26);
        }
        // Інші символи залишаємо без змін
        else {
            result += c;
        }
    }

    return result;
}

std::string caesarCipherDecrypt(const std::string& text, int shift) {
    // Декодування виконується з використанням протилежного зсуву
    return caesarCipherEncrypt(text, 26 - (shift % 26));
}

int main() {
    std::string text;
    int shift;

    std::cout << "Enter the text to encrypt: ";
    std::getline(std::cin, text);

    std::cout << "Enter the shift value: ";
    std::cin >> shift;

    std::string encryptedText = caesarCipherEncrypt(text, shift);
    std::cout << "Encrypted text: " << encryptedText << std::endl;

    std::string decryptedText = caesarCipherDecrypt(encryptedText, shift);
    std::cout << "Decrypted text: " << decryptedText << std::endl;

    return 0;
}
