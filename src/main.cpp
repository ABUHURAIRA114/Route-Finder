#include "FuncDef.h"

System sys;

int main() 
{
    MapObject obj1(100, 100, 50, 50);
    sys.mapObjects.push_back(MapObject(100, 100, 50, 50));
    sys.mapObjects.push_back(MapObject(200, 150, 75, 75));
    sys.mapObjects.push_back(MapObject(300, 200, 100, 100));
    const Color darkGreen = {20, 160, 133, 255};
    
    int screenWidth = 800;
    int screenHeight = 600;
     
    InitWindow(screenWidth, screenHeight, "My first RAYLIB program!");
    SetTargetFPS(60);
    
    while (!WindowShouldClose())
    { 
        
        BeginDrawing();
            ClearBackground(darkGreen); 
            sys.Draw();
        EndDrawing();
    }
    
    CloseWindow();
}