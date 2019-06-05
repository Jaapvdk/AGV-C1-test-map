
lijst = []
teller = 0

aantal = int(input("hoeveel verschillende studenten met hun gegevens wil je invoeren?"))

for teller in range(0, aantal):
    nummer = int(input("wat is jouw studentnummer?"))
    vak = input("wat voor vak wil je invoeren?")
    cijfer = float(input("wat is jouw cijfer voor dat vak?(vul 0 in als je geen cijfer hebt)"))
    print('')
    lijst.append([nummer, vak, cijfer])
        
    teller = teller + 1
    
print('')    
vak2 = input("voor wat voor vak wil je de resultaten zien?")
teller2 = 0

print("studentnummer  vak   cijfer")
print("___________________________")
print('')
for teller2 in range(0, aantal):
    if lijst[teller2][1] ==vak2:
        print("        ", lijst[teller2])
    teller2 = teller2 + 1

print("___________________________")
print('')

vak3 = input("voor welk vak wil je het gemiddelde berekenen?")

teller3 = 0
som = 0
aantal2 = 0

for teller3 in range(0, aantal):
    if lijst[teller3][1] == vak3:
        cijfer = lijst[teller3][2]
        if cijfer != 0:
            som = som + cijfer
            aantal2 = aantal2 +1
    
    
    teller3 = teller3 + 1
    
gem = som / aantal2
gem = round(gem, 2)
print("het gemiddelde van het vak", vak3, "is:", gem)



    
