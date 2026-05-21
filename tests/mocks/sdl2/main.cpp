#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <SDL_ttf.h>

auto main() -> int {
  const int width = 800;
  const int height = 600;

  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    return 0;
  }

  auto window = SDL_CreateWindow("SDL Tester", SDL_WINDOWPOS_CENTERED,
                                 SDL_WINDOWPOS_CENTERED, width, height,
                                 SDL_WINDOW_OPENGL | SDL_WINDOW_ALLOW_HIGHDPI);

  auto renderer = SDL_CreateRenderer(
      window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

  auto quit = false;

  while (!quit) {
    SDL_Event event;

    while (SDL_PollEvent(&event) != 0) {
      auto keyCode = event.key.keysym.sym;

      switch (event.type) {
      case SDL_QUIT:
        quit = true;
        break;
      case SDL_KEYDOWN:
        if (keyCode == SDLK_ESCAPE) {
          quit = true;
        }
        break;

      default:
        break;
      }
    }

    SDL_RenderClear(renderer);

    SDL_RenderPresent(renderer);

    SDL_Delay(1);
  }

  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);

  return 0;
}
