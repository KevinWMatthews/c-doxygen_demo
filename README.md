# Doxygen

Trying to figure out how to generate Doxygen documentation.

## Steps

Create default config file:

```
$ doxygen -g [<filename>]
```
Creates `Doxyfile` by default.

Edit a few settings:

  * `PROJECT_NAME`
  * `PROJECT_NUMBER`
  * `INPUT`
  * `OUTPUT_DIRECTORY`
  * `QUIET`
  * `FILE_PATTERNS`
  * `EXTRACT_ALL`
  * `HAVE_DOT`
  * `GENERATE_LATEX`
  * `OPTIMIZE_OUTPUT_FOR_C`
  * `BUILTIN_STL_SUPPORT`

Also consider:

  * `JAVADOC_AUTOBRIEF`
  * `QT_AUTOBRIEF`

This will create the foler `html`.
To view the documentation, run
```
$ firefox html/index.html &
```

If you haven't documented your file/module/class, Doxygen won't parse anything.
Either do that or set `EXTRACT_ALL` to `YES`.,W


## Notes

Can't configure Doxygen from the command line. You must use the config file.

## Links

[Tutorial](https://vicrucann.github.io/tutorials/quick-cmake-doxygen/)
[Config with env](https://stackoverflow.com/a/49148112/8807809)
[Basic](http://www.stack.nl/~dimitri/doxygen/manual/docblocks.html)
[FAQ](https://www.stack.nl/~dimitri/doxygen/manual/faq.html)
[Special Commands](https://www.stack.nl/~dimitri/doxygen/manual/commands.html)


## TODO

Check out
  * `\code`
  * `\class`
  * `\namespace`

Figure out how to specify output directory from the command line.

Look into CMake variable substitutions in the config file.

Upgrade CMake and use their features:
[New CMake commands](https://cmake.org/cmake/help/v3.12/module/FindDoxygen.html)
