#pragma once
#include "../Classes/Classes.h"

void System::Draw()    //void DrawRectangle(int posX, int posY, int width, int height, Color color);  
{
    for (auto& mapObject : mapObjects)
    {
        DrawRectangle(mapObject.x, mapObject.y, mapObject.width, mapObject.height, mapObject.color);
    }
}