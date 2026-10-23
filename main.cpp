#include <iostream>

int main()
{
    std::string str{};
    std::cout << "Введите слово: " << std::endl;
    std::cin >> str;
    std::cout << "Вы ввели: " << std::endl;
    std::cout << str << std::endl;
    return EXIT_SUCCESS;

}