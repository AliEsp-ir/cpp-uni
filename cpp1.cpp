#include <iostream>
using namespace std;

class caculator
{
public:
    double Floor(int x)
    {
        return x;
    };

    double add(int x, int y)
    {
        return x + y;
    };

    double Max1(double x, double y)
    {
        if (x > y)
        {
            return x;
        }
        else
        {
            return y;
        }
    }

    bool find1(string &str, char ch)
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == ch)
            {
                return true;
            }
        }
        return false;
    }

    int max2(int arr[], int p)
    {
        int maxValue = arr[0];
        for (int i = 1; i < p; i++)
        {
            if (arr[i] > maxValue)
            {
                maxValue = arr[0];
            }
        }
        return maxValue;
    }
};

int main()
{

    caculator aval;
    double w = aval.Floor(2.3);
    cout << w << "\n";

    caculator dovom;
    double f = dovom.add(-2, 3);
    cout << f << "\n";

    caculator sevom;
    double s = sevom.Max1(10.5, 7.5);
    cout << s << "\n";

    caculator chaharom;
    string yek = "hello";
    char doo = 'e';
    cout << (chaharom.find1(yek, doo) ? "true" : "false") << "\n";

    caculator panjom;
    int addad[] = {2, 1, 6, 7};
    int n = 5;
    cout << "Maximum value is: " << panjom.max2(addad, n) << "\n";
}
