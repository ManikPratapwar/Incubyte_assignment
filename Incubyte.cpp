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
    void left() // l
    {
        switch (direction)
        {
        case 'N':
            direction = 'W';
            origin = 'W';
            break;
        case 'S':
            direction = 'E';
            origin = 'E';
            break;
        case 'E':
            direction = 'N';
            origin = 'N';
            break;
        case 'W':
            direction = 'S';
            origin = 'S';
            break;
        case 'D':
            if (origin == 'N')
            {
                direction = 'W';
                origin = 'W';
                break;
            }
            else if (origin == 'S')
            {
                direction = 'E';
                origin = 'E';
                break;
            }
            else if (origin == 'E')
            {
                direction = 'N';
                origin = 'N';
                break;
            }
            else
            {
                direction = 'S';
                origin = 'S';
                break;
            }
        case 'U':
            if (origin == 'N')
            {
                direction = 'W';
                origin = 'W';
                break;
            }
            else if (origin == 'S')
            {
                direction = 'E';
                origin = 'E';
                break;
            }
            else if (origin == 'E')
            {
                direction = 'N';
                origin = 'N';
                break;
            }
            else
            {
                direction = 'S';
                origin = 'S';
                break;
            }
        }
    }

    // Moving craft Right
    void right() // r
    {

        switch (direction)
        {
        case 'N':
            direction = 'E';
            origin = 'E';
            break;
        case 'S':
            direction = 'W';
            origin = 'W';
            break;
        case 'E':
            direction = 'S';
            origin = 'S';
            break;
        case 'W':
            direction = 'N';
            origin = 'N';
            break;
        case 'D':
            if (origin == 'N')
            {
                direction = 'E';
                origin = 'E';
                break;
            }
            else if (origin == 'S')
            {
                direction = 'W';
                origin = 'W';
                break;
            }
            else if (origin == 'E')
            {
                direction = 'S';
                origin = 'S';
                break;
            }
            else
            {
                direction = 'N';
                origin = 'N';
                break;
            }
        case 'U':
            if (origin == 'N')
            {
                direction = 'E';
                origin = 'E';
                break;
            }
            else if (origin == 'S')
            {
                direction = 'W';
                origin = 'W';
                break;
            }
            else if (origin == 'E')
            {
                direction = 'S';
                origin = 'S';
                break;
            }
            else
            {
                direction = 'N';
                origin = 'N';
                break;
            }
        }
    }

    // Moving craft Up
    void up() // u
    {
        if (direction != 'U')
        {
            direction = 'U';
        }
    }

    // Moving craft Down
    void down() // d
    {
        if (direction != 'D')
        {
            direction = 'D';
        }
    }
    // Printing x,y,z co-ordinates and direction
    void PrintPosition()
    {
        cout << "Current Position: (" << x << ", " << y << ", " << z << "), Direction: " << direction << endl;
    }

    // Printing Final Position of craft
    void pos()
    {
        cout << "Final Position: (" << x << ", " << y << ", " << z << ")" << endl;
    }

    // Printing Final Direction of craft
    void FinalDirection()
    {
        cout << "Final Direction: " << direction << endl;
    }
};

int main()
{
    int x = 0, y = 0, z = 0;
    char dir = 'N';
    craft Chandrayaan3(x, y, z, dir, 'N');

    string instruct;
    cin >> instruct;
    cout << endl;
    // Chandrayaan3.PrintPosition();
    for (int i = 0; i < instruct.length(); i++)
    {
        char code = instruct[i];
        switch (code)
        {
        case 'f':
            Chandrayaan3.front();
            Chandrayaan3.PrintPosition();
            break;
        case 'b':
            Chandrayaan3.back();
            Chandrayaan3.PrintPosition();
            break;
        case 'l':
            Chandrayaan3.left();
            Chandrayaan3.PrintPosition();
            break;
        case 'r':
            Chandrayaan3.right();
            Chandrayaan3.PrintPosition();
            break;
        case 'u':
            Chandrayaan3.up();
            Chandrayaan3.PrintPosition();
            break;
        case 'd':
            Chandrayaan3.down();
            Chandrayaan3.PrintPosition();
            break;
        }
    }

    // Chandrayaan3.PrintPosition();
    cout << endl;

    Chandrayaan3.pos();
    cout << endl;

    Chandrayaan3.FinalDirection();
    cout << endl;
    return 0;
}
