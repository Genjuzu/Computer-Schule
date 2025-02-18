from aufgaben.Tag_3.mini_aufgabe import anime_figuren, rap_songs, buecher, bad_artists
from aufgaben.Tag_3.eigene_funktionen import namenseingabe, eingabe_taschenrechner, taschenrechner, overweight
import sys

def abbruch():
    print("Alles klar. Bis bald!")
    sys.exit()  # 🚀 Beendet das Programm sofort!

def hauptmenü():
    # Begrüßung und Auswahl
    print("\nWillkommen zu Tag 3 der Python Challenge.\n\nBitte wähle ein Programm:\n\n",
          "[1] Eingebaute Funktionen\n",
          "[2] Benutzerdefinierte Funktionen\n",
          "[X] Exit\n", )

    auswahl = input()

    # Eingabe validieren
    while auswahl not in ["1", "2", "X", "x"]:
        auswahl = input("Ungültige Auswahl. Versuche es erneut: ")

    return auswahl

def miniprogramme():
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

def selfmade_functions():
    while True:
        print("Alles Klar. Folgende Mini-Programme stehen zur Auswahl:",
              "\n[1] Namenseingabe",
              "\n[2] Taschenrechner ",
              "\n[3] BMI",
              "\n[B] Zurück"
              )
        sub_auswahl = input()

        while sub_auswahl not in ["1", "2", "3", "B", "b"]:
            print("FEHLER! Versuche es erneut:",
                  "\n[1] Namenseingabe",
                  "\n[2] Taschenrechner",
                  "\n[3] BMI",
                  "\n[B] Zurück")
            sub_auswahl = input()

        if sub_auswahl == "1":
            name = input("Wie lautet dein Name? Er wird als Parameter übergeben!")
            namenseingabe(name)
            print("\n Ohne deinen Namen heißt es:")
            namenseingabe()
            print("\n\n")

        elif sub_auswahl == "2":
            z1, z2, z3 = eingabe_taschenrechner()
            print("Das Ergebnis lautet: ", taschenrechner(z1, z2, z3))

        elif sub_auswahl == "3":

            patient_1 = overweight()
            print("\n\nDein BMI lautet:", patient_1)
            print("Untergewichtig: " , patient_1 < 15.5)
            print("Übergewichtig: " , patient_1 > 20 , "\n\n\n")



        elif sub_auswahl.upper() == "B":
            break

        weiter = input("Möchtest du ein anderes Programm ausprobieren?\n[1] Zurück\n[2] Hauptmenü\n[3] Beenden")
        while weiter not in ["1", "2", "B"]:
            weiter = input("Falsche Eingabe. Versuche es erneut.\n[1] Zurück\n[2] Hauptmenü\n[3] Beenden")

        if weiter == "2":
            break
        elif weiter.upper() == "B":
            abbruch()

