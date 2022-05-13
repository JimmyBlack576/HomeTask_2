#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int hour1, min1, sec1, hour2, min2, sec2, price_min = 2;
    float time1,time2,timetrip;

    cout << "Введите время начала поездки в формате (чч:мм:сс): \n";
    cin >> hour1 >> min1 >> sec1;
    cout << "Введите время окончания поездки в формате (чч:мм:сс): \n";
    cin >> hour2>> min2>> sec2;

    time1 = hour1 * 60 + min1 + sec1 / 60;
    time2 = hour2 * 60 + min2 + sec2 / 60;

    timetrip = time2 - time1;

    cout << "Стоимость вашей поездки составляет - " << timetrip * price_min << "гривен";

}

