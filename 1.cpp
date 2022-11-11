// 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
#include <cmath>

float test()
{
    std::cout << "Enter x and y to multiply: ";
    int x = 0;
    int y = 0;
    std::cin >> x;
    std::cin >> y;
    std::cout << x * y << std::endl;
    return 0;
}

float task1()
{
    int b1 = 0; int b2 = 0; int h = 0;
    std::cout << "Enter b1, b2 and h (in different lines): ";
    std::cin >> b1; std::cin >> b2; std::cin >> h;
    std::cout << "S = " << 0.5 * (b1 + b2) * h << std::endl;
    return 0;
}

float task2()
{
    int r = 0;
    std::cout << "Enter r: ";
    std::cin >> r;
    std::cout << "C = " << 2 * 3.14 * r << std::endl;
    std::cout << "S = " << 3.14 * pow(r,2);
    return 0;
}

float task3()
{
    int a = 0; int b = 0;
    std::cout << "Enter a and b (in different lines): ";
    std::cin >> a; std::cin >> b;
    std::cout << "S = " << 0.5 * a * b << std::endl;
    std::cout << "c = " << sqrt(pow(a, 2) + pow(b, 2));
    return 0;
}

int task4()
{
    int x = 0;
    std::cout << "Enter a 4 digit number: ";
    std::cin >> x;
    int a1 = x / 1000;
    int a2 = (x / 100) % 10;
    int a3 = (x / 10) % 10;
    int a4 = x % 10;
    std::cout << "Sum of digits = " << a1 + a2 + a3 + a4 << std::endl;
    return 0;
}

float task5()
{
    int x = 0; int y = 0;
    std::cout << "Enter x and y (in different lines): ";
    std::cin >> x; std::cin >> y;
    std::cout << "p = " << sqrt(pow(x, 2) + pow(y, 2)) << std::endl;
    std::cout << "degree = " << asin(y / (sqrt(pow(x, 2) + pow(y, 2))));
    return 0;
}

float task6()
{
    int p = 0; int degree = 0;
    std::cout << "Enter p and degree (in different lines): ";
    std::cin >> p; std::cin >> degree;
    std::cout << "x = " << p * cos(degree) << std::endl;
    std::cout << "y = " << p * sin(degree);
    return 0;
}

float task7()
{
    int a = 0; int b = 0; int c = 0;
    std::cout << "Enter a, b and c (in different lines): ";
    std::cin >> a; std::cin >> b; std::cin >> c;
    std::cout << "x1 = " << (-b + sqrt(pow(b,2) - 4 * a * c)) / (2 * a) << std::endl;
    std::cout << "x2 = " << (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a) << std::endl;
    return 0;
}

int task8() //ДОДЕЛАТЬ
{
    int AB = 0; int BC = 0; int AC = 0;
    std::cout << "Enter AB, BC and AC (in different lines): ";
    std::cin >> AB; std::cin >> BC; std::cin >> AC;
    int OM = 0; int MB = 0; int OB = 0;
    std::cout << AB << std::endl;
    return 0; //ДОДЕЛАТЬ
}

int task9()
{
    int s = 0;
    std::cout << "Enter the number of seconds: ";
    std::cin >> s;
    std::cout << s / 3600 << " hours " << (s % 3600) / 60 << " minutes" << std::endl;
    return 0;
}

int task10()
{
    int a = 0; int b = 0; int c = 0;
    std::cout << "Enter a, b and c (in different lines): ";
    std::cin >> a; std::cin >> b; std::cin >> c;
    if (a == b || b == c || c == a)
        std::cout << "The triangle is isosceles" << std::endl;
    else
        std::cout << "The triangle isn't isosceles" << std::endl;
    return 0;
}

int task11()
{
    int x = 0;
    std::cout << "Enter x: ";
    std::cin >> x;
    if (x > 1000)
        std::cout << "The final price is " << x - (x / 100 * 10) << std::endl;
    else
        std::cout << "The final price is " << x << std::endl;
    return 0;
}

int task12()
{
    int w = 0; int h = 0;
    std::cout << "Enter your weight and height (in different lines): ";
    std::cin >> w; std::cin >> h;
    if ((h - 100) == w)
        std::cout << "Your weight is perfect" << std::endl;
    if ((h - 100) < w)
        std::cout << "You are overweight" << std::endl;
    if ((h - 100) > w)
        std::cout << "You are underweight" << std::endl;
    return 0;
}


//TASK 13 СДЕЛАТЬ

int task14()
{
    int d = 0; int l = 0;
    std::cout << "Enter the day of the week and the length of the meeting (in hours, 1 hour = 100 rubles): ";
    std::cin >> d; std::cin >> l;
    if (d == 6 || d == 7)
        std::cout << "The price with a 20% discount is: " << l * 100 - (l * 100 * 0.2) << std::endl;
    else
        std::cout << "The price is: " << l * 100;
    return 0;
}

int task15()
{
    int m = 0;
    std::cout << "Enter the number of the month: ";
    std::cin >> m;
    if (m == 1)
        std::cout << "It is January, winter";
    if (m == 2)
        std::cout << "It is February, winter";
    if (m == 3)
        std::cout << "It is March, spring";
    if (m == 4)
        std::cout << "It is April, spring";
    if (m == 5)
        std::cout << "It is May, spring";
    if (m == 6)
        std::cout << "It is June, summer";
    if (m == 7)
        std::cout << "It is July, summer";
    if (m == 8)
        std::cout << "It is August, summer";
    if (m == 9)
        std::cout << "It is September, autumn";
    if (m == 10)
        std::cout << "It is October, autumn";
    if (m == 11)
        std::cout << "It is November, autumn";
    if (m == 12)
        std::cout << "It is December, winter";
    std::cout << std::endl; 
    return 0;
}

int task16()
{
    int x = 0;
    std::cout << "Enter the number (6 digits): ";
    std::cin >> x;
    int a1 = x / 100000;
    int a2 = (x / 10000) % 10;
    int a3 = (x / 1000) % 10;
    int a4 = (x / 100) % 10;
    int a5 = (x / 10) %10;
    int a6 = x % 10;
    if (a1 + a2 + a3 == a4 + a5 + a6)
        std::cout << "The number is lucky" << std::endl;
    else
        std::cout << "The number isn't lucky" << std::endl;
    return 0;

}

float task17()
{
    int x = 0;
    std::cout << "Enter the number: ";
    std::cin >> x; 
    if (x % 10 == 1)
        std::cout << x << " kopeyka" << std::endl;
    if (x % 10 == 2 || x % 10 == 3 || x % 10 == 4)
        std::cout << x << " kopeyki" << std::endl;
    if (x % 10 == 5 || x % 10 == 6 || x % 10 == 7 || x % 10 == 8 || x % 10 == 9 || x % 10 == 0)
        std::cout << x << " kopeyek" << std::endl;
    return 0;
}

int task18()
{
    int x = 0;
    std::cout << "Enter a 4 digit number: ";
    std::cin >> x;
    int a1 = x / 1000;
    int a2 = (x / 100) % 10;
    int a3 = (x / 10) % 10;
    int a4 = x % 10;
    if (a1 == a4 && a2 == a3)
        std::cout << "The number is a polyndrome" << std::endl;
    else
        std::cout << "The number isn't a polyndrome" << std::endl;

    return 0;
}

int task19()
{
    int x = 0; int b = 0;
    std::cout << "Enter a 3 digit number and number b (in different lines): ";
    std::cin >> x; std::cin >> b;
    int a1 = x / 100;
    int a2 = (x / 10) % 10;
    int a3 = x % 10;
    if (a1 * a2 * a3 > b)
        std::cout << "The multiplication of digits is bigger then number b" << std::endl;
    else if ((a1 + a2 + a3) % 7 == 0)
        std::cout << "The sum of digits is multiple to 7" << std::endl;
    else
        std::cout << "None of the above" << std::endl;
    return 0;
}

int task20()
{
    int a = 0; int b = 0; int c = 0; int d = 0;
    std::cout << "Enter a, b, c, d: ";
    std::cin >> a; std::cin >> b; std::cin >> c; std::cin >> d;
    if ((c < a || c < b) && (d < a || d < b))
        std::cout << "The rectangle will fit in the other one" << std::endl;
    else
        std::cout << "The rectangle won't fit in the other one" << std::endl;
    return 0;
}

int main()
{
    //std::cout << test ();
    //std::cout << std::endl;

    std::cout << "Enter the task number: ";
    int n;
    std::cin >> n;

    if (n == 1)
        std::cout << task1() << std::endl;

    else if (n == 2)
        std::cout << task2() << std::endl;

    else if (n == 3)
        std::cout << task3() << std::endl;

    else if (n == 4)
        std::cout << task4() << std::endl;

    else if (n == 5)
        std::cout << task5() << std::endl;

    else if (n == 6)
        std::cout << task6() << std::endl;

    else if (n == 7)
        std::cout << task7() << std::endl;

    // TASK 8

    else if (n == 9)
        std::cout << task9() << std::endl;

    else if (n == 10)
        std::cout << task10() << std::endl;

    else if (n == 11)
        std::cout << task11() << std::endl;

    else if (n == 12)
        std::cout << task12() << std::endl;

    // TASK 13

    else if (n == 14)
        std::cout << task14() << std::endl;

    else if (n == 15)
        std::cout << task15() << std::endl;

    else if (n == 16)
        std::cout << task16() << std::endl;

    else if (n == 17)
        std::cout << task17() << std::endl;

    else if (n == 18)
        std::cout << task18() << std::endl;

    else if (n == 19)
        std::cout << task19() << std::endl;

    else if (n == 20)
        std::cout << task20() << std::endl;

    else
        std::cout << "This task doesn't exist" << std::endl;



    return 0;
}
