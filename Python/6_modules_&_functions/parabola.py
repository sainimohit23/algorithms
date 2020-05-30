import tkinter


def parabola(a):
    return a*a/100


def draw_axes(cnv):
    cnv.update()
    x_origin = cnv.winfo_width() / 2
    y_origin = cnv.winfo_height() / 2
    cnv.configure(scrollregion=(-x_origin, -y_origin, x_origin, y_origin))
    cnv.create_line(-x_origin, 0, x_origin, 0, fill='black')
    cnv.create_line(0, y_origin, 0, -y_origin, fill='black')


def plotter(a, b, cnv):
    cnv.create_line(a, b, a+1, b+1, fill='red')


mainWindow = tkinter.Tk()
mainWindow.geometry('640x480')

canvas = tkinter.Canvas(mainWindow, width=640, height=480, bg='green')
canvas.grid(row=0, column=0)
draw_axes(canvas)
for x in range(-200, 201):
    y = parabola(x)
    print(x, ' ', y)
    plotter(x, -y, canvas)

mainWindow.mainloop()
