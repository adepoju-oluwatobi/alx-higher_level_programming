# Start with the ASCII value of 'a'
ascii_value = ord('a')

# Iterate through the lowercase alphabet
while ascii_value <= ord('z'):
    # Convert the ASCII value back to a character and print it without a newline
    print(chr(ascii_value), end='')

    # Increment the ASCII value to move to the next character
    ascii_value += 1

# Print a newline character to start a new line after printing all characters
print()
