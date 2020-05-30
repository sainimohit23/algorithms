import tkinter

mainWindow = tkinter.Tk()
mainWindow.title('tkinter practice 2')
mainWindow.geometry('600x400')

label = tkinter.Label(mainWindow, text='hello')
label.grid(row=0, column=0)
leftFrame = tkinter.Frame(mainWindow)
leftFrame.grid(row=1, column=1)

canvas = tkinter.Canvas(leftFrame, relief='raised', borderwidth=2)
canvas.grid(row=1, column=0)

rightFrame = tkinter.Frame(mainWindow)
rightFrame.grid(row=1, column=2, sticky='news')

button1 = tkinter.Button(rightFrame, text='button 1')
button2 = tkinter.Button(rightFrame, text='button 2')
button3 = tkinter.Button(rightFrame, text='button 3')
button1.grid(row=0, column=0)
button2.grid(row=1, column=0, sticky='we')
button3.grid(row=2, column=0, sticky='ns')

mainWindow.columnconfigure(0, weight=1)
mainWindow.columnconfigure(1, weight=1)
mainWindow.columnconfigure(2, weight=1)

leftFrame.config(relief='raised', borderwidth=1)
rightFrame.config(relief='sunken', borderwidth=3)
rightFrame.columnconfigure(0, weight=1)
mainWindow.mainloop()
