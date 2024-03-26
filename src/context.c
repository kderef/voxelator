#ifndef CONTEXT_C
#define CONTEXT_C

#include <stdbool.h>
#include "raylib.h"

typedef struct {
    int window_width;
    int window_height;
    bool mouse_left_down;
    bool mouse_right_down;
    int last_key;
} Ctx;

static Ctx ctx = {0};
    
static inline void ctx_update() {
    ctx.mouse_left_down = IsMouseButtonDown(MOUSE_BUTTON_LEFT);
    ctx.mouse_right_down = IsMouseButtonDown(MOUSE_BUTTON_RIGHT);
    ctx.window_width = GetScreenWidth();
    ctx.window_height = GetScreenHeight();
    ctx.last_key = GetKeyPressed();
}


#endif // CONTEXT_C