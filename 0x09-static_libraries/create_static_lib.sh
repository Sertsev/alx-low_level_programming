#!/bin/bash

ls *.c |  xargs --no-run-if-empty gcc -Wall -c
ls *.c | xargs ar rc liball.a
