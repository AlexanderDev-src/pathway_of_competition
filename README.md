# leetcode

Personal training repository for competitive programming. It holds my solutions
to LeetCode and HackerRank problems, plus a small CMake scaffold so each
solution can be compiled and run locally instead of only inside an online judge.

This is a practice log, not a library. Code here is written for speed of
learning: solutions are kept close to the form they were submitted in, and
nothing is meant to be reused as a dependency.

## Requirements

- A C++23 compiler (GCC or Clang)
- CMake 3.15 or newer

The build type defaults to `Debug`, and `compile_commands.json` is exported
into `build/` for clangd.

## Layout

```
include/
  Leetcode/     Solutions to LeetCode problems
  HacerRank/    Solutions to HackerRank problems
src/
  main.cpp      Scratch driver: reads input and exercises one solution
data/           Sample input files
```
