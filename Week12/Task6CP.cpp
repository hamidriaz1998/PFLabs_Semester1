#include <iostream>
using namespace std;
string fire(string coord, char ships[][5]);
main()
{
    char battleShip[5][5] = {
        {'.', '.', '.', '*', '*'},
        {'.', '*', '.', '.', '.'},
        {'.', '*', '.', '.', '.'},
        {'.', '*', '.', '.', '.'},
        {'.', '.', '*', '*', '.'}};
    string coords;
    cout << "Enter coordinates to fire torpedo (e.g., A1, B3, E5): ";
    cin >> coords;
    cout << "Result: " << fire(coords, battleShip);
}
string fire(string coords, char ships[][5])
{
    int row = coords[0] - 'A';
    int col = coords[1] - '1';
    if (ships[row][col] == '*')
    {
        return "BOOM";
    }
    else
    {
        return "Splash";
    }
}