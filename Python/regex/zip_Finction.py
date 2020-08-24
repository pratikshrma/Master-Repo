list1=[1,2,3,4,5,6,7]
list2=['one','two','three','four','five','six']
# so in python 2 it will work directly but in python 3 you gotta cast it to lists first cool cool!!

zipped=list(zip(list1,list2))
print(zipped)

# /now youi might have noticed that the 7 is ignoured from this is because the shorter list take the precidence and it will truncate
#(truncate is just a fansy word for cutting off ) any accessicve part from the longer list 


# now we could also unzip

unzipped= list( zip(*zipped))
print(unzipped)

# for (l1,l2) in zip(list1,list2):
#     print(l1)
#     print(l2)

items = ['Apple','Banana','Brunch']
counts=[3,5,6,]
prices=[10,23,45]

sentence=[]
for (item,count,price) in zip(items,counts,prices):
    item,count,price=str(item),str(count),str(price)
    sentences='i bought '+ count+' '+item+' for '+price+' each'
    sentence.append(sentences)

print(sentence)