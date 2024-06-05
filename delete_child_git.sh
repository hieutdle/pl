#!/bin/bash

# Find and remove all .git directories in child folders but not in the current folder
find . -mindepth 2 -type d -name .git -exec rm -rf {} +

echo "All child .git directories have been removed."
