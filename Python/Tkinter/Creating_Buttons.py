from tkinter import *
root=Tk()

def myClick():
    myLabel=Label(root,text='Look it Clicked the Button')
    myLabel.pack()


# myButton=Button(root,text='Button',state=DISABLED)# this is just to shoow that you could also disable the button
myButton=Button(root,text='Button',padx=50,pady=50,command=myClick)#with pad you could change the dimensions of the button
myButton.pack()


root.mainloop()