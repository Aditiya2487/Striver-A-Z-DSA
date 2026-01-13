marks = 85

if marks >= 90:
    print("Grade A")
elif marks >= 80:
    print("Grade B")
else:
    print("Grade C")
    
# Ternary Operator
age = 20
status = "Adult" if age >= 18 else "Minor"
print(status) # Adult

# Logical Operators
age2 = 20
has_id = True
if age2 >= 18 and has_id:
    print("Can enter")

# Advanced Conditionals
# Short-circuit: Python stops checking if the result is known early.

# Chaining: You can chain comparisons.

age3 = 25
if 18 <= age3 <= 65:
    print("Working age")