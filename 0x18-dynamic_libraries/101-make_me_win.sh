#!/bin/bash
wget -P /tmp https://raw.github.com/tituz175/alx-low_level_programming/master/0x18-dynamic_libraries/make_me_win_lib.so
export LD_PRELOAD=/tmp/make_me_win_lib.so
