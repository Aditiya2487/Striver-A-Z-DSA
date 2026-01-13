# ESCAPE SEQUENCES are special characters that do special things.

# \n = New line      Moves the text after it to a new line.
# \t = Tab           Used to add a tab space.
# \\ = Backslash     Used to include a backslash in the string.
# \" = Double quote  Used inside a string surrounded by double quotes.
# \' = Single quote  Used inside a string surrounded by single quotes.
print("Hello\nWorld")
print("Name\tAge")
print("Aditya\t25")
print("C:\\Users\\Aditya")
print("He said \"Hello\" to me")
print('It\'s a good day')

# \r → Carriage Return
# Moves cursor to the beginning of the line (overwrites).
print("Hello\rWorld")

# \b → Backspace
# Deletes one character before it.
print("Helloo\b")

# Formatted Strings (f-strings)
# Use f-strings to insert variables into text. This is the recommended way.
name="Aditya"
age=24
print(f"My name is {name} and I am {age} years old.")