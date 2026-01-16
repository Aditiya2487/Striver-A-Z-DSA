from collections import Counter
arr=[1,2,5,2,4,4,3,4,4,4,5,5,5,5]
counter=Counter(arr)
print(counter)

print(arr[2]) # it will return the count of 2 in the array
print(arr[5]) #it will return the count of 5 in the array

print(counter.most_common(2)) # it will return 2 most common elements as list of tuples
print(counter.most_common(1)) # it will return 1 most common element as list of tuples it will return [(5, 5)] because it comes first in the array among elements with same frequency (for example 4 and 5 both have frequency 5 but 5 comes first in the array so it will return 5)
print(list(Counter(arr).elements())) # it will return all elements in the array according to their frequency
arr2=Counter([4,4,4,4,5,5,5,6,6,7])
arr2.update([99])
print(arr2)
arr2.subtract([4,5])
print(arr2) # it will subtract the count of 4 and 5 by 1

c1=Counter([1,2,3,4,5,5,5])
c2=Counter([4,4,4,5,5,6,7,8])
print((c1+c2)) # it will add the counts of both the counters
print(c1-c2) # it will subtract the counts of c2 from c1
print(c1&c2) # it will return the minimum counts of both the counters of common elements
print(c1|c2) # it will return the maximum counts of both the counters of all elements