#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y = 0, z = 1, a, r, s = 0, q, sum = 0, n, i, d;
    cout << "Enter Your Number : ";
    cin >> n;
    cout << " Case Number 1 Factorial \n Case Number 2 Sum of Natural \n Case Number 3 Sum of Digit \n Case Number 4 Sum of Reverse \n Case Number 5 Polydrome Number \n Case Number 6 Amstrong Number \n Case Number 7 Fibonacii \n Case Number 8 Adam Number \n Case Number 9 Prime Number \n Case Number 10 Perfect Number \n";
    cout << "Enter Your Choice ";
    cin >> i;
    switch (i)
    {
    case 1:
    {
        for (int a = 1; a <= n; a++)
        {
            cout << "\n"
                 << a;
            sum = sum + a;
        }
        cout << "\nThe Number of Factorial is " << sum;
    }
    break;
    case 2:
    {
        for (int a = 1; a <= n; a++)
        {
            sum = sum + a;
        }
        cout << "\nThe Sum of Natural is " << sum;
    }
    break;
    case 3:
    {
        int s = 0;
        while (n > 0)
        {
            r = n % 10;
            s = s + r;
            n = n / 10;
        }
        cout << "\nThe Sum of Digit is " << s;
    }
    break;
    case 4:
    {
        int s = 0;
        while (n > 0)
        {
            r = n % 10;
            s = s * 10 + r;
            n = n / 10;
        }
        cout << "The Reverse Number is :" << s;
    }
    break;
    case 5:
    {
        q = n;
        int s = 0;
        while (n > 0)
        {
            r = n % 10;
            s = s * 10 + r;
            n = n / 10;
        }
        if (s == q)
        {
            cout << "Polydrome Number" << s;
        }
        else
        {
            cout << "Not Polydrome Number" << s;
        }
    }
    break;
    case 6:
    {
        q = n;
        int s = 0;
        while (n > 0)
        {
            r = n % 10;
            s = s + r;
            n = n / 10;
        }
        if (s == q)
        {
            cout << "Amstrong Number" << s;
        }
    }
    break;
    case 7:
    {
        cout << "\n"
             << y;
        cout << "\n"
             << z;
        for (i = 2; i < n; i++)
        {
            d = y + z;
            cout << "\n"
                 << d;
            y = z;
            z = d;
        }
    }
    break;
    case 8:
    {
        x = n * n;
        cout << x;
        int s = 0;
        while (n > 0)
        {
            r = x % 10;
            s = s * 10 + r;
            x = x / 10;
        }
        cout << "\n"
             << s;
        a = sqrt(s);
        cout << a;
        while (a > 0)
        {
            r = a % 10;
            s = s * 10 + r;
            a = a / 10;
        }
        cout << "\n"
             << s;
        if (s == n)
        {
            cout << "Adam Number";
        }
        else
        {
            cout << "Non Adam Number";
        }
    }
    break;
    case 9:
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                s = 1;
            }
            if (s == 0)
            {
                cout << "Prime Number";
            }
            else
            {
                cout << "Not Prime Number";
            }
        }
    }
    break;
    case 10:
        for (i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                s = s + i;
            }
            if (s == n)
            {
                cout << "Perfect Number";
            }
            else
            {
                cout << "Not Perfect Number";
            }
        }
        break;
    default:
    {
        cout << "Invalid Number of Choise";
    }
    }
}
