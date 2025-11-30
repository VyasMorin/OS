#!/bin/bash
make
sudo insmod sviprocesi.ko
sudo rmmod sviprocesi
sudo dmesg | tail --lines 1000
make clean
