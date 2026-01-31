#include "raylib.h"

#include "myheader.hpp"

const int WIDTH = 800;
const int HEIGHT = 600;

int main() {
	InitWindow(WIDTH, HEIGHT, "Raylib Window");

	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(RAYWHITE);
		EndDrawing();
	}

	CloseWindow();
	return 0;
}
