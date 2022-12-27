#include <iostream>
#include <Windows.h>
#include <string>
#include <iomanip>
using namespace std;
void pressure() {
    double s, f, p;
    int a , b;
    std::cout << "Calculation Pressure" << std::endl;
    Sleep(2000);
    std::cout << "Please input size:";
    std::cin >> s;
    Sleep(1000);
    std::cout << "What units do you use now?(1 for meter,2 for centimeter):";
    std::cin >> a;
    if (a == 1) {
        s = s;
    }
    else if (a == 2) {
        s = s / 10000;
    }
    std::cout << "I will change your unit to m(meter)!";
    Sleep(2000);
    std::cout << std::endl;
    std::cout << "Pleade input force:";
    std::cin >> f;
    p = f / s;
    Sleep(1000);
    std::cout << "How many decimals do you want to keep:";
        std::cin >> b;
        std::cout << std::endl;
    std::cout << setiosflags(ios::fixed) << setprecision(b) <<"The answer is " << p << " Pa.\n" << std::endl;
}

void size() {
    float s, f, p;
    std::cout << "Calculation Size" << std::endl;
    Sleep(2000);
    std::cout << "Please input pressure:";
    std::cin >> p;
    std::cout << endl;
    std::cout << "Please input force:";
    std::cin >> f;
    s = p / f;
    std::cout << "The answer is " << s << " m2" << std::endl;
}

void force() {
    bool b;
    double s, f, p;
    int a;
    std::cout << "Caculation Force" << std::endl;
    Sleep(2000);
    std::cout << "Please input pressure:";
    std::cin >> p;
    std::cout << endl;
    std::cout << "Please input size:";
    std::cin >> s;
    std::cout << endl;
    Sleep(1000);
    std::cout << "What units do you use now?(1 for meter,2 for centimeter):";
    std::cin >> a;
    if (a == 1) {
        b = true;
    }
    else if (a == 2) {
        b = false;
    }
    std::cout << "I will change your unit to m(meter)!";
    if (b = true) {
        s = s;
    }
    else if (b = false) {
        s = s / 1000000;
    }
    else s = s;
    Sleep(2000);
    f = p * s;
    std::cout << "The answer is " << f << "N" << std::endl;
}

int main() {
    std::cout << "Welocome to Xu Ruilin 's Memorial Pascal Program." << std::endl;
    std::cout << "Powered by Xu ruilin" << std::endl;
    bool done = false;
    std::string input;

    while (!done)
    {
        std::cout << "what do you want to calculate? Pressure(p),Size(s),Force(f),Quit(q):";
        std::getline(std::cin, input);
        if (input == "q") {
            done = true;
        }
        else if (input == "p") {
            pressure();
        }
        else if (input == "s") {
            size();
        }
        else if (input == "f") {
            force();
        }
    }
    return 0;
}