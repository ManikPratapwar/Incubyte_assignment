#include <bits/stdc++.h>
using namespace std;

class craft
{
private:
    int x, y, z;    // Current position (x, y, z)
    char direction; // Current direction (N, S, E, W, U, D)
    char origin;

public:

    // Declaring Constructor craft with x,y,z co-ordinates and directon.
    craft(int &initialX, int &initialY, int &initialZ, char &initialDirection, char org)
    {
        x = initialX;
        y = initialY;
        z = initialZ;
        direction = initialDirection;
        origin = org;
    }
    void back() // b
    {
        switch (direction)
        {
        case 'N':
            y--;
            break;
        case 'S':
            y++;
            break;
        case 'E':
            x--;
            break;
        case 'W':
            x++;
            break;
        case 'U':
            z--;
            break;
        case 'D':
            z++;
            break;
        }
    }

    // Moving front craft
    void front() // f
    {
        switch (direction)
        {
        case 'N':
            y++;
            break;
        case 'S':
            y--;
            break;
        case 'E':
            x++;
            break;
        case 'W':
            x--;
            break;
        case 'U':
            z++;
            break;
        case 'D':
            z--;
            break;
        }
    }
};
