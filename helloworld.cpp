#include <iostream>
int num;
float dec;
char c;
bool run;
std::string str;
int main()
{
    num = 4;
    dec = 6.5;
    str = "tomatos";
    std::cout << "Enter (y/n) if you want to run the program: ";
    std::cin >> c;
    if (c == 'y') {
        run = true;
    }
    else {
        run = false;
    }
    if (run) {
        std::cout << "you have " << num << " " << str << " and you need " << dec << " " << str;
    }
}