# import sys
# sys.stdin=open('input.txt', 'r')
# sys.stdout=open('output.txt', 'w')
print("My name is Python")
print("I am learning programming")
print(2 + 3)
print("2 + 3 =", 2 + 3)
name="Aditya"
age = 24
city = "Bihar"
print(name)
print(len(name))
print("My name is", name)
print(name, "is", age, "years old")
print(name, "lives in", city)

arr=[11,19,12,13,14]
print(sorted(arr))
print(sorted(arr, reverse=True))
print(arr)

(arr.sort()) # list will be changed permanently
print(arr)

arr1=[-32, -2, -45, 0, 23, 11]
print(sorted(arr1,key=abs)) # sort according to absolute value
print(arr1)

fruits=["banana", "apple", "mango", "kiwi", "grape"]
print(sorted(fruits)) # sort according to alphabetical order
print(sorted(fruits, key=len)) # sort according to length of string
print (sorted(fruits, reverse=True)) # sort in reverse alphabetical order
print(sorted(fruits, key=len, reverse=True)) # sort according to length of string in reverse order
print(fruits)