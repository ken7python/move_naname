#include "raylib.h"

typedef struct CHero CHero;

struct CHero{
    int x;
    int y;
    int r;
    float d;
    Color c;
};

void CHero_(CHero* self,int x,int y,int r,int d,Color c);
void CHero_draw(CHero* self);
void CHero_muki(CHero* self,float d);
void CHero_rot(CHero* self,float d);
void CHero_walk(CHero* self,int ho);