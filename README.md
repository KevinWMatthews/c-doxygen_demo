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
  * `FILE_PATTERNS`
  * `HAVE_DOT`
  * `GENERATE_LATEX`
  * `OPTIMIZE_OUTPUT_FOR_C`
  * `BUILTIN_STL_SUPPORT`

This will create the foler `html`.
To view the documentation, run
```
$ firefox html/index.html &
```
