// Entry point for play-builder engine

#include <SDL2/SDL.h>
#include <string>
#include <memory>
#include <utility>
#include <iostream>
#include <engine/Window.hpp>
#include <engine/Sprite.hpp>
#include <engine/GameObject.hpp>
#include <engine/Room.hpp>
#include <engine/Audio.hpp>
#include <engine/globals.hpp>

int main(void) {
    // Load audio

    // Load images

    // Load fonts
    globals::fonts.insert({
        { "geist", std::make_shared<Font>("fonts/Geist/GeistVariableVF.ttf", 20) }
    });

    // Define rooms w/ Game Objects

    // Start the game!
    globals::win.run("rm0");
    return 0;
}
