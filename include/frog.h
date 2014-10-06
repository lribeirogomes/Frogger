#pragma once
#include "dynamic_object.h"

class frog : public dynamic_object {
    // The frog's legs
    class leg : public dynamic_object {
    public:
        void draw() override;
    };

private:
    leg _leftleg, _rightleg;

public:

    void draw() override;
    void keydown(unsigned char key) override;
    void keyup(unsigned char key) override;
    void update(glut_time_t dt) override;
};

