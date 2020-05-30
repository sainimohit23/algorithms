import shelve
with shelve.open('shelve_practice') as my_file:
    # my_file["honda"] = "honda city"
    # my_file["maruti"] = "swift dezire"
    # my_file["toyota"] = "Fortuner"
    # my_file["renault"] = "duster"

    # my_file["maruti"] = "ertiga"

    for i in my_file:
        print(i + " - " + my_file[i])
