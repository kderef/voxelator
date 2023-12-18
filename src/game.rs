use macroquad::prelude::*;

#[derive(Debug)]
pub enum GameState {
    TitleScreen,
    Paused,
    Playing,
}

pub struct Game {
    state: GameState,
    passed_time: f32,
    window_width: u32,
    window_height: u32,
}

impl Game {
    pub fn new() -> Self {
        Self {
            state: GameState::TitleScreen,
            passed_time: 0.0,
            window_width: 0,
            window_height: 0
        }
    }

    /// called every frame
    pub fn draw(&mut self) {
        // 1.
        let dt = get_frame_time();
        self.passed_time += dt;

        match self.state {
            GameState::title_screen => self.draw_title_screen(),
            GameState::Paused => self.draw_pause_screen(),
            GameState::Playing => self.draw_run(),
        }

        clear_background(BLACK);
    }

    pub fn draw_title_screen(&mut self) {}
    pub fn draw_pause_screen(&mut self) {}
    pub fn draw_run(&mut self) {}
}
