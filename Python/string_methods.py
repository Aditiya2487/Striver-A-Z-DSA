text = "Aditya"
print(text.lower())
print(text.upper())
print(text.title()) #or text.capitalize()

text = "   Hello, World!   "
print(text.strip())  # removes leading and trailing whitespace

text = "apple,banana,cherry"
print(text.split(","))  # splits the string into a list at each comma

items=["I" ,"love" ,"programming"]
print(" ".join(items)) # joins list of strings into a single string with spaces
print(" - ".join(items)) # joins list of strings into a single string with ' - ' as separator

test ="I love C++"
print(text.replace("C++", "Python"))  # replaces C++ with Python

text ="Hello World"
print(text.find("World"))  # returns the starting index of "World"
print(text.find("Python"))  # returns -1 as "Python" is not found
print(text.index("World"))  # returns the starting index of "World"
# print(text.index("Python"))  # raises ValueError as "Python" is not found
print(text.count("o"))  # counts occurrences of 'o' in the string
print(text.startswith("Hello"))  # checks if string starts with "Hello"
print(text.endswith("World"))  # checks if string ends with "World"

file = "data.csv"
print(file.endswith(".csv"))  # True

text = "Python"
print(len(text))  # 6


print("123".isdigit())   # True
print("abc".isalpha())   # True