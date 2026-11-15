#include "raylib.h"
#include <vector>
// using namespace std;

struct System ;

class MapObject
{
public:
    MapObject(float x, float y, float width, float height);
    void Update();
    void Draw();
    bool IsHovered();



private:
    float x, y, width, height;
    bool isSelected ;
    Color color;


    friend struct System;  // Declare System as a friend of MapObject
};


struct System
{
    std::vector<MapObject> mapObjects;
    void Start() , Update() , Draw() ;

};
