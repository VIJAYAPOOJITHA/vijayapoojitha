#include<iostream>
using namespace std;

int main()
{
    int n;

    
    cout << " F1 ANSWER IS :" << F1(int n) << "\n";
   
    cout << " F2 ANSWER IS :" << F2(int n) << "\n";

   
}
int F1(int n)
{
    for (n = 1; n <= 10; n++)
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
int F2(int n)
{
    for (n = 1; n <= 10; n++)
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