#include <iostream>
using namespace std;

int main() {
    int K;

    // Введення числа K
    cout << "Enter the number K (from 1 to 365): ";
    cin >> K;

    // Визначення номера дня тижня
    int day_of_week = (K - 1) % 7;

    // Виведення результату
    cout << "Day of the week number for " << K << "th day of the year: " << day_of_week << endl;

    return 0;
}
