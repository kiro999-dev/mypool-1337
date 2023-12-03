#!/bin/bash
find . -name *.sh  -type f -exec sh -c 'echo $(basename "{}" .sh)' \;
