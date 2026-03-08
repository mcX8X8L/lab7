#include <iostream>
using namespace std;
int main()
{
    int grade, ngrade;
    cout << "Введіть вашу оцінку за 100-бальною шкалою:\n";
    cin >> ngrade;
    if (ngrade >= 90 and ngrade <= 100) grade = 5;
    else if (ngrade >= 75 and ngrade <= 90) grade = 4;
    else if (ngrade >= 60 and ngrade <= 75) grade = 3;
    else if (ngrade >= 35 and ngrade <= 60) grade = 2;
    else if (ngrade >= 0 and ngrade <= 35) grade = 1;
    else {
        cout << "hell nah, bro.\n";
        return 0;
    }
    switch (grade){
        case 5: cout << "Відмінно.\n"; break;
        case 4: cout << "Добре.\n"; break;
        case 3: cout << "Задовільно.\n"; break;
        case 2: cout << "Незадовільно.\n"; break;
        case 1: cout << "hell nah.\n"; break;
    }
    return 0;
}