#include<iostream>
using namespace std;

int main()
{
    int n;

    for (n = 1; n <= 10; n++)
    {
        cout << " F1 ANSWER IS :" << F1(n) << "\n";
    }
    for (n = 1; n <= 10; n++)
    {
        cout << " F2 ANSWER IS :" << F2(n) << "\n";
    }
   
}

for (n = 1; n <= 10; n++)
{
int F1(int n)
{
        if (n == 0)
        {
            return 1;
        }
        else
        {
            return  F1(n - 1) + F1(n ‐ 1);

        }
    }

}
for (n = 1; n <= 10; n++)
{
int F2(int n)
{
        if (n == 0)
        {
            return 1;
        }
        else if (n % 2 == 0)
        {
            int result = F2(n / 2);
            return result * result;
        }
        else
            return 2 * F2(n ‐ 1);
    }
}