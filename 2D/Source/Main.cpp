//Charles Xavier Grant, 10/1/2024
#include <SDL.h>
#include <iostream>
#include "Renderer.h"

int main(int argc, char* argv[])
{
    Renderer renderer;

    renderer.Initialize();
    renderer.CreateWindow();

    return 0;
}