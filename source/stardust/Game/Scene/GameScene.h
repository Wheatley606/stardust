#pragma once

#include "stardust/Game/Scene/Scene.h"

class GameScene : public Scene {
public:
    GameScene();
    ~GameScene();
    virtual void init();
};

// Mendatory: to access members of a class that aren't static, we need to define them separately and make a pointer that goes to the same location
namespace GameScenePatch
{
    void init();
}