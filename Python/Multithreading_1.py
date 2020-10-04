#now finally lets talk about some multithreading
from threading import *
from time  import sleep
class Hello(Thread):
	def run(self):
		for i in range(10):
			print("Hello world Threaad 1")
			sleep(1)

class Hi(Thread):
	def run(self):
		for i in range(10):
			print("Hi from the other thread 2")
			sleep(1)

t1=Hello()
t2=Hi()

t1.start()
sleep(0.2)
t2.start()

t1.join()
t2.join()
print("By")