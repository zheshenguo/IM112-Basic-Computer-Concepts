#include <iostream>
#include <cstdlib>

using namespace std;

void front_ascending()
{
    int n = 8, data[9]{ 0, 3, 5, 2, 1, 8, 7, 6, 4 };

    cout << "left to right, ascending order\n";
    cout << "Original Data:";
    for (int i = 1; i <= n; i++)
    {
        cout << data[i] << " ";
    }
    cout << "\n";
    for (int i = 1; i <= (n - 1); i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            if (data[j] > data[j + 1])
            {
                swap(data[j], data[j + 1]);
            }
        }
        cout << "Pass" << i << ": ";
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

void front_descending()
{
    int n = 8, data[9]{ 0, 3, 5, 2, 1, 8, 7, 6, 4 };

    cout << "left to right, descending order\n";
    cout << "Original Data:";
    for (int i = 1; i <= n; i++)
    {
        cout << data[i] << " ";
    }
    cout << "\n";
    for (int i = 1; i <= (n - 1); i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            if (data[j] < data[j + 1])
            {
                swap(data[j], data[j + 1]);
            }
        }
        cout << "Pass" << i << ": ";
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

void back_ascending()
{
    int n = 8, data[9]{ 0, 3, 5, 2, 1, 8, 7, 6, 4 };

    cout << "right to left, ascending order\n";
    cout << "Original Data:";
    for (int i = 1; i <= n; i++)
    {
        cout << data[i] << " ";
    }
    cout << "\n";
    for (int i = 1; i <= (n - 1); i++)
    {
        for (int j = n; j >= (i + 1); j--)
        {
            if (data[j - 1] > data[j])
            {
                swap(data[j], data[j - 1]);
            }
        }
        cout << "Pass" << i << ": ";
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

    cout << "right to left, descending order\n";
    cout << "Original Data:";
    for (int i = 1; i <= n; i++)
    {
        cout << data[i] << " ";
    }
    cout << "\n";
    for (int i = 1; i <= (n - 1); i++)
    {
        for (int j = n; j >= (i + 1); j--)
        {
            if (data[j - 1] < data[j])
            {
                swap(data[j], data[j - 1]);
            }
        }
        cout << "Pass" << i << ": ";
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
