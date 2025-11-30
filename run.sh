#!/bin/bash
make
sudo insmod modul.ko
sudo rmmod modul
sudo dmesg | tail
make clean
