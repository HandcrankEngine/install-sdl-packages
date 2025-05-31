# Install SDL Packages

## Usage

### Default Version Numbers

```yml
jobs:
  build:
    runs-on: ubuntu-latest
    steps:
      - uses: HandcrankEngine/install-sdl-packages@v0.1.2
```

### Specific Version Numbers

```yml
jobs:
  build:
    runs-on: ubuntu-latest
    steps:
      - uses: HandcrankEngine/install-sdl-packages@v0.1.2
        with:
          SDL2_VERSION: "2.32.4"
          SDL2_IMAGE_VERSION: "2.8.8"
          SDL2_TTF_VERSION: "2.24.0"
          SDL2_MIXER_VERSION: "2.8.1"
```
