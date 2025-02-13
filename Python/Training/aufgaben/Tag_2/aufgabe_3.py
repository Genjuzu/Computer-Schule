def ist_primzahl(zahl):
    if zahl < 2:
        return False                # Alle Zahlen kleiner als 2 sind KEINE Primzahlen

    # for teiler in range(2,zahl):    # Prüfe ALLE Zahlen von 2 bis `zahl-1`
    for teiler in range(2, int(zahl ** 0.5) + 1):  # Prüfe Teilbarkeit bis Wurzel von 'zahl'
        if zahl % teiler == 0:      # Falls die Zahl teilbar ist → KEINE Primzahl
            return False

    return True                     # Falls keine Teilung gefunden wurde → Primzahl!




def aufgabe_3():
    eingabe = int(input("Primator_3000:\n\nDieses Programm offenbahrt alle Primzahlen bis zu deiner Zahl!\nBitte gebe eine Zahl ein: "))
    startpunkt = int(input("Vielen Dank. Bitte gebe nun eine Zahl an, von der gestartet wird!"))
    primzahlen = []

    for i in range (startpunkt, eingabe +1):  # Prüfe jede Zahl von Start bis Eingabe
        if ist_primzahl(i):
            primzahlen.append(i)

    return primzahlen




if __name__ == "__main__":
    print("\n\n", aufgabe_3())

