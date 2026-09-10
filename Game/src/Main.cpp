#include <Engine.h>

class Game : public GameEngine::Application
{
public:
    Game() // Constructor
    {

    }

    ~Game() // Destructor
    {

    }
};


int main() {
    Game game;
    game.run();

    return 0;
}