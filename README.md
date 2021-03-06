<p align="center">
<br/>
  <img src="assets/logo/free_logo_2.png" width="80px"/><br/>
  ΛVΛ<br/>
  Small game engine.<br/>
  Written in 32 random ̷d̷a̷y̷s̷ m̷o̷n̷t̷h̷s̷ years.<br/>
<br/>|
  <a href="#features">Features</a> |
  <a href="#rationale">Rationale</a> |
  <a href="#getting-started">Getting started</a> |
<br/>|
  <a href="#unlicense">Unlicense</a> |
  <a href="#documentation">Documentation</a> |
  <a href="#todo-ᕕᐛᕗ">Todo ᕕ(ᐛ)ᕗ</a> |
<br/>
<br/>
</p>

## Features

- [x] ~Fast~. Simple.
- [x] ~Modern~. Readable.
- [x] ~C++~. Bindable C.
- [x] ~Full featured~. Extendable.
- [x] ~Object-oriented~. Data-oriented.
- [x] ~Infinite documentation~. Browsable sources.
- [x] ~Hundred of file formats supported~. Unique binary format.
- [x] ~Royaltie fee~. Free and unlicensed.
- [x] ~Other buzzwords~. Small. Direct. Embeddable. Fun.

## Rationale

- Minimalistic coding style.
- Less is more, DOD, ECS, KISS.
- Heap allocations under control.
- No installation, no makefiles, fast compilation times.
- Generic 3D editor, that can be decoupled from the project.
- Generic data pipeline, that can be decoupled from the project.
- Data pipeline tools speak JSON everywhere: still human-readable, still mergeable workflow.
- Inspiration from: bitsquid, stb, rlk, krig, mio, tigr, jo.

## Todo ᕕ(ᐛ)ᕗ
- [x] 01 [Project structure, build system and makefiles.](#01)
- [x] 02 [Window creation and basic framework.](#02)
- [x] 03 [Audio.](#03)
-

## Screenshots

### 01
Project structure, build system and makefiles.
<img src="game/01/demo.gif" height="96px" align="right">
<br><br>

### 02
Window creation and basic framework.
<img src="game/02/demo.png" height="96px" align="right">
<br><br>

### 03
Audio.
<img src="game/03/demo.png" height="96px" align="right">
<br><br>

## Releases

v001_Monkey3_Icarus, v000_YOB_Marrow

## Getting started

Execute the `AVA.sh.bat` script file to build & run the editor.

Additionally:
- `AVA`                        (launch editor)
- `AVA game [platform]`        (launch game)
- `AVA make [game] [platform]` (make game.exe executable)
- `AVA cook [game] [platform]` (cook all raw game assets)
- `AVA pack [game] [platform]` (pack all cooked game assets into game.pak file)
- `AVA fuse [game] [platform]` (fuse game.pak and game.exe both together)

## Disk structure

- `.git/`, dot folders are always ignored.
- `editor/`, generic 3d editor and viewer.
- `engine/`, engine runtime.
- `tools/`, pipeline used to import foreign data.
- `game/`, your game to be packaged.

## Download

## Build

### AVA as engine:
- [x] Compile the amalgamated `AVA.c` source file to get a functional game engine.
- [x] Compile your game as a dynamic library and place it near the `AVA` executable.
- [x] Tip: Rename both executable and dynamic library as desired. Ie, `game.exe` with `game.dll` will work.
- [x] Tip: Place an `.ico` icon close to the binary if you want to as well.
```lisp
cl      AVA.c                && echo AVA as engine (Windows)
g++     AVA.c                && echo AVA as engine (Linux)
clang++ AVA.c                && echo AVA as engine (OSX)
```

### AVA as library:
- [x] Compile your game and link amalgamated `AVA.c` source file with it.
```lisp
cl      game.c AVA.c         && echo AVA as library (Windows)
g++     game.c AVA.c         && echo AVA as library (Linux)
clang++ game.c AVA.c         && echo AVA as library (OSX)
```

### Redistribution
```
- game.exe + .ico        (engine player)
- game.dll/.lua/.socket     (game logic) \
- game.rom/.pak        (ro data storage) | game :)
- game.ram/.sql        (rw data storage) /
```

## Alternatives

[amulet](https://github.com/search?utf8=%E2%9C%93&q=game+engine+amulet&type=),
[anvil](https://github.com/search?utf8=%E2%9C%93&q=game+engine+anvil&type=),
[aroma](https://github.com/search?utf8=%E2%9C%93&q=game+engine+aroma&type=),
[blendelf](https://github.com/search?utf8=%E2%9C%93&q=game+engine+blendelf&type=),
[chickpea](https://github.com/search?utf8=%E2%9C%93&q=game+engine+chickpea&type=),
[corange](https://github.com/search?utf8=%E2%9C%93&q=game+engine+corange&type=),
[ejoy2d](https://github.com/search?utf8=%E2%9C%93&q=game+engine+ejoy2d&type=),
[hate](https://github.com/search?utf8=%E2%9C%93&q=game+engine+hate&type=),
[island](https://github.com/search?utf8=%E2%9C%93&q=game+engine+island&type=),
[juno](https://github.com/search?utf8=%E2%9C%93&q=game+engine+juno&type=),
[love](https://github.com/search?utf8=%E2%9C%93&q=game+engine+love&type=),
[mini3d](https://github.com/search?utf8=%E2%9C%93&q=game+engine+mini3d&type=),
[mio](https://github.com/search?utf8=%E2%9C%93&q=game+engine+mio&type=),
[openframeworks](https://github.com/search?utf8=%E2%9C%93&q=game+engine+openframeworks&type=),
[openkore](https://github.com/search?utf8=%E2%9C%93&q=game+engine+openkore&type=),
[pez](https://github.com/search?utf8=%E2%9C%93&q=game+engine+pez&type=),
[moon](https://github.com/search?utf8=%E2%9C%93&q=game+engine+moon&type=),
[punity](https://github.com/search?utf8=%E2%9C%93&q=game+engine+punity&type=),
[roam](https://github.com/search?utf8=%E2%9C%93&q=game+engine+roam&type=),
[sushi](https://github.com/search?utf8=%E2%9C%93&q=game+engine+sushi&type=),
[tigr](https://github.com/search?utf8=%E2%9C%93&q=game+engine+tigr&type=),

## Status

[![Discord](https://img.shields.io/badge/chat-AVA%20lounge-738bd7.svg?logo=discord)](https://discord.gg/vu6Vt9d)
[![Travis](https://api.travis-ci.org/r-lyeh/AVA.svg?branch=master)](https://travis-ci.org/r-lyeh/AVA)
[![Issues](https://github-meta-badges.herokuapp.com/r-lyeh/AVA/issues.svg)](https://github.com/r-lyeh/AVA/issues)
[![Unlicensed](http://img.shields.io/badge/license-Unlicense-blue.svg?style=flat)](http://unlicense.org/)
