#!/bin/bash
wget -P /tmp/ https://raw.github.com/racheluneke/alx-low_level_programming/master
export LD_PRELOAD=/tmp/nrandom.so
