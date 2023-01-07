#!/bin/bash

i=1
max=6000000
while [ $i -lt $max ]
do
    printf "\n\n"
    ./wonderousC $i
    true $(( i++ ))
done


