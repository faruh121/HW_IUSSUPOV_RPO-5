#include <iostream>

int main() {

    setlocale(LC_ALL, "Rus");
    // 1. ÷икл от 0 до 10
    std::cout << "÷икл от 0 до 10:" << std::endl;
    for (int i = 0; i <= 10; ++i) {
        std::cout << i << std::endl;
    }

    // 2. ÷икл от -10 до 10
    std::cout << "\n÷икл от -10 до 10:" << std::endl;
    for (int i = -10; i <= 10; ++i) {
        std::cout << i << std::endl;
    }

    // 3. ÷икл от 15 до -25 
    std::cout << "\n÷икл от 15 до -25 (в обратном пор€дке):" << std::endl;
    for (int i = 15; i >= -25; --i) {
        std::cout << i << std::endl;
    }

    // 4. ÷икл от 0 до 100 с шагом в 15
    std::cout << "\n÷икл от 0 до 100 с шагом в 15:" << std::endl;
    for (int i = 0; i <= 100; i += 15) {
        std::cout << i << std::endl;
    }

    // 5. ÷икл от 0 до [выбор пользовател€]
    int n;
    std::cout << "\n¬ведите число дл€ цикла от 0 до [число]: ";
    std::cin >> n;
    std::cout << "÷икл от 0 до " << n << ":" << std::endl;
    for (int i = 0; i <= n; ++i) {
        std::cout << i << std::endl;
    }

    // 6. ÷икл от [выбор пользовател€] до 100
    std::cout << "\n¬ведите число дл€ цикла от [число] до 100: ";
    std::cin >> n;
    std::cout << "÷икл от " << n << " до 100:" << std::endl;
    for (int i = n; i <= 100; ++i) {
        std::cout << i << std::endl;
    }

    // 7. ÷икл от [выбор пользовател€] до [выбор пользовател€]
    int start, end;
    std::cout << "\n¬ведите начальное число: ";
    std::cin >> start;
    std::cout << "¬ведите конечное число: ";
    std::cin >> end;
    std::cout << "÷икл от " << start << " до " << end << ":" << std::endl;
    for (int i = start; i <= end; ++i) {
        std::cout << i << std::endl;
    }

    return 0;
}