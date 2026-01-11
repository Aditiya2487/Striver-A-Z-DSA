# import sys
# sys.stdin=open('input.txt', 'r')
# sys.stdout=open('output.txt', 'w')

name="Aditya2487"
print(name)
print(len(name))

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
print(fruits)