#include "Intermediate.h"

System sys;

int main()
{
    string temp = "black";
    MapObject obj1("Object 1", 100, 100, 50, 50, GRAY);
    sys.mapObjects.push_back(MapObject("Object 2", 200, 150, 75, 75, RED));
    sys.mapObjects.push_back(MapObject("Object 3", 300, 200, 100, 100, GRAY));
    const Color darkGreen = {20, 160, 133, 255};

    int screenWidth = 800;
    int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "My first RAYLIB program!");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        temp = "None";
        for (auto &mapObject : sys.mapObjects)
        {
            if (mapObject.IsHovered())
            {
                temp = mapObject.name;
                break;
            }
        }

        BeginDrawing();
        ClearBackground(darkGreen);
        sys.Draw();
        DrawText(temp.c_str(), 10, 10, 20, RAYWHITE);
        EndDrawing();
    }

    CloseWindow();
}