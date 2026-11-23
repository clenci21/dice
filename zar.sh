#!/bin/bash

lang=$1

if [ "$lang" == "py" ]; then
	python3 dice.py
else 
	make build
	./dice.c
fi
