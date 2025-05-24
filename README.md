# binary-search-tree
## Dependencies
 - *GNU Make*
 - *GCC*
 - ### Debugging
    - *GDB*
    - *Valgrind*

## How to build
Cloning the repository:

```
git clone https://github.com/luisr-1/binary-search-tree.git
```

In the root directory of the project, run the following command to build the project:
```
make
```

## How to run
```
./binary-search-tree
```

## How to debug

The `Makefile` contains a flag for debugging purposes. So, the binary generated is already in the debug mode.

Running the GDB debugger:
```
gdb ./build/binary-search-tree --tui
```
Obs: Use `--tui` to enable the text user interface (TUI) mode in GDB. For a better experience.
