#ifndef MINIRPG_GAME_H
#define MINIRPG_GAME_H

class Game {
private:
    bool Running;

    bool Init();

    void ProcessInputs();
    void Update();
    void Draw();

public:
    Game();
    ~Game();

    void Run();
};

#endif //MINIRPG_GAME_H
