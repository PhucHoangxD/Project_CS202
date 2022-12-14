#ifndef GLOBAL_H
#define GLOBAL_H
#include <raylib.h>
#include <vector>
#include "Constants.h"

class Global
{
private:
    Global();
    static Global *_global;

public:
    static void initialize();
    static const Global &get();
    static void deallocate();

    Texture2D playerTexture[4][4];
    Texture2D dogTexture[3][4];
    Texture2D catTexture[2][4];
    Texture2D birdTexture[6];

    Texture2D vehicleTexture[5][2];
    Texture2D rockTexture;
    Texture2D roadTexture;
    Texture2D waterPonderTexture;
    Texture2D ambulanceTexture;
    Texture2D trafficLightTexture[2];
    Texture2D grassTexture;
    Texture2D coinTexture;
    Texture2D cloudsTexture[5];

    Sound buttonClick;
    Sound backgroundSound;
    Sound carSound;
    Sound birdSound;
    Sound dogSound;
    Sound buyItem;
    Sound coinSound;
    Sound winSound;
    Sound deathSound;
};

extern Global *_global;

#endif