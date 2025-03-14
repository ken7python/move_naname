//% cc test.c CHero.c -lraylib && ./a.out
#include "raylib.h"
#include "CHero.h"

int main(){

    InitWindow(800, 450 ,"Move Naname");
    SetTargetFPS(60);

    CHero hero;
    CHero_(&hero,400,225,30,0.0,BLUE);

    while(!WindowShouldClose()){
        if(IsKeyPressed(KEY_SPACE)){
            CHero_muki(&hero,45);
        }

        if(IsKeyDown(KEY_LEFT)){
            CHero_rot(&hero,-3);
        }
        if(IsKeyDown(KEY_RIGHT)){
            CHero_rot(&hero,3);
        }

        if(IsKeyDown(KEY_UP)){
            CHero_walk(&hero, 5);
        }

        BeginDrawing();
        ClearBackground(RAYWHITE);
            CHero_draw(&hero);
        
        EndDrawing();
    }

    return 0;
}