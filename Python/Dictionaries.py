# now some main functuions used in dictionaries are
# get() items() keys() values() pop() popitem() clear()
#

groceries={
    'Banana':5,
    'oranges':7
}

print(groceries['oranges'])
print(groceries.get('hello'))

# now you say that you could just make two array and that would solve the problem but what if you delete some element in that array 
# and now everything is shifthed one block and boom now you are screwed up so to make it simple we just invented a new datatype
# ie dictioneries in other languages it is also known as hashing or some shit!

contacts={
    'joe':{'phone':123434433,'email':'amnshrma341@gamil.com'},
    'rogan':323232,
    'aman':3423232,
    'sharma':3423
}
print(contacts.get('joe'))


# just skippes Dictionarie portion so check it out later if you feel like it or you need to for some reason