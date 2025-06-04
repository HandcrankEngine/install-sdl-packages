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
          SDL_VERSION: "2.32.8"
          SDL_IMAGE_VERSION: "2.8.8"
          SDL_TTF_VERSION: "2.24.0"
          SDL_MIXER_VERSION: "2.8.1"
```
