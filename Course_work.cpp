#include <iostream>
#include "1.cpp"
#include "2.cpp"
#include "3.cpp"
#include "4.cpp"

using namespace std;

int main()
{
    system("cls");
    int lab;
    cout << "Choose number of lab, which you want to use. Enter number from 1 to 4. Enter 0 to exit.\n";
    cin >> lab;
    system("cls");
    switch (lab)
    {
    case 1:
        menu1();
        main();
        break;
    case 2:
        menu2();
        main();
        break;
    case 3:
        menu3();
        main();
        break;
    case 4:
        menu4();
        main();
        break;
    case 0:
        exit(1);
    default:
        main();
        break;
    }
    return 0;
}