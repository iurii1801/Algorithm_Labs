#include <iostream>

void staticMemory()
{
    static int a = 0;
    std::cout << "a: " << a << std::endl;
    a += 1;
}

int main()
{
    staticMemory(); // prints 0
    staticMemory(); // prints 1
    staticMemory(); // prints 2
    return 0;

}

//В static_1, переменная a является глобальной переменной. 
// Это означает, что она видима и доступна для всех функций и файлов в программе. 
// Переменная a будет существовать на протяжении всего выполнения программы.