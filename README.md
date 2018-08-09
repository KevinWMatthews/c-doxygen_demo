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


### Links

[Basic](http://www.stack.nl/~dimitri/doxygen/manual/docblocks.html)
[FAQ](https://www.stack.nl/~dimitri/doxygen/manual/faq.html)
[Special Commands](https://www.stack.nl/~dimitri/doxygen/manual/commands.html)


### TODO

Check out
  * `\code`
  * `\class`
  * `\namespace`
