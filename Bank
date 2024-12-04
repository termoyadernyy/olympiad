#include <iostream>
#include <string>
#include <unordered_map>

std::string getBankName(const std::string& cardNumber) {
    // Таблиця BIN-кодів та назв банків
    std::unordered_map<std::string, std::string> binToBank = {
        {"4111", "Bank of America"},
        {"5500", "Citibank"},
        {"3400", "American Express"},
        {"6011", "Discover"},
        {"5211", "Mastercard"},
        {"4000", "Visa"},
        {"5678", "Укрсиббанк"},
        {"1234", "ПриватБанк"},
        {"9876", "Монобанк"}
    };

    // Перевіряємо перші 4 цифри карти
    if (cardNumber.size() < 4) {
        return "Invalid card number!";
    }

    std::string bin = cardNumber.substr(0, 4);

    // Пошук банку в таблиці
    if (binToBank.find(bin) != binToBank.end()) {
        return binToBank[bin];
    } else {
        return "Unknown bank!";
    }
}

int main() {
    std::string cardNumber;

    std::cout << "Enter your card number: ";
    std::cin >> cardNumber;

    std::string bankName = getBankName(cardNumber);

    std::cout << "Bank: " << bankName << std::endl;

    return 0;
}
