# Creating an empty Dictionary
Dict = {}
print("Empty Dictionary: ")
print(Dict)

# Adding elements one at a time
Dict[0] = 'Ram'
Dict[2] = 'Rani'
Dict[3] = 2
print("\nDictionary after adding 3 elements: ")
print(Dict)

# Adding a new key 
Dict['Office'] = 'Adobe'
print("\nDictionary after adding new key: ")
print(Dict)

# Updating existing Key's Value
Dict[2] = 'Suna'
print("\nUpdated key value: ")
print(Dict)

# delete specified key
Dict.pop(2)
print("\nAfter deleting key 2")
print(Dict)
  
# Removes first item
Dict.popitem()
print("\nAfter deleting first item")
print(Dict)

# delete Dictionary
Dict.clear()
print("\nAfter deleting the complete dictionary")
print(Dict)



