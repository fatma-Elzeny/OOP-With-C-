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

class Line
{

private:
    point start;

    point end;

public:
    Line() : start(), end()
    {

        cout << "\n Line default constructor is calling" << endl;
    }

    Line(int x1, int y1, int x2, int y2) : start(x1, y1), end(x2, y2)
    {

        cout << "\n Line with 4 parameters constructor is calling" << endl;
    }

    Line(point p1, point p2)
    {

        start = p1;
        end = p2;
    }

    ~Line()
    {
        cout << "\n Line destructor is calling" << endl;
    }

    void print()
    {

        cout << "\nStart :";

        start.print();

        cout << "\nEnd :";

        end.print();
    }
};
class circle
{

private:
    point center;

    int rad;

public:
    circle() : center(0)
    {

        rad = 0;

        cout << "\n circle default constructor is calling" << endl;
    }

    circle(int x1, int y1, int r) : center(x1, y1)
    {

        rad = r;

        cout << "\n circle with 3 parameters constructor is calling" << endl;
    }

    ~circle()
    {

        cout << "\n circle destructor is calling" << endl;
    }

    void print()
    {

        cout << "\ncenter:";

        center.print();

        cout << "\n Radius = " << rad << endl;
    }
};

class Rect
{

private:
    point UL;

    point LR;

public:
    Rect() : UL(), LR()
    {

        cout << "\n Rect default constructor is calling" << endl;
    }

    Rect(int x1, int y1, int x2, int y2) : UL(x1, y1), LR(x2, y2)
    {

        cout << "\n Rect with 4 parameters constructor is calling" << endl;
    }

    Rect(point p1, point p2)
    {

        UL = p1;
        LR = p2;
    }

    ~Rect()
    {

        cout << "\n circle destructor is calling" << endl;
    }

    void print()
    {

        cout << "\nUpper Left:";

        UL.print();

        cout << "\nLower Right:";

        LR.print();
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