#! /usr/bin/bash

read -p "enter commit : " commit
git add .
git commit -m "$commit"
git push

read -p "enter new file : " name
cp -- "template.cpp" "$name.cpp"