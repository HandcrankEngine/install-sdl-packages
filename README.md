# Install SDL Packages

## Usage

### Default Version Numbers

```yml
jobs:
  build:
    runs-on: ubuntu-latest
    steps:
      - uses: HandcrankEngine/install-sdl-packages@v0.3.0
```

### Specific Version Numbers

```yml
jobs:
  build:
    runs-on: ubuntu-latest
    steps:
      - uses: HandcrankEngine/install-sdl-packages@v0.3.0
        with:
          SDL_VERSION: "2.32.10"
          SDL_IMAGE_VERSION: "2.8.12"
          SDL_TTF_VERSION: "2.24.0"
          SDL_MIXER_VERSION: "2.8.2"
```

## Inputs

| Name                | Description                                     |  Default  |
| :------------------ | :---------------------------------------------- | :-------: |
| `SDL_VERSION`       | SDL version                                     | `2.32.10` |
| `CACHE_SDL`         | If the action should cache the SDL files.       |  `true`   |
| `SDL_IMAGE_VERSION` | SDL_image version                               | `2.8.12`  |
| `CACHE_SDL_IMAGE`   | If the action should cache the SDL_image files. |  `true`   |
| `SDL_TTF_VERSION`   | SDL_ttf version                                 | `2.24.0`  |
| `CACHE_SDL_TTF`     | If the action should cache the SDL_ttf files.   |  `true`   |
| `SDL_MIXER_VERSION` | SDL_mixer version                               |  `2.8.2`  |
| `CACHE_SDL_MIXER`   | If the action should cache the SDL_mixer files. |  `true`   |
