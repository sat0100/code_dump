# code_dump

A public collection of unrelated code snippets and experiments, free to use.

## How to use

Browse the repository and choose a snippet. Check the source file's comments and dependencies before building; each example may be independent and may have its own requirements. Copy or clone the files you need, then compile and run the relevant program from a terminal.

## Compile with GCC (C)

For a C source file such as `program.c`, compile it with GCC:

```sh
gcc -Wall -Wextra -std=c11 program.c -o program
```

Run the resulting executable:

```sh
./program
```

On Windows, run `program.exe` instead. If the code uses math functions from `libm`, add `-lm` at the end of the command:

```sh
gcc -Wall -Wextra -std=c11 program.c -o program -lm
```

## Compile with G++ (C++)

For a C++ source file such as `program.cpp`, use G++:

```sh
g++ -Wall -Wextra -std=c++17 program.cpp -o program
```

Then run it:

```sh
./program
```

Use a standard supported by the code (for example, `-std=c++20` for C++20). For a program split across multiple source files, list them all in the compile command:

```sh
g++ -Wall -Wextra -std=c++17 main.cpp helper.cpp -o program
```

## Requirements

Install GCC/G++ and ensure the compiler is available on your `PATH`. On Linux, these are commonly provided by the `build-essential` package; on macOS, install the Xcode Command Line Tools; on Windows, use a GCC-compatible toolchain such as MinGW-w64 or MSYS2. Some snippets may require additional libraries or setup, which should be identified from their source and documentation.
