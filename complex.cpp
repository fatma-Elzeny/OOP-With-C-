#include <iostream.h>

#include <conio.h>

class complex
{

private:
    float real;

    float imag;

public:
    complex();

    complex(float r);

    complex(float r, float i);

    ~complex();

    void setReal(float r);

    void setImag(float i);

    float getReal();

    float getImag();

    complex add(complex c1);

    complex sub(complex c1);

    void setAll();

    void setAll(float f);

    void setAll(float r, float i);

    void print();
};

complex add(complex c1, complex c2);

complex substract(complex c1, complex c2);

void main(void)
{

    clrscr();

    Complex myComp1, myComp2(3, 4), resultComp(5);
    myComp1.setReal(7);
    myComp1.setImag(2);
    resultComp = add(myComp1, myComp2);
    resultComp.print();
    resultComp = myComp1.sub(myComp2);
    resultComp.print();
    getch();
}

complex ::complex()
{

    real = imag = 0;

    cout << "\n Default constructor is calling";
}

complex ::complex(float r, float i)
{

    real = r;

    imag = i;

    cout << "\n Constructor with two parameters is calling";
}

complex ::complex(float r)
{

    real = r;

    imag = 0;

    cout << "\n Constructor with one parameter is calling ";
}

complex ::~complex()
{

    cout << "\n Destructor is calling\n ";
}

void complex ::setReal(float r)
{

    real = r;
}
void complex ::setImag(float i)
{

    imag = i;
}

float complex ::getReal()
{

    return real;
}

float complex ::getImag()
{

    return imag;
}

void complex ::print()
{

    if (imag < 0)
    {

        cout << real << " - " << -imag << "i" << endl;
    }
    else
    {

        cout << real << " + " << imag << "i" << endl;
    }
}

complex add(complex c1, complex c2)
{

    complex temp;

    temp.setReal(c1.getReal() + c2.getReal());

    temp.setImag(c1.getImag() + c2.getImag());

    return temp;
}

complex substract(complex c1, complex c2)
{

    complex temp;

    temp.setReal(c1.getReal() - c2.getReal());

    temp.setImag(c1.getImag() - c2.getImag());

    return temp;
}
complex complex ::add(complex c1)
{

    complex temp;

    temp.real = this->real + c1.real;

    temp.imag = this->imag + c1.imag;

    return temp;
}

complex complex ::sub(complex c1)
{

    complex temp;

    temp.real = this->real - c1.real;

    temp.imag = this->imag - c1.imag;

    return temp;
}

void complex ::setAll()
{

    real = imag = 0;
}
void complex ::setAll(float f)
{

    real = f;

    imag = f;
}

void complex ::setAll(float r, float i)
{

    real = r;

    imag = i;
}