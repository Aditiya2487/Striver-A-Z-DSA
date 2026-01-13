def greet(name):
    print(f"Hello, {name}!")

greet("Aditya")
greet("Raj")

# Function Arguments
# Arguments are values sent to the function.

# Types of Functions
# Built-in: Provided by Python (print(), len(), range())
# User-defined: Created by you (def my_func():)
# Keyword Arguments
# You can send arguments with the key = value syntax.
def describe_person(name, age):
    print(f"{name} is {age} years old.")
    
describe_person(age=24, name="Aditya")

# Default Arguments
# You can provide default values for arguments.
def describe_city(city, country="India"):
    print(f"{city} is in {country}.")
describe_city("Patna")
describe_city("Kathmandu", "Nepal") #when you want to override default value Here country="Nepal" is passed to override default value country="India"

# Variable-length Arguments
# Use *args for non-keyword variable-length arguments.
def sum_numbers(*args):
    return sum(args)
print(sum_numbers(1, 2, 3))
print(sum_numbers(10, 20, 30, 40, 50))

# Use **kwargs for keyword variable-length arguments.
def print_info(**kwargs):
    for key, value in kwargs.items():
        print(f"{key}: {value}")
print_info(name="Aditya", age=24, city="Bihar")
print_info(product="Laptop", price=1000, brand="Dell")

# Return Statement
# Functions can return values using the return statement.
def multiply(a, b):
    return a * b
result = multiply(5, 4)
print(f"5 multiplied by 4 is {result}")
