#include<iostream>
#include<math.h>
#include<Windows.h>
using namespace std;

enum ConsoleColor
{
    Black = 0,
    Blue = 1,
    Green = 2,
    Cyan = 3,
    Red = 4,
    Magenta = 5,
    Brown = 6,
    LightGray = 7,
    DarkGray = 8,
    LightBlue = 9,
    LightGreen = 10,
    LightCyan = 11,
    LightRed = 12,
    LightMagenta = 13,
    Yellow = 14,
    White = 15
};

void SetColor(ConsoleColor text, ConsoleColor background)
{
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}


int lukeLemer(int p) 
{
    register int d;

    for (d = 2; d <= p / 2; d++)
        if (p % d == 0)
            return 0;
    return 1;
}

int main() 
{
    int n, last, last1;
    cout << "Input n: ";
    cin >> n;
    cout << endl;
    last = 0;
    last1 = 0;
    for (int i = 1; last1 < n; i++) {
        cout << pow(2, i) - 1 << "  " << "\n";
        last1++;


        /*for (int i = 2; last < n; i++)*/

            //if (lukeLemer(i))

            //{
            //    cout << "Simple numbers";
            //    int mersenne_num = pow(2, i) - 1;
            //    SetColor(Green, Black);
            //    cout << mersenne_num << endl;
            //    last++;

            //}
    }
    SetColor(White, Black);
    return 0;
    
}
