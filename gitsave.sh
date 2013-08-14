#!/bin/bash
git add .
git add -u
git commit -m "\"$(date +%s) $@ \""
echo "TEST"
# git push
