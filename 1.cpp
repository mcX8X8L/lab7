#include <iostream>
using namespace std;
int main()
{
    int d;
    cout<<"Введіть номер обраного вами дня тижня:\n";
    cin>>d;
    switch(d) {
        case 1: cout << "Понеділок.\n"; break;
        case 2: cout << "Вівторок.\n"; break;
        case 3: cout << "Середа.\n"; break;
        case 4: cout << "Четвер.\n"; break;
        case 5: cout << "П'ятниця.\n"; break;
        case 6: cout << "Субота.\n"; break;
        case 7: cout << "Неділя.\n"; break;
        default: cout << "hell nah.\n"; break;
    }
    return 0;
}