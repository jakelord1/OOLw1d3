#include <iostream>
using namespace std;
class Fraction {
private:
    int a;
    int b;
public:
    int GetA() {
        return a;
    }
    int GetB() {
        return b;
    }
    void Enter(int _a, int _b) {
        a = _a;
        b = _b;
    }
    Fraction Summ(Fraction d) {
        Fraction c;
        c.Enter(d.GetA() * b + a * d.GetB(), b * d.GetB());
        return c;
    }
    Fraction Minus(Fraction d) {
        Fraction c;
        c.Enter(a * d.GetB() - d.GetA() * b, b * d.GetB());
        return c;
    }
    Fraction Mult(Fraction d) {
        Fraction c;
        c.Enter(d.GetA() * a, d.GetB()*b);
        return c;
    }
    Fraction Equal(Fraction d) {
        Fraction c;
        c.Enter(a * d.GetB(), d.GetA() * b);
        return c;
    }
    void Show() {
        cout << a << "/" << b << " ";
    }
};
int main()
{
    Fraction A;
    A.Enter(6, 2);
    Fraction B;
    B.Enter(8, 4);
    A.Show();
    cout << endl;
    B.Show();
    cout << endl;

    A.Show();
    cout << " + ";
    B.Show();
    cout << " = ";
    A.Summ(B).Show();
    cout << endl;

    A.Show();
    cout << " - ";
    B.Show();
    cout << " = ";
    A.Minus(B).Show();
    cout << endl;

    A.Show();
    cout << " * ";
    B.Show();
    cout << " = ";
    A.Mult(B).Show();
    cout << endl;

    A.Show();
    cout << " / ";
    B.Show();
    cout << " = ";
    A.Equal(B).Show();
    cout << endl;
}
