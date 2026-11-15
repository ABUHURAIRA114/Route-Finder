#pragma once
#include "raylib.h"
#include "Prototypes.h"
#include <vector>
using namespace std;

class BoxObject
{
    float x, y, width, height;
    bool isSelected ;
    Color color;

    public:
    BoxObject(float x, float y, float width, float height, Color c);

    void Draw();
    bool IsHovered();

    friend struct System;  // Declare System as a friend of MapObject
};

class MapObject : BoxObject
{
public:
    MapObject(float x, float y, float width, float height, Color c);
    void Update();
    
    friend struct System;  // Declare System as a friend of MapObject
};

struct System
{
    vector<MapObject> mapObjects;
    void Start() , Update() , Draw() ;

};
