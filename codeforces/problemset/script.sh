#! /usr/bin/bash

read -p "enter commit : " commit "new file : " name
git add .
git commit -m "$commit"
git push

cp -- "template.cpp" "$name.cpp"