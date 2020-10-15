#object oriented programing

class Dog:
	def __init__(self,name,age):
		self.name=name
		self.age=age
		# print(name)

	def get_name(self):
		return self.name

	def add_one(self,x):
		return x+1

	def bark(self):
		print("bark")

	def get_age(self):
		return self.age

	def set_age(self,age):
		self.age=age

d=Dog("Tim",34)
d.set_age(23)
print(d.get_age())
