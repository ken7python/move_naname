#include "CHero.h"
#include <math.h>

void CHero_(CHero* self,int x,int y,int r,int d,Color c){
    self->x = x;
    self->y = y;
    self->r = r;
    self->r = r;
    self->d = d;
}

void CHero_draw(CHero* self){
    DrawRectanglePro(
        (Rectangle){self->x,self->y,self->r*2,self->r*2},
        (Vector2){self->r,self->r},
        self->d,
        self->c
    );
}

void CHero_muki(CHero* self,float d){
    self->d = d;
}
void CHero_rot(CHero* self,float d){
    self->d += d;
}

void CHero_walk(CHero* self,int ho){
    double dx = ho * sin(self->d * 3.14 / 180);
    double dy = ho * cos(self->d * 3.14 / 180);
    self->x += dx;
    self->y -= dy;
}