#ifndef GAME_C
#define GAME_C

#include "raylib.h"

typedef enum {
    GAMESTATE_TITLESCREEN,
    GAMESTATE_RUNNING,
    GAMESTATE_PAUSED
} GameState;

typedef struct {
    GameState state;
} Game;

Game game_init() {
    return (Game) {
        .state = GAMESTATE_TITLESCREEN
    };
}

void game_deinit(Game* game) {
    // TODO
}

void game_titlescreen(Game* game) {

}



#endif // GAME_C