# Region_number_checker
This programm check input number and show the name of region that use on the car's identification number

# Used funtion that I haven't knew:

**Substr()**
Returns a newly constructed string object with its value initialized to a copy of a substring of this object.

The substring is the portion of the object that starts at character position pos and spans len characters (or until the end of the string, whichever comes first).

**Strtok()**
Split string into tokens
A sequence of calls to this function split str into tokens, which are sequences of contiguous characters separated by any of the characters that are part of delimiters.

On a first call, the function expects a C string as argument for str, whose first character is used as the starting location to scan for tokens. In subsequent calls, the function expects a null pointer and uses the position right after the end of the last token as the new starting location for scanning.

To determine the beginning and the end of a token, the function first scans from the starting location for the first character not contained in delimiters (which becomes the beginning of the token). And then scans starting from this beginning of the token for the first character contained in delimiters, which becomes the end of the token. The scan also stops if the terminating null character is found.

This end of the token is automatically replaced by a null-character, and the beginning of the token is returned by the function.

Once the terminating null character of str is found in a call to strtok, all subsequent calls to this function (with a null pointer as the first argument) return a null pointer.

The point where the last token was found is kept internally by the function to be used on the next call (particular library implementations are not required to avoid data races).

 **c_str()**
 The basic_string::c_str() is a builtin function in C++ which returns a pointer to an array that contains a null-terminated sequence of characters representing the current value of the basic_string object.


# Problems:
There is one warning, that I haven't fix, here it is:

SRCS/parser.cpp:54:19: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
        char            *sep_arr = " \t,.";
                                   ^
1 warning generated.

# Makefile's commands: (use "make + rule")

rules: 

**run**
Compille programm and create bin file "find_reg"

**biinrun**
run bin file "find_reg"

**all**
run rules before together

**fclean**
remove bin file "find_reg"
