# code_dump

A public collection of unrelated code snippets and experiments, free to use.

## How to use

Browse the repository and choose a snippet. Check the source file's comments and dependencies before building; each example may be independent and may have its own requirements. Copy or clone the files you need, then compile and run the relevant program from a terminal.

## Programs
1. ### concat.c

**Description**

Merges contents of files and outputs it to new file

**Usage**

*Usage:* `concat [file1] [file2] ..... [outputfile]`

**Compile**

`gcc -Wall -Wextra -std=c11 concat.c -o concat`

### pdf2img.cpp

**Description**

Converts images passed to pdf

**Usage**

*Usage:* `pdf2img [img1] [img2] ..... [outputpdf]`

**Compile**

> **Dependency**: `libhpdf`

`g++ -std=c++17 -Wall -Wextra pdf2img.cpp -o pdf2img -lhpdf`


## Requirements

Install GCC/G++ and ensure the compiler is available on your `PATH`. On Linux, these are commonly provided by the `build-essential` package; on macOS, install the Xcode Command Line Tools; on Windows, use a GCC-compatible toolchain such as MinGW-w64 or MSYS2. Some snippets may require additional libraries or setup, which should be identified from their source and documentation.
