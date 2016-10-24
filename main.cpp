//recursively printing backwards and forwards
#include <iostream>

using namespace std;

void print_digits(int n)
{
    if (n==0)
        return;
    else
    {
        print_digits(n/10);
        cout << n%10 << " ";
    }
}

void print_digits_rev(int n)
{
    if (n==0)
        return;
    else
    {
        cout << n%10 << " ";
        print_digits_rev(n/10);
    }
}

int main()
{
    int n = 7436901;

    print_digits(n);
    cout << endl;
    print_digits_rev(n);

    return 0;
}
