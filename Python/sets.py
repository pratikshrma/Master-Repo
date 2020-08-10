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