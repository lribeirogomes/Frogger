#pragma once
#include "game_object.h"
#include "light_source.h"
#include "camera.h"
#include <memory>
#include <vector>

class game_manager {
private:
    std::vector<std::shared_ptr<game_object>> _game_objects;
    std::vector<std::shared_ptr<light_source>> _light_sources;
    std::vector<std::shared_ptr<camera>> _cameras;
    glut_time_t _lastTime;
    GLdouble _angle;

public:
    game_manager();

    void display();
    void reshape(int w, int h);
    void keyboard(unsigned char key, int x, int y);    
    void keyboardUp(unsigned char key, int x, int y);
    void timer();
    void idle();
    void update();
    void init();
};