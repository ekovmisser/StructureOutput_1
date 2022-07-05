#include <iostream>
#include <Windows.h>

struct address
{
    std::string city_address;
    std::string street_address;
    int house_address;
    int flat_address;
    int index_address;
};

void address_all() {
    address score;
    score.city_address = "Москва";
    score.street_address = "Арбат";
    score.house_address = 12;
    score.flat_address = 8;
    score.index_address = 123456;
    for (int i = 0; i < 2; i++) {
        std::cout << "Город: ";
        std::cin >> score.city_address;
        std::cout << "Улица: ";
        std::cin >> score.street_address;
        std::cout << "Номер дома: ";
        std::cin >> score.house_address;
        std::cout << "Номер квартиры: ";
        std::cin >> score.flat_address;
        std::cout << "Индекс: ";
        std::cin >> score.index_address;
        std::cout << std::endl;
    }
}

int main(int argc, char** argv)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    address_all();
    return 0;
}


