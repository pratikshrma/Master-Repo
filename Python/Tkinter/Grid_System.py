from tkinter import *
root=Tk()

# now because python is object oriented you could also doo this sort of stuff 

myLabel1=Label(root,text='Hello World').grid(row=0,column=0)
myLabel2=Label(root,text='Hello my name is Aman').grid(row=1,column=5)
myLabel3=Label(root,text='')



# myLabel1.grid(row=0,column=0)
#  myLabel2.grid(row=1,column=5)#this is all relative so this 5 dosent mean anything
# myLabel1.grid(row=0,column=1)

root.mainloop()