#include<iostream>
using namespace std;

int main()
{
    int i, j, lines;
    cout << "enter the lines:-";
    cin >> lines;

    for (int i = 1; i <= lines; i++)
    {
        char k = 'A';
        for (int j = 1; j <= 2 * lines - 1; j++)
        {
            // ❌ Your original condition had a logic error:
            // if(j <= lines+1-i || j <= lines+1+i)
            // That always printed because the second condition was always true.

            // ✅ Correct condition: only print inside the pyramid bounds
            if (j >= lines + 1 - i || j <= lines - 1 + i)
            {
                cout << k;

                // Character logic: left of center = k++, right of center = k--
                if (j < lines)
                    k++;
                else
                    k--;
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
