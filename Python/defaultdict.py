from collections import defaultdict


dd= defaultdict(int)
dd[1]="Aditya"
dd["name"]=2487
dd['u']=99
dd['list']=[1,2,3,4,5]
print(dd["list"])  # it will return [1,2,3,4,5]
print(dd[5])  # it will return 0 as default value for int type
#default_dictionay never raises KeyError as it always return default value for non existing keys


from collections import OrderedDict
od=OrderedDict([(1,"Aditya"), (2,"Kumar"), (3,"Singh")])
print(od)  # it will return OrderedDict([])
print(od[1]) # it will return 'Aditya'
# print(od[10]) # it will raise KeyError as OrderedDict behaves like normal dictionary for non existing keys
if 10 in od:
    print(od[10])
else:
    print("Key 10 not found in OrderedDict") #extra check to avoid KeyError

# OrderedDict maintains the order of insertion of keys
od.move_to_end(2) # it will move the key 2 to the end
print(od)  # it will return OrderedDict([(1, 'Aditya'), (3, 'Singh'), (2, 'Kumar')])
od.move_to_end(3, last=False) # it will move the key 3 to the beginning
print(od)  # it will return OrderedDict([(3, 'Singh'), (1, 'Aditya'), (2, 'Kumar')])
od[4]="Messi" # it will add the new key value pair at the end
print(od)  # it will return OrderedDict([(3, 'Singh'), (1, 'Aditya'), (2, 'Kumar'), (4, 'Messi')])
od.popitem() # it will remove the last key value pair
print(od)  # it will return OrderedDict([(3, 'Singh'), (1, 'Aditya'), (2, 'Kumar')])
od.popitem(last=False) # it will remove the first key value pair
print(od)  # it will return OrderedDict([(3, 'Singh'), (2, 'Kumar')])
