#include "System.h"

MapObject::MapObject(float x, float y, float width, float height)
    : x(x), y(y), width(width), height(height), isSelected(false), color(RED) {}

void System::Draw()    //void DrawRectangle(int posX, int posY, int width, int height, Color color);  
{
    for (auto& mapObject : mapObjects)
    {
        DrawRectangle(mapObject.x, mapObject.y, mapObject.width, mapObject.height, mapObject.color);
    }
}