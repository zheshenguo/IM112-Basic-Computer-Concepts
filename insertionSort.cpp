#include <iostream>
#include <cstdlib>

using namespace std;

void front_ascending()
{
    int n = 8, data[9]{ 0, 3, 5, 2, 1, 8, 7, 6, 4 };

    int i = 0, j = 0;

    cout << "left to right, ascending order\n";
    cout << "Original Data:";
    for (int i = 1; i <= n; i++)
    {
        cout << data[i] << " ";
    }
    cout << "\n";

    //  Start Algorithm
    for (int i = 2; i <= n; i++)
    {
        int value = data[i];
        int j = i - 1;
        while (j >= 1 && data[j] > value)
        {
            data[j + 1] = data[j];
            j = j - 1;
        }
        data[j + 1] = value;
        cout << "Pass" << i - 1 << ": ";
        for (int k = 1; k <= n; k++)
        {
            cout << data[k] << " ";
        }
        cout << "\n";
    }
    //  End Algorithm

    cout << "Final result:";
    for (int i = 1; i <= n; i++)
    {
        cout << data[i] << " ";
    }
    cout << "\n\n";
}

void front_descending()
{
    int n = 8, data[9]{ 0, 3, 5, 2, 1, 8, 7, 6, 4 };
    int i = 0, j = 0;

    cout << "left to right, descending order\n";
    cout << "Original Data:";
    for (int i = 1; i <= n; i++)
    {
        cout << data[i] << " ";
    }
    cout << "\n";

    //  Start Algorithm
    for (int i = 2; i <= n; i++)
    {
        int value = data[i];
        int j = i - 1;
        while (j >= 1 && data[j] < value)
        {
            data[j + 1] = data[j];
            j = j - 1;
        }
        data[j + 1] = value;
        cout << "Pass" << i - 1 << ": ";
        for (int k = 1; k <= n; k++)
        {
            cout << data[k] << " ";
        }
        cout << "\n";
    }
    //  End Algorithm

    cout << "Final result:";
    for (int i = 1; i <= n; i++)
    {
        cout << data[i] << " ";
    }
    cout << "\n\n";
}

void back_ascending()
{
    int n = 8, data[9]{ 0, 3, 5, 2, 1, 8, 7, 6, 4 };
    int i = 0, j = 0;

    cout << "right to left, ascending order\n";
    cout << "Original Data:";
    for (int i = 1; i <= n; i++)
    {
        cout << data[i] << " ";
    }
    cout << "\n";

    //  Start Algorithm
    for (int i = n - 1; i >= 1; i--)
    {
        int value = data[i];
        int j = i + 1;
        while (j <= n && data[j] < value)
        {
            data[j - 1] = data[j];
            j = j + 1;
        }
        data[j - 1] = value;
        cout << "Pass" << n - i << ": ";
        for (int k = 1; k <= n; k++)
        {
            cout << data[k] << " ";
        }
        cout << "\n";
    }

    cout << "Final result:";
    for (int i = 1; i <= n; i++)
    {
        cout << data[i] << " ";
    }
    cout << "\n\n";
}

void back_descending()
{
    int n = 8, data[9]{ 0, 3, 5, 2, 1, 8, 7, 6, 4 };
    int i = 0, j = 0;

    cout << "right to left, ascending order\n";
    cout << "Original Data:";
    for (int i = 1; i <= n; i++)
    {
        cout << data[i] << " ";
    }
    cout << "\n";

    //  Start Algorithm
    for (int i = n - 1; i >= 1; i--)
    {
        int value = data[i];
        int j = i + 1;
        while (j <= n && data[j] > value)
        {
            data[j - 1] = data[j];
            j = j + 1;
        }
        data[j - 1] = value;
        cout << "Pass" << n - i << ": ";
        for (int k = 1; k <= n; k++)
        {
            cout << data[k] << " ";
        }
        cout << "\n";
    }

    cout << "Final result:";
    for (int i = 1; i <= n; i++)
    {
        cout << data[i] << " ";
    }
    cout << "\n\n";
}

int main()
{
    front_ascending();
    front_descending();
    back_ascending();
    back_descending();
    return 0;
}
