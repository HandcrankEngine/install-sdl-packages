#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#endif

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <SDL_ttf.h>

SDL_Window *window;
SDL_Renderer *renderer;

bool quit = false;

void loop(void *arg) {
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

#ifdef __EMSCRIPTEN__
  if (quit) {
    emscripten_cancel_main_loop();
  }
#endif
}

auto main() -> int {
  const int width = 800;
  const int height = 600;

  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    return 0;
  }

  window =
      SDL_CreateWindow("", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                       width, height, SDL_WINDOW_OPENGL);

  renderer = SDL_CreateRenderer(
      window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

#ifdef __EMSCRIPTEN__
  emscripten_set_main_loop_arg(loop, nullptr, 0, 1);
#else
  while (!quit) {
    loop(nullptr);
  }
#endif

  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);

  return 0;
}
