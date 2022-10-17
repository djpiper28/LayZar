#!/bin/bash

find ./main ./layzar | grep ".*\\.[c|h]\$" | xargs astyle --style=kr
find ./main ./layzar | grep ".*\\.[c|h]pp\$" | xargs astyle --style=kr
cmake-format ./CMakeLists.txt > ./CMakeLists.txt.orig && cp ./CMakeLists.txt.orig ./CMakeLists.txt
cmake-format ./main/CMakeLists.txt > ./CMakeLists.txt.orig && cp ./CMakeLists.txt.orig ./main/CMakeLists.txt
cmake-format ./layzar/CMakeLists.txt > ./CMakeLists.txt.orig && cp ./CMakeLists.txt.orig ./layzar/CMakeLists.txt

