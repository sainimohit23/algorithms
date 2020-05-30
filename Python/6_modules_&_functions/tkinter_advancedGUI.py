try:
    import tkinter
except ImportError: # python 2
    import Tkinter as tkinter

# ========================================================


def btnClick(number):
    global operation
    operation = operation + str(number)
    text_info.set(operation)


def btnClear():
    global operation
    operation = ""
    text_info.set("")


def btnEqual():
    global operation
    sumup = str(eval(operation))
    text_info.set(sumup)
    operation = ""

operation = ""
mainWindow = tkinter.Tk()
text_info = tkinter.StringVar()
# ========================================================

keys = [[('C', 1), ('CE', 1)],
        [('7', 1), ('8', 1), ('9', 1), ('+', 1)],
        [('4', 1), ('5', 1), ('6', 1), ('-', 1)],
        [('1', 1), ('2', 1), ('3', 1), ('*', 1)],
        [('0', 1), ('=', 1), ('/', 1)],
        ]

mainWindowPadding = 8

mainWindow.title("Calculator")
mainWindow.geometry('180x200-200-200')
mainWindow['padx'] = mainWindowPadding
# mainWindow.configure(bg='black')


entryFrame = tkinter.Frame(mainWindow, width=250, height=40, relief='raised', bd=2)
entryFrame.grid(row=0, column=0)
entryFrame["padx"] = 2
result = tkinter.Entry(entryFrame, justify='right', textvariable=text_info, width=22)
# result.place_configure(height=20)
result.grid(row=0, column=0, sticky='nsew')
result.configure(relief='sunken', bg='#91D1E8')
# help(tkinter.Entry)


keyPad = tkinter.Frame(mainWindow)
keyPad['padx'] = 4
keyPad.grid(row=1, column=0, sticky='nsew')

tkinter.Button(keyPad, text='7', command=lambda: btnClick(7), width=4, height=2, bg='#EA9C49').grid(row=0, column=0, columnspan=1,
                                                     sticky=tkinter.E + tkinter.W)
tkinter.Button(keyPad, text='8', command=lambda: btnClick(8), width=4, height=2, bg='#EA9C49').grid(row=0, column=1, columnspan=1,
                                                     sticky=tkinter.E + tkinter.W)
tkinter.Button(keyPad, text='9', command=lambda: btnClick(9), width=4, height=2, bg='#EA9C49').grid(row=0, column=2, columnspan=1,
                                                     sticky=tkinter.E + tkinter.W)
tkinter.Button(keyPad, text='4', command=lambda: btnClick(4), width=4, height=2, bg='#EA9C49').grid(row=1, column=0, columnspan=1,
                                                     sticky=tkinter.E + tkinter.W)
tkinter.Button(keyPad, text='5', command=lambda: btnClick(5), width=4, height=2, bg='#EA9C49').grid(row=1, column=1, columnspan=1,
                                                     sticky=tkinter.E + tkinter.W)
tkinter.Button(keyPad, text='6', command=lambda: btnClick(6), width=4, height=2, bg='#EA9C49').grid(row=1, column=2, columnspan=1,
                                                     sticky=tkinter.E + tkinter.W)
tkinter.Button(keyPad, text='1', command=lambda: btnClick(1), width=4, height=2, bg='#EA9C49').grid(row=2, column=0, columnspan=1,
                                                     sticky=tkinter.E + tkinter.W)
tkinter.Button(keyPad, text='2', command=lambda: btnClick(2), width=4, height=2, bg='#EA9C49').grid(row=2, column=1, columnspan=1,
                                                     sticky=tkinter.E + tkinter.W)
tkinter.Button(keyPad, text='3', command=lambda: btnClick(3), width=4, height=2, bg='#EA9C49').grid(row=2, column=2, columnspan=1,
                                                     sticky=tkinter.E + tkinter.W)
tkinter.Button(keyPad, text='+', command=lambda: btnClick("+"), width=4, height=2, bg='#EA9C49').grid(row=0, column=3, columnspan=1,
                                                     sticky=tkinter.E + tkinter.W)
tkinter.Button(keyPad, text='-', command=lambda: btnClick("-"), width=4, height=2, bg='#EA9C49').grid(row=1, column=3, columnspan=1,
                                                     sticky=tkinter.E + tkinter.W)
tkinter.Button(keyPad, text='*', command=lambda: btnClick("*"), width=4, height=2, bg='#EA9C49').grid(row=2, column=3, columnspan=1,
                                                     sticky=tkinter.E + tkinter.W)
tkinter.Button(keyPad, text='/', command=lambda: btnClick("/"), width=4, height=2, bg='#EA9C49').grid(row=3, column=3, columnspan=1,
                                                     sticky=tkinter.E + tkinter.W)
tkinter.Button(keyPad, text='C', command=lambda: btnClear(), width=4, height=3, bg='red').grid(row=3, column=0, columnspan=1,
                                                     sticky=tkinter.E + tkinter.W)
tkinter.Button(keyPad, text='=', command=lambda: btnEqual(), width=4, height=2, bg='#EA9C49').grid(row=3, column=2, columnspan=1,
                                                     sticky=tkinter.E + tkinter.W)
tkinter.Button(keyPad, text='0', command=lambda: btnClick(0), width=4, height=2, bg='#EA9C49').grid(row=3, column=1, columnspan=1,
                                                     sticky=tkinter.E + tkinter.W)


mainWindow.update()
# mainWindow.minsize(keyPad.winfo_width() + mainWindowPadding, result.winfo_height() + keyPad.winfo_height())
# mainWindow.maxsize(keyPad.winfo_width() + mainWindowPadding, result.winfo_height() + keyPad.winfo_height())

mainWindow.mainloop()
