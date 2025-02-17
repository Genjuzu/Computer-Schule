from aufgaben.Tag_3.mini_aufgabe import anime_figuren, rap_songs, buecher, bad_artists
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
                      "[2] Rap-Songs\n",
                      "[3] Bücherliste\n",
                      "[4] Whacke Rapper\n",
                      "[B] Zurück\n", )  # ✅ Zurück-Option!

                sub_auswahl = input()

                # Eingabe validieren
                while sub_auswahl not in ["1", "2", "3", "4", "B", "b"]:
                    sub_auswahl = input("Ungültige Auswahl. Versuche es erneut: ")

                # Anime-Figuren ausführen
                if sub_auswahl == "1":
                    print(anime_figuren())

                # Rap Songs ausführen
                if sub_auswahl == "2":
                    print("Nun sind es", rap_songs(), "Songs")

                # Bücherliste ausführen
                if sub_auswahl == "3":
                    print("Neue Bücherliste:", buecher())

                # Whack-Mc ausführen
                if sub_auswahl == "4":
                    print(bad_artists())

                # Zurück zum Hauptmenü
                elif sub_auswahl.upper() == "B":
                    break  # ✅ Verlässt nur das Mini-Menü, nicht das ganze Programm

                sub_auswahl = input("\n\nErneut Spielen?\n\n[1] Mini-Programme\n[2] Abbruch\n[B] Zurück zum Hauptmenü")

                if sub_auswahl == "1":
                    print("Weiter gehts!")
                elif sub_auswahl == "2":
                    sys.exit()
                elif sub_auswahl.upper() == "B":
                    break

        # Abbruch des Hauptmenüs:
        elif auswahl.upper() == "X":
            print("Alles klar. Bis bald!")
            sys.exit()  # 🚀 Beendet das Programm sofort!




if __name__ == '__main__':
    main()