#include <iostream.h>

#include <conio.h>

class point
{

private:
    int x, y;

public:
    point()
    {

        x = y = 0;

        cout << "point default constructor is calling " << endl;
    };

    point(int m)
    {

        x = y = m;

        cout << "point one parameter constructor is calling " << endl;
    };

    point(int a, int b)
    {

        x = a;

        y = b;

        cout << "point Two parameter constructor is calling " << endl;
    };

    ~point()
    {

        cout << "point destructor is calling " << endl;
    }

    void operator()(int a, int b)
    {

        x = a;

        y = b;
    }

    void print() { cout << "\n point Data: x = " << x << " y=" << y << endl; }

    void setX(int m)
    {

        x = m;
    }
    void setY(int n)
    {

        y = n;
    }

    void setXY(int m, int n)
    {

        x = m;

        y = n;
    }

    int getX()
    {

        return x;
    }

    int getY()
    {

        return y;
    }
};
int main()
{
    Point p1(12, 20);
    p1.print();
    p1(-5, 132);
    p1.print();
    getch();
    return 0;
}