# LISTS;

# creating a list
List=[]
print("Blank List: ")
print(List)

#Creating a list of number
List=[10,20,12]
print("\n List of number: ")
print(List)

#creating a list of strings and accesssing
List=["Hello","Boi","What's","Up"]
print("\nList Items: ")
print(List[0])
print(List[2])

# NOW TIME FOR TOUPLE
# creating an empty tuple

Tuple=()
print("Initial empty Tuple: ")
print(Tuple)

# Creating a tuple with a list
list1=[1,2,3,4,5,6]
print("\n Tuple using list ")
print(tuple(list1))

# creating a tuple using built in functions
tuple1=tuple('Geeks')#i think tuple cannot only take one word at a time i think so 
#idk gotta do some more experiments 
print("\n Tuple with the use of Function: ")
print(tuple1)

# NOW SETS
# Creating a set
set1=set()
print("Initial Blank Set: ")
print(set1)

# creating a set with the help of a constructor(using object to store string)
String='GeeksForGeeks'
set1=set(String)
print("\nSet with the use of an Object: ")
print(set1)

# Creating a set with the use of the list
set1=set(["Hello","Boi","Whats","up"])
print(set1)


# DICTIONARY in python
# first what is dictionary in python
# dictionary are just unordered collection of data and used to store data value like a map

# NOTE:- Keys in a dictionary dosen't allow Polymorphism

# creating a dictionary with integer keyss
Dict={
    1:'hello',
    2:'boys',
    3:'what  up'
}
print("\nDictionary with the use of Integer keys: ")
print(Dict)

# creating a dictionary with Mixed keys
Dict={
    'Name':'Geek',
    1:[1,2,3,4,5,6]
}
print("\nDictionary with the use of Mixed Keys: ")
print(Dict)

# creating a Dictionary with dict() function

Dict=dict({
    1:'hello',
    2:'boi',
    3:'what',
    4:'up'
})
print('\nDictionary with  the use of the dict(): ')
print(Dict)


# creating a dictionary with each item as a Pair
Dict=dict([(1,'Geek'),(2,'For'),(3,'Geeks')])
print("\nDictionary with each item as a pair: ")
print(Dict)

# Now Nested Dictionary
# Creating a nestes dictionary]
Dict={
    1:'Geek',
    2:'For',
    3:{
        'A':'welcome',
        'B':'To',
        'C':'The',
        'D':'Nestes Dict'
    }
}
print('\nSo that is how a nested dict looks like: ')
print(Dict)


# Now adding elements to the dict
Dict={}
print("\nEmpty Dict")
print(Dict)

# Adding elements one at a time
Dict[0]='My'
Dict[1]='Name'
Dict[2]='Is'
Dict[4]='Aman'
print('So thats how you add elements to a dict:\n',Dict)


# REMEMBER A THING IT IS A UNORDERED LIST SO ADD WHATEVER YOU WANT IT WILL ALWAYS STICK ITSELF AT THE TOP SO
# SO DO WHATEVER YOU WANT TO DO WITH IT IT HAS NO RESTRICTIONS COOL!! COOL

# Adding a set of values to single key
Dict['Value_Set']=2,3,4
print("\nDictionary after adding 3 elements: ")
print(Dict)

# Updating an existing value
Dict[2]='Welcome'
print('\nUpdates key value')
print(Dict)

# adding nested key value to Dictionary 
Dict[5]={'Nested':{
    1:'hello',
    2:'Boi'
}}
print('\nAdding a Nested Key: ')
print(Dict)


# NOW THE FUN PART 
# ACCESSING ELEMENTS FROM A DICTIONARY

print('\n\n',Dict,'\n')
# Accessing a element using keyp
print('Accessing an element using keys')
print(Dict[5],'\n')

# Now using get method
print('Accessing an element using get: ')
print(Dict.get(1),'\n')

# Accessing element of a nested dictionary
print('Accessing element of a nested dictionary :\n')
print(Dict[5]['Nested'][1])