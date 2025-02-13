from aufgaben.aufgabe_1 import aufgabe_1
from aufgaben.aufgabe_2 import aufgabe_2

def main():

    auswahl = 0
    while auswahl != "x":
        auswahl = input(''' \nWähle eine Aufgabe:\n 
                            [1]Gerade Zahlen aus Liste
                            [2]Passwort setzen
                            
                            [x] Beenden
                            
                        ''')
        if auswahl == "1":
            print("Aufgabe 1:", aufgabe_1(), "\n\n")  # Jetzt wird das Ergebnis ausgegeben!

        elif auswahl == "2":
            aufgabe_2()

        # Spiel Beenden
        elif auswahl == "x" or "X":
            print("Alles klar, bis bald!")
            break

        auswahl = input("Erneut spielen?\n[1] Ja\n[x]Nein")
        if auswahl == "x" or "X":
            print("Alles klar, bis bald!")
            break

# Falls die Datei direkt ausgeführt wird, starte main()
if __name__ == "__main__":
    main()

