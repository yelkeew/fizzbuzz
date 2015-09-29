#!/bin/bash

for i in {1..100}; do 
    x=0; 
    if [ 0 -eq $(expr $i % 3) ]; then 
        x=1; 
        echo -n "fizz"; 
    fi; 
    if [ 0 -eq $(expr $i % 5) ]; then 
      x=1; 
      echo -n "buzz"; 
    fi; 
    if [ 0 -eq $x ]; 
      then echo "$i"; 
    else 
      echo ""; 
    fi 
done
