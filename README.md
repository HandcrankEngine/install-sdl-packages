# Install SDL Packages

## Usage

### Default Version Numbers

```yml
jobs:
  build:
    runs-on: ubuntu-latest
    steps:
      - uses: HandcrankEngine/install-sdl-packages@v0.5.0
```

### Specific Version Numbers

```yml
jobs:
  build:
    runs-on: ubuntu-latest
    steps:
      - uses: HandcrankEngine/install-sdl-packages@v0.5.0
        with:
          SDL_VERSION: "3.4.14"
          SDL_IMAGE_VERSION: "3.4.4"
          SDL_TTF_VERSION: "3.2.2"
          SDL_MIXER_VERSION: "3.2.4"
```

## Inputs

| Name                | Description                                      | Default  |
| :------------------ | :----------------------------------------------- | :------: |
| `EMSDK_VERSION`     | Emscripten version                               | `6.0.7`  |
| `CACHE_EMSCRIPTEN`  | If the action should cache the Emscripten files. |  `true`  |
| `SDL_VERSION`       | SDL version                                      | `3.4.14` |
| `CACHE_SDL`         | If the action should cache the SDL files.        |  `true`  |
| `SDL_IMAGE_VERSION` | SDL_image version                                | `3.4.4`  |
| `CACHE_SDL_IMAGE`   | If the action should cache the SDL_image files.  |  `true`  |
| `SDL_TTF_VERSION`   | SDL_ttf version                                  | `3.2.2`  |
| `CACHE_SDL_TTF`     | If the action should cache the SDL_ttf files.    |  `true`  |
| `SDL_MIXER_VERSION` | SDL_mixer version                                | `3.2.4`  |
| `CACHE_SDL_MIXER`   | If the action should cache the SDL_mixer files.  |  `true`  |
