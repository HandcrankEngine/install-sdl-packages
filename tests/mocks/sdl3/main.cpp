#include <SDL3/SDL.h>
#include <SDL3_image/SDL_image.h>
#include <SDL3_mixer/SDL_mixer.h>
#include <SDL3_ttf/SDL_ttf.h>

auto main() -> int {
  const int width = 800;
  const int height = 600;

  if (!SDL_Init(SDL_INIT_VIDEO)) {
    return 0;
  }

  auto window =
      SDL_CreateWindow("SDL Tester", width, height,
                       SDL_WINDOW_OPENGL | SDL_WINDOW_HIGH_PIXEL_DENSITY);

  auto renderer = SDL_CreateRenderer(window, nullptr);

  auto quit = false;

  while (!quit) {
    SDL_Event event;

    while (SDL_PollEvent(&event)) {
      auto keyCode = event.key.key;

      switch (event.type) {
      case SDL_EVENT_QUIT:
        quit = true;
        break;
      case SDL_EVENT_KEY_DOWN:
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
