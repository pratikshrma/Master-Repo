names=['aman','shabu','kunal','koml_di']
l=[]
for i in names:
    l.append(i)

print(l)

print([person for person in names])

l=[]
for i in names:
    l.append(i)
print(l)

print([person +' yo hello.' for person in names])

movies_and_rating={
    "Intersteller":9,
    "shrek":3,
    "Dark_Night":8,
    "Fifty_Shades":2,
    "Fifty_Shades_Darker":3
}

l=[]
for movies in movies_and_rating:
    if movies_and_rating[movies]>5:
        l.append(movies)

print(l)

print([movie for movie in movies_and_rating if movies_and_rating[movies]>6])