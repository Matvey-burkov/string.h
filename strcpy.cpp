#include <iostream>

int main() {
    const char* source = "Пример строки для копирования";
    char destination[100]; 

    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0'; 

    std::cout << "Скопированная строка: " << destination << std::endl;

    return 0;
}
