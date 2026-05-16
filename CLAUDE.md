# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project

Arduino project repository. No sketches or libraries have been added yet.

## Toolchain

Arduino code can be compiled and uploaded from the command line using the [Arduino CLI](https://arduino.github.io/arduino-cli/):

```bash
# Compile a sketch
arduino-cli compile --fqbn <board-fqbn> <sketch-dir>

# Compile and upload
arduino-cli upload -p <port> --fqbn <board-fqbn> <sketch-dir>

# List connected boards
arduino-cli board list

# Install a library
arduino-cli lib install "<Library Name>"

# Install a core (e.g. AVR for Uno/Nano)
arduino-cli core install arduino:avr
```

Common FQBNs: `arduino:avr:uno`, `arduino:avr:nano`, `arduino:avr:mega`, `arduino:samd:mkr1000`, `esp32:esp32:esp32`.

## Repository structure (expected as project grows)

- Each sketch lives in its own directory with a `.ino` file matching the directory name (Arduino requirement).
- Shared reusable code goes in a `libraries/` directory at the repo root, following the Arduino library format (`src/`, `library.properties`).
