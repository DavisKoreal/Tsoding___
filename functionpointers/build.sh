#!/bin/bash

# Build the project
build() {
    echo "Building the project..."
    g++ *.cpp -o main.exe
    echo "Done!"
    ./main.exe
}

build "flow"