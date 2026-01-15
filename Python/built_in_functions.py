# import sys
# sys.stdin=open('input.txt', 'r')
# sys.stdout=open('output.txt', 'w')
import math

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

arr=[5,6,-8,7]
print(min(arr))
print(max(arr))
print(max(arr, key=abs))
print("Sum of elements in array:"+ str(sum(arr)))
print("Sum of elements in array:"+ str(sum(arr,start=10))) # adding 10 to the sum of array elements, we can remove start parameter also write sum(arr,10)
print(math.prod(arr)) # product of elements in array
print(math.prod(arr, start=2)) # product of elements in array multiplied by 2
print(len(arr)) # length of array in this case it is 4 
print(arr.count(6)) # count of 6 in the array
print(arr.count(10)) # count of 10 in the array

fruit2=["apple", "mango"]
print(max(fruit2, key=len)) # WHEN BOTH HAVE SAME LENGTH , PYTHON RETUURN THE FIRST OCCURENCE SO in this case it will return 'apple'
print(min(fruit2, key=len))

fruit3=["mango", "apple"]
print(max(fruit3, key=len)) # WHEN BOTH HAVE SAME LENGTH , PYTHON RETUURN THE FIRST OCCURENCE SO in this case it will return 'mango'
print(min(fruit3, key=len))

array1=[True, False, True, True]
print(any(array1)) # returns True if any one element is True if all are False then returns False
print(all(array1)) # returns True if all elements are True otherwise False


array2=[5,6,1,3] #(index, value) (0,5),(1,6),(2,1),(3,3)
print(list(enumerate(array2))) # it will return list of tuples containing index and value
for index, value in enumerate(array2):
    print(f"Index: {index}, Value: {value}")

print(list(reversed(array2))) # it will return the reversed array
print(array2) # original array will remain unchanged

arr3  =list(range(5)) # [0,1,2,3,4]
print(arr3)
arr4 = list(range(2,10)) # [2,3,4,5,6,7,8,9]
print(arr4)