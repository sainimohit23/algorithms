import tkinter

mainWindow = tkinter.Tk()

mainWindow.title("Hello World")
mainWindow.geometry("400x400")

label = tkinter.Label(mainWindow, text="Hi there!!")
label.pack(side="top")

canvas = tkinter.Canvas(mainWindow, bg='red', width=200, height=200)
points = [0, 0, 200, 100, 0, 200]
canvas.create_polygon(points, outline='#476042',
                      width=3, fill='yellow')
canvas.pack(side='left', fill=tkinter.Y)
canvas2 = tkinter.Canvas(mainWindow, bg='blue', width=100, height=100)
canvas2.create_oval(100, 100, 20, 20, fill='purple', outline='green', width=5)
canvas2.pack(side='right', anchor='n', expand=True)
button1 = tkinter.Button(mainWindow, text='button 1')
button1.pack(side='top')
button2 = tkinter.Button(mainWindow, text='button 2')
button2.pack(side='bottom')
mainWindow.mainloop()
