#include "../Classes/Classes.h"

BoxObject::BoxObject(string name, float x, float y, float width, float height, Color c)
    : name(name), x(x), y(y), width(width), height(height), color(c) {}

bool BoxObject::IsHovered()
{
    Vector2 mouse = GetMousePosition();

    if (mouse.x < x   || mouse.x > x + width ) return false;
    
    if( mouse.y < y   || mouse.y > y + height  ) return false ;
    
    return true;
}

bool BoxObject::IsClicked(){
    if(!IsMouseButtonPressed(0))
        return false;

    if (!IsHovered())
        return false;

    return true;
}