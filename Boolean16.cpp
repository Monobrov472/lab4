#include <iostream>
using namespace std;

int main() {
    int number;

    // Введення числа
    cout << "Enter a positive integer: ";
    cin >> number;

    // Перевірка чи число є парним двозначним
    bool is_even_two_digit = (number % 2 == 0) && (number >= 10 && number <= 99);

    // Виведення результату
    if (is_even_two_digit) {
        cout << "This number is an even two-digit number." << endl;
    }
    else {
        cout << "This number is not an even two-digit number." << endl;
    }

    return 0;
}