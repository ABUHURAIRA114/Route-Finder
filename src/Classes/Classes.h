#pragma once
#include "raylib.h"
#include "Prototypes.h"
#include <vector>
#include <string>
using namespace std;

struct BoxObject
{
    string name;
    float x, y, width, height;
    bool isSelected;
    Color color;

    BoxObject(string name, float x, float y, float width, float height, Color c);

    void Draw();
    bool IsHovered();
};

struct MapObject : BoxObject
{

    MapObject(string name, float x, float y, float width, float height, Color c);
    void Update();
};

struct System
{
    vector<MapObject> mapObjects;
    void Start(), Update(), Draw();
};
