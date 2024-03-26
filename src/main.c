// --- Including Binary Data
#define INCBIN_STYLE INCBIN_STYLE_SNAKE
#include "incl_incbin.h"

// --- Game & UI
#include "game.c"
#include "incl_raygui.h"

// --- Extra math-related functions
#include "math.c"

#include <stdio.h>
#include "raylib.h"

#include "ui.c"

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600
#define WINDOW_TITLE "Voxelator"

int main(int argc, char** argv) {
    // ignore
    (void)argc;
    (void)argv;

    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITLE);
    SetExitKey(0);
    SetTargetFPS(60);

    ui_load_style();

    Game game = game_init();

    while (!WindowShouldClose()) {
        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
            GuiButton(rect(0, 0, 50, 50), "Hello world!");

        EndDrawing();
    }

    CloseWindow();

    game_deinit(&game);

    return 0;
}