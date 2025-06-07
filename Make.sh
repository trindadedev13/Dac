#!/usr/bin/bash

# compile

mkdir -p build && cd build

cmake ..
make

cd ..

# run it at termux
if [ "$1" = "--termux" ]; then
  cp build/DAC $HOME

  cd $HOME
  chmod +x DAC
  ./DAC main.dac
fi
