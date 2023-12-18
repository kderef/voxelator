mod game;

use macroquad::prelude::*;
use game::{GameState, Game};

#[macroquad::main("Shartcraft")]
async fn main() {
    let mut game = Game::new();

    loop {
        game.draw();
        next_frame().await;
    }
}
