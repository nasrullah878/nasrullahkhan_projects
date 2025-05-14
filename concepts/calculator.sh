#!/bin/bash

while true
do
    echo ""
    echo "Simple Calculator"
    echo "Choose an operation: +  -  *  /"
    read -p "Enter operation: " op

    read -p "Enter first number: " a
    read -p "Enter second number: " b

    if [ "$op" = "+" ]; then
        result=$(echo "$a + $b" | bc)
    elif [ "$op" = "-" ]; then
        result=$(echo "$a - $b" | bc)
    elif [ "$op" = "*" ]; then
        result=$(echo "$a * $b" | bc)
    elif [ "$op" = "/" ]; then
        if [ "$b" = "0" ]; then
            echo "Error: Cannot divide by zero"
            continue
        fi
        result=$(echo "scale=2; $a / $b" | bc)
    else
        echo "Invalid operation"
        continue
    fi

    echo "Result: $result"

    read -p "Do you want to continue? (yes/no): " choice
    if [ "$choice" = "no" ]; then
        echo "Goodbye!"
        break
    fi
done
