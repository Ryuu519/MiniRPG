#include "Game.h"
#include "Logger.h"
#include <iostream>

bool Game::Init() {
    return true;
}

void Game::ProcessInputs() {
    TRPG_LOG("Process Inputs");
}

void Game::Update() {
    TRPG_ERROR("Update");
}

void Game::Draw() {
    TRPG_LOG("Draw()");
}

Game::Game()
    : Running(true)
{

}

Game::~Game() {

}

void Game::Run() {
    if (!Init()) {
        Running = false;
    }

    while (Running) {
        ProcessInputs();
        Update();
        Draw();
    }

    std::cout << "Bye Bye!\n";
}