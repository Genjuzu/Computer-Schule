from aufgaben.Tag_2.aufgabe_1 import aufgabe_1
from aufgaben.Tag_2.aufgabe_2 import aufgabe_2
from aufgaben.Tag_2.aufgabe_3 import aufgabe_3

def main():
    auswahl = "1"
    while auswahl != "x":
        auswahl = input(''' \nWähle eine Aufgabe:\n 
                            [1] Gerade Zahlen aus Liste
                            [2] Passwort setzen
                            [3] Primzahlen
                            
                            [x] Beenden
                            
                        ''')

        # Auswahl
        if auswahl == "1":
            print("Aufgabe 1:", aufgabe_1(), "\n\n")  # Jetzt wird das Ergebnis ausgegeben!

        elif auswahl == "2":
            aufgabe_2()

        elif auswahl == "3":
            print (aufgabe_3())

        # Spiel Beenden
        elif auswahl == "x" or auswahl == "X":
            print("Alles klar, bis bald!")
            break



        auswahl = input("Erneut spielen?\n[1] Ja\n[x]Nein")
        if auswahl == "x" or auswahl == "X":
            print("Alles klar, bis bald!")
            break

# Falls die Datei direkt ausgeführt wird, starte main()
if __name__ == "__main__":
    main()

