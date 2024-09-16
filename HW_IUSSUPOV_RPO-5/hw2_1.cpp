#include <iostream>

int main() {

    setlocale(LC_ALL, "Rus");
    // 1. ���� �� 0 �� 10
    std::cout << "���� �� 0 �� 10:" << std::endl;
    for (int i = 0; i <= 10; ++i) {
        std::cout << i << std::endl;
    }

    // 2. ���� �� -10 �� 10
    std::cout << "\n���� �� -10 �� 10:" << std::endl;
    for (int i = -10; i <= 10; ++i) {
        std::cout << i << std::endl;
    }

    // 3. ���� �� 15 �� -25 
    std::cout << "\n���� �� 15 �� -25 (� �������� �������):" << std::endl;
    for (int i = 15; i >= -25; --i) {
        std::cout << i << std::endl;
    }

    // 4. ���� �� 0 �� 100 � ����� � 15
    std::cout << "\n���� �� 0 �� 100 � ����� � 15:" << std::endl;
    for (int i = 0; i <= 100; i += 15) {
        std::cout << i << std::endl;
    }

    // 5. ���� �� 0 �� [����� ������������]
    int n;
    std::cout << "\n������� ����� ��� ����� �� 0 �� [�����]: ";
    std::cin >> n;
    std::cout << "���� �� 0 �� " << n << ":" << std::endl;
    for (int i = 0; i <= n; ++i) {
        std::cout << i << std::endl;
    }

    // 6. ���� �� [����� ������������] �� 100
    std::cout << "\n������� ����� ��� ����� �� [�����] �� 100: ";
    std::cin >> n;
    std::cout << "���� �� " << n << " �� 100:" << std::endl;
    for (int i = n; i <= 100; ++i) {
        std::cout << i << std::endl;
    }

    // 7. ���� �� [����� ������������] �� [����� ������������]
    int start, end;
    std::cout << "\n������� ��������� �����: ";
    std::cin >> start;
    std::cout << "������� �������� �����: ";
    std::cin >> end;
    std::cout << "���� �� " << start << " �� " << end << ":" << std::endl;
    for (int i = start; i <= end; ++i) {
        std::cout << i << std::endl;
    }

    return 0;
}