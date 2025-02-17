from aufgaben.Tag_3.mini_aufgabe import anime_figuren
import sys

def main():

    while True:  # ✅ Hauptmenü-Schleife bleibt aktiv

        # Begrüßung und Auswahl
        print("\nWillkommen zu Tag 3 der Python Challenge.\nBitte wähle ein Programm:\n\n",
              "[1] Mini-Aufgaben\n",
              "[2] TBA\n",
              "[3] TBA\n",
              "[4] TBA\n",
              "[X] Exit\n",)

        auswahl = input()

        # Eingabe validieren
        while auswahl not in ["1", "2", "3", "4", "X", "x"]:
            auswahl = input("Ungültige Auswahl. Versuche es erneut: ")

        # Mini-Programme Menü
        if auswahl == "1":
            while True:  # ✅ Zweites Menü bleibt offen, bis der Nutzer "B" drückt
                print("\nWelches Mini-Programm?\n",
                      "[1] Anime Figuren\n",
                      "[2] TBA\n",
                      "[3] TBA\n",
                      "[4] TBA\n",
                      "[B] Zurück\n", )  # ✅ Zurück-Option!

                sub_auswahl = input()

                # Eingabe validieren
                while sub_auswahl not in ["1", "2", "3", "4", "B", "b"]:
                    sub_auswahl = input("Ungültige Auswahl. Versuche es erneut: ")

                # Anime-Figuren ausführen
                if sub_auswahl == "1":
                    print(anime_figuren())

                # Zurück zum Hauptmenü
                elif sub_auswahl.upper() == "B":
                    break  # ✅ Verlässt nur das Mini-Menü, nicht das ganze Programm

        # Abbruch des Hauptmenüs:
        elif auswahl.upper() == "X":
            print("Alles klar. Bis bald!")
            sys.exit()  # 🚀 Beendet das Programm sofort!




if __name__ == '__main__':
    main()