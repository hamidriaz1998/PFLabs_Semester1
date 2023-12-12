country = lambda x,y: (x/y)*100
landmass = 148940000
name = input("Enter name: ")
area = int(input("Enter area: "))
print(f"{name} is {round(country(area,landmass),2)} of the total world's landmass")