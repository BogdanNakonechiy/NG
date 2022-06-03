#include <iostream>
#include <random>
#include <time.h>

using namespace std;

int main()
{
    rand(time(0));
    
    const int worldSizeY = 20;
    const int worldSizeX = 70;

    char action = -1;

    char map[worldSizeY][worldSizeX];
    char pMap[worldSizeY][worldSizeX];

    int playerPosX = worldSizeX / 2;
    int playerPosY = worldSizeY / 2;

    int boatPosX = worldSizeX / 10;
    int boatPosY = rand() % worldSizeY - 1;
    
    if (boatPosY == 0)
        boatPosY = 1;

    for (int y = 0; y < worldSizeY; y++)
    {
        for (int x = 0; x < worldSizeX; x++)
        {
            switch (rand() % 15)
            {
             case 1: map[y][x] = 't'; break;
             case 2: map[y][x] = 's'; break;
             default: map[y][x] = ' ';
            }
            if(x <= worldSizeX / 10 && y > 0 && y << worldSizeY)
                map[y][x] = '~';
            //map[boatPosY][boatPosX + 1] = 'B';
            map[0][x] = '=';
            map[worldSizeY - 1][x] = '=';
            pMap[y][x] = '*';
        }
    }

    while (true)
    {
        system("cls");
        for (int y = 0; y < worldSizeY; y++)
        {
            for (int x = 0; x < worldSizeX; x++)
            {
                
                if (y == playerPosY && x == playerPosX)
                    cout << "@";
                else
                    cout << pMap[y][x];
            }
            cout << endl;
        }
        cout << ">";
        cin >> action;
        switch (action)
        {
        case 'w': if (map[playerPosY - 1][playerPosX] == ' ') playerPosY--; break;
        case 's': if (map[playerPosY + 1][playerPosX] == ' ')playerPosY++; break;
        case 'a': if (map[playerPosY][playerPosX - 1] == ' ' && playerPosX != 0)playerPosX--; break;
        case 'd': if (map[playerPosY][playerPosX + 1] == ' ' && playerPosX != worldSizeX - 1)playerPosX++; break;
        }

        pMap[playerPosY - 1][playerPosX] = map[playerPosY - 1][playerPosX]; // up
        pMap[playerPosY + 1][playerPosX] = map[playerPosY + 1][playerPosX]; // down
        if (playerPosX != 0)
        {
            pMap[playerPosY][playerPosX - 1] = map[playerPosY][playerPosX - 1]; // left
            pMap[playerPosY - 1][playerPosX - 1] = map[playerPosY - 1][playerPosX - 1]; // left up
            pMap[playerPosY + 1][playerPosX - 1] = map[playerPosY + 1][playerPosX - 1]; // left down
        }
        if (playerPosX != worldSizeX - 1)
        {
            pMap[playerPosY][playerPosX + 1] = map[playerPosY][playerPosX + 1]; // right
            pMap[playerPosY - 1][playerPosX + 1] = map[playerPosY - 1][playerPosX + 1]; // right up
            pMap[playerPosY + 1][playerPosX + 1] = map[playerPosY + 1][playerPosX + 1]; // right down
        }
    }
    return 0;
}