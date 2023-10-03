# Start with the ASCII value of 'a'
ascii_value = ord('a')

# Create an empty string to store the alphabet
alphabet = ''

# Iterate through the lowercase alphabet
while ascii_value <= ord('z'):
    # Convert the ASCII value back to a character and add it to the alphabet string
    alphabet += chr(ascii_value)

    # Increment the ASCII value to move to the next character
    ascii_value += 1

# Print the entire alphabet without a newline
print(alphabet)
