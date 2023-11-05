#include <iostream>


// picture 2

using namespace std;

// определение знчения функции "у" в зависимотси от аргумента "х", по заданному графику.
float line (int x) 
{
    float y=0;
    if(x >= -10 && x < -8)
    {
        y = -3;
    }
    if (x >= -8 && x < -3)
    { 
        y = (x+3)*(0.6);
    }
    if (x >= -3 && x < 3)
    {
        y = sqrt (9 - x * x);
    }
    if (x >= 3 && x <= 5)
    {
        y = x - 3;
    } 
    if (x > 5 && x <=8)
    {
        y = 3;
    }
    return y;
}

// цикл для вывода значений функции, определяемой графиком.
float main()
{
    cout << "START" << endl;
    for ( int x = - 10; x <= 8; x++ )
    {
        cout << "x = " << x << "   y = " << line (x) << endl;

    }
    cout << "END";
}

