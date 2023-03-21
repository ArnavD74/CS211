#!/bin/bash
chmod +x ./wordcount
chmod +x ./wordcount.c
gcc wordcount.c -o wordcount
echo "Compiled!"

expected_outputs=(
  "1 1 2 ./cases/EG0"
  "1 1 1 ./cases/EG1"
  "1 2 4 ./cases/EG2"
  "1 2 4 ./cases/EG3"
  "1 2 4 ./cases/EG4"
  "2 2 3 ./cases/EG5"
  "4 0 4 ./cases/EG6"
  "1 0 1 ./cases/EG7"
  "0 0 0 ./cases/EG8"
)

pass=true
for i in {0..8}
do
  input_file="EG$i"
  expected_output="${expected_outputs[i]}"
  output=$(./wordcount ./cases/$input_file)
  
  if [ "$output" != "$expected_output" ]; then
    echo "Test $i Failed: expected \"$expected_output\", but got \"$output\""
    pass=false
  fi
done

if [ "$pass" = true ]; then
  echo "All tests passed"
fi