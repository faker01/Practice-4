#include <iostream>


int add(unsigned char n, int n_a)
{
    n = n << 4;
    n += n_a;
    return n;
}


int del(unsigned char n, int n_d)
{
    if (n_d == 1)
    {
        n = n >> 4;
    }
    else
    {
        n = n & 15;
    }
    return n;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    unsigned char num = 0;
    int input;
    std::cout << "Как кнопочить:\n0 - завершить программу\n1 - добавить число\n2 - убрать число" << std::endl;
    while (true)
    {
        std::cout << "Байт:" << (num >> 4) << " " << (num & 15) << std::endl;
        std::cout << "Команда:";
        std::cin >> input;
        if (input == 0)
        {
            return 0;
        }
        else
        {
            if (input == 1)
            {
                std::cin >> input;
                num = add(num, input);
            }
            else
            {
                if (input == 2)
                {
                    std::cin >> input;
                    num = del(num, input);
                }         
                else
                {
                    std::cout << "неправильный ввод" << std::endl;
                }
            }
        }
    }
}
