// homework_b_2_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


struct bank_acc
    {
        int number;
        std::string name;
        float balance;
    };
void new_balance(bank_acc& p)
    {
        float newbalance = 0;
        std::cout << "Введите новый баланс: ";
        std::cin >> newbalance;
        p.balance = newbalance;
    }

int main(int argc, char** argv)
{
    bank_acc p1;
    std::cout << "Введите номер счёта: ";
    std::cin >> p1.number;
    std::cout << "Введите имя владельца: ";
    std::cin >> p1.name;
    std::cout << "Введите баланс: ";
    std::cin >> p1.balance;

    new_balance(p1);

    std::cout << "Ваш счёт: " << p1.name << ", " << p1.number << ", " << p1.balance;
    
    return 0;
}
