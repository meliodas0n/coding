#! /usr/bin/bash

read -p "enter commit : " commit
git add .
git commit -m "$commit"

read -p "enter new file : " name
cp -- "template.cpp" $name