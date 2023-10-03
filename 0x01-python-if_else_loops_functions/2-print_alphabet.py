#!/usr/bin/python3

output = ""

for i in range(ord('a'), ord('z') + 1):
    output += "{:c}".format(i)

# Use print() only once to print the entire output with a newline character
print(output)
