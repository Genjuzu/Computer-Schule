
from aufgaben.Hauptmenü import hauptmenü, miniprogramme, selfmade_functions, abbruch
import sys


def main():

    while True:  # ✅ Hauptmenü-Schleife aktiv
        auswahl = hauptmenü()

        # Mini-Programme Menü
        if auswahl == "1":
            miniprogramme()

        if auswahl == "2":
            selfmade_functions()

        # Abbruch des Hauptmenüs:
        elif auswahl.upper() == "X":
            abbruch()



if __name__ == '__main__':
    main()