# Experiments in C++

This repo contains little examples demonstrating certain concepts from C++. They are slightly cleaned up versions of notes I wrote during the uOttawa course CSI 2372.

## Compiling

All of the examples in `./experiments` have been tested with GCC.

To compile, run, and remove the compiled files:

1. Open a terminal in the `./experiments` directory.
2. Execute:

```bash
g++ -std=c++17 1-hello.cpp && ./a.out && rm ./a.out
```

You can wrap this in a handy bash function:

```bash
function c++ {
  g++ -std=c++17 -Wall -Wextra $1.cpp && ./a.out && rm ./a.out
}
```

With this, running a single file can be done with:

```bash
c++ hello
```

## Style

This repo _tries_ to follow Google's [C++ style guide](https://google.github.io/styleguide/cppguide.html). VS Code can be configured to automatically format code in this style ([instructions](https://stackoverflow.com/a/46064866/6591491)).

Each experiment is numbered, but this indicates more about when the experiment was added rather than anything about difficultly.
