# CrisStockPortofolio
A back-end process that will help me to take care of my stock portofolio.


## :gear: Building

Open a terminal and go into the root folder of the project, which contains the top-level `CMakeLists.txt` file.
Do not run CMake directly from the top-level folder (meaning, do not do this: `cmake .`). Instead, make a separate directory, as follows:

1.  `mkdir build`
2.  `cd build`
3.  Generate the project: `cmake ..`
4.  Build the project:
    -   Windows, one of the following:
        -   `cmake --build .`
    -   Linux and macOS, one of the following:
        -   `cmake --build .`
        -   or just `make`


### Rebuilding

It's very simple to rebuild:

-   Every time you modify source code and want to recompile, you only need to follow ***the last step*** (for example, just `make` again)
-   Every time you add/remove/rename a source code file on disk, you need to follow ***the last two steps*** (for example, just `cmake .. && make` again)
-   If something goes wrong when generating the project, just delete the contents of the `build` folder, or the folder itself, then follow all the steps again

