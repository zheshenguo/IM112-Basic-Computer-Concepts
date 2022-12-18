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
        int min = i;
        for (int j = (i + 1); j <= n; j++)
        {
            if(data[j] < data[min])
            {
                min = j;
            }
        }
        swap(data[min], data[i]);
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
        int max = i;
        for (int j = (i + 1); j <= n; j++)
        {
            if(data[j] > data[max])
            {
                max = j;
            }
        }
        swap(data[max], data[i]);
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
    for (int i = n; i >= 2; i--)
    {
        int max = i;
        for (int j = (i - 1); j >= 1; j--)
        {
            if(data[j] > data[max])
            {
                max = j;
            }
        }
        swap(data[max], data[i]);
        cout << "Pass" << n - i + 1 << ": ";
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
    for (int i = n; i >= 2; i--)
    {
        int min = i;
        for (int j = (i - 1); j >= 1; j--)
        {
            if(data[j] < data[min])
            {
                min = j;
            }
        }
        swap(data[min], data[i]);
        cout << "Pass" << n - i + 1 << ": ";
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
