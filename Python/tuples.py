# Python Tuple DataType its just a list with constrait and it has parenthesis instead of brackets

t=(1,2,3)
print(t[0])

# yo cant add element and you can not remove element from it
# so what is it good for

credit_Card1=(123456789123456,'Joe Rogan','09/25','014')
credit_Card2=(123456789123456,'Joe Rogan','09/25','014')
# /so none of this can be changed

credit_Cards=[credit_Card1,credit_Card2]
# /this id how it is used generelly

person=('Nancy',25,'pizza')

name,age,fav_fruit=person
# this is how you can unpack a  touple
print(name)
print(fav_fruit)

# /now you can even itterate over it
person1=('Nancy',25,'pizza')
person2=('Joe Rogan',50,'pasta')

people=[person1,person2]

for _name,_age,fav__fruit in people:
    print()
    print(_name)
    print(_age)
    print(fav__fruit)
    print()
