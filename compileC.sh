#!/bin/bash

read -e -p $'Please enter the name of the file you would like to compile.\n' name

echo "Compiling $name ... " $'\n'

gcc -o $name "${name}.c"

read -e -p $'Would you like to run the program? [y/n]\n' choice

echo

[[ "$choice" == [Yy]* ]] && echo $'Running program ... \n\n.........................................................\n' && ./$name || echo $'\nProgram run cancelled.\n'
