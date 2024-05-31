# clog
Standalone logging library written in pure C  
Supports 4 log levels with different colors depending on severity, logging to a file.  

**build**
```
git clone https://github.com/connorcinna/clog
cd clog
make all
```

**use**
The 4 log levels are   
```
INFO,
WARN,
ERROR,
FATAL
```
the logging function itself is invoked with a macro `clog`, which takes one of the 4 levels and a formatted string.  
e.g.  
`clog(INFO, "example %s\n", some_string)`  
Everything logged through this function is written to stdout and to a log file `./log/debug.log`
