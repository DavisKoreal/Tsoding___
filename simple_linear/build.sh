#!/bin/bash

build_and_push() 
{
    g++ *.cpp *.hpp -o main.exe --verbose
    ./main.exe
    cd ..
    ./*changes
    cd *linear
}

build_and_push "flow"
