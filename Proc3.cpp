#include <iostream>
#include <cmath>
 

void Mean(double X, double Y, double& AMean, double& GMean) {
    
    // Обчислення середнього арифметичного
    AMean = (X + Y) / 2;
  
    // Обчислення середнього геометричного
    GMean = sqrt(X * Y);
}

int main() {
    double A, B, C, D, AMeanResult, GMeanResult;

    // Введення значень A, B, C, D
    std::cout << "Enter value A, B, C, D: ";
    std::cin >> A >> B >> C >> D;

    // Виклик функції для пар (A, B), (A, C), (A, D)
    Mean(A, B, AMeanResult, GMeanResult);
    std::cout << "Arithmetic mean for (A, B): " << AMeanResult << std::endl;
    std::cout << "Arithmetic mean for (A, B): " << GMeanResult << std::endl;

    Mean(A, C, AMeanResult, GMeanResult);
    std::cout << "Arithmetic mean for (A, C): " << AMeanResult << std::endl;
    std::cout << "Arithmetic mean for (A, C): " << GMeanResult << std::endl;

    Mean(A, D, AMeanResult, GMeanResult);
    std::cout << "Arithmetic mean for (A, D): " << AMeanResult << std::endl;
    std::cout << "Arithmetic mean for (A, D): " << GMeanResult << std::endl;

    return 0;
}