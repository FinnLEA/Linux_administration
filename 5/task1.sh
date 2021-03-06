#!/bin/bash
height=$1
width=$2
fullness=$3
char=$4

if [ $# -ne 4 ]
  then
    echo "Invalid args"
    exit 1
fi

if [ $fullness -eq 1 ]
  then
    for (( i = 1; i <= $height; i++))
      do
        for (( j = 1; j <= $width; j++))
          do
            echo -n "$char"
          done
      echo ""
      done
else
for (( i = 1; i <= $height; i++))
    do
        for (( j = 1; j <= $width; j++))
        do
            if [ $i -eq 1 -o $i -eq $height ]
            then
                echo -n "$char"
            else
                if [ $j -eq 1 -o $j -eq $width ]
                then
                    echo -n "$char"
                else
                    echo -n " "
                fi
            fi
        done
        echo ""
    done
fi