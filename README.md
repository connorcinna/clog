# clog
Standalone logging library written in pure C
Supports 4 log levels with different colors depending on severity, logging to a file.

build:
```
git clone https://github.com/connorcinna/clog
cd clog
make clean all
```

use:
The 4 log levels are 
```
INFO,
WARN,
ERROR,
FATAL
```
the logger itself is invoked with a macro function `clog`, which takes one of the 4 levels and a formatted string.
e.g.
`log(INFO, "example %s", some_string)`
