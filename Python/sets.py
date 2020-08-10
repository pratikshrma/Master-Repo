# List use []
#touples use ()
#SO Whats left
# yeah Sets use {} these
# properties
# you cannot have duplicates in a sets
# and it is also unordered and gonna be random evertime 
# so one use case san be that you make a list caste it into a set and et rid of all the duplictes and then revert back it to the 
#list and boom you gotta list with no duplicates in it 
# and append dosent work in sets

s={'banana','raseberry'}
s.add('hello')
s.add('strawberry')
s.add('yobro')
print(s)

l=[1,1,1,2,3,4,4,4,5,5,6,8,9,7,4,5,]
no_duplicate_set=set(l)
print(no_duplicate_set)

no_duplicate_list=list(no_duplicate_set)
print(no_duplicate_list)


# now one more usecase

Library1={'Harry Porter','Hunger games','Lord of the Rings'}
Library2={'Harry Porter','Legand of Narnia'}

all_books_in_town=Library1.union(Library2)
print(all_books_in_town)

# now if you wanna check whicjh book is in both of the libs

common_books_in_both_libs=Library1.intersection(Library2)
print(common_books_in_both_libs)

# now if you wwanna check which are unique in both of the libs

diffBooksLib1=Library1.difference(Library2)
diffBooksLib2=Library2.difference(Library1)

print(diffBooksLib1)
print(diffBooksLib2)

# no if you wanna clear clear the list 

Library1=Library1.clear()
print(Library1)
