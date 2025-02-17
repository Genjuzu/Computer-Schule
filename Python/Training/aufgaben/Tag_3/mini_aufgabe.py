import sys

#mini aufgaben:

def anime_figuren():
    animes = ["Naruto", "Attack on Titan", "Berserk"]
    print(animes)
    usr_anime = input("\nPlease add yout favorite anime: ")
    animes.append(usr_anime)
    return animes

def rap_songs():
    songs_2024 = ["Not Like Us", "Wow Freestyle", "Man Cry"]
    print(songs_2024, "Aktuell sind es", len(songs_2024), "Songs!")

    usr_songs = input("\nPlease add yout favorite song: ")
    songs_2024.append(usr_songs)

    return len(songs_2024)

def buecher():
    buecher = ["Siddhartha", "Der Fänger im Rochen", "Narziss und Goldmund"]
    print(buecher)

    usr_buch = input("Bitte füge dein Lieblingsbuch hinzu: ")
    usr_index = int(input("An welche Stelle in der Liste soll das buch? ")) - 1
    while usr_index >= len(buecher)+1:
        print("Ungültige Eingabe. Es gibt nur ", len(buecher), "Bücher in der Liste! Bitte nenne ein Buch: ")
        usr_index = input()

    buecher.insert(usr_index, usr_buch)

    auswahl = input("Möchtest du noch mehr Bücher hinzufügen?\n[1] Ja\n[2] Nein, es reicht!")

    while auswahl not in ["1", "2"]:
        auswahl = input("Ungültige Auwahl! Versuche es erneut!")

    while auswahl == "1" or auswahl == "2":

        if auswahl == "1":
            usr_buch = input("Super. Welches buch noch?")
            usr_index = int(input("An welche Stelle in der Liste soll das buch? "))

            buecher.insert(usr_index, usr_buch)
            print("Neue Liste: ", buecher)

        elif auswahl == "2":
            break

        auswahl = input("Erneut spielen?\n[1] Ja\n[2] Nein, es reicht!")

        while auswahl not in ["1", "2"]:
            auswahl = input("Ungültige Auwahl! Versuche es erneut!")

    return buecher

def bad_artists():
    artists = ["J-Cole", "Kendrick Lamar", "Drake"]
    print("Whacke Rapper!\n\nWer gehört nicht auf diese Liste:\n[1] J-Cole \n[2] Kendrick Lamar\n[3] Drake")
    auswahl = int(input())

    while auswahl > len(artists)+1 or auswahl < 1:
        auswahl = int(input("Ungültige Auwahl! Versuche es erneut!\n[1] J-Cole\n[2] Kendrick Lamar\n[3] Drake"))

    print("Du hast", artists[auswahl-1], "gewählt!")

    if auswahl != 3:
        print("Wenn du meinst lelleck...")

    elif auswahl == 3:
        print("Exactly...")

    artists.pop(auswahl-1)

    print("Es bleiben ", len(artists), "übrig", "\n\nNeue Liste: \n[1]", artists[0], "[2]", artists[1])

    auswahl = int(input("Wer ist der bessere?\n\n"))

    while auswahl >= 3 or auswahl < 1:
        print("Unültige Eingabe!\nEs bleiben \n", artists[0], "\n&\n", artists[1])

    print("Du hast", artists[auswahl - 1], "gewählt!\n")

    if auswahl == 1:
        print("Du hast", artists[0], "gewählt!\n", artists[1], "ist somit raus!")
        artists.pop(1)

    elif auswahl== 2:
        print("Du hast", artists[1], "gewählt!",artists[0], "ist somit raus!")
        artists.pop(0)

    if artists[0] == "Drake":
        print("Dir ist nicht mehr zu helfen du Lelleck! \nPeazeOut")
        sys.exit()

    print("Somit bleibt nur noch: ")

    return artists






# Optional: Teste, ob die Datei direkt ausgeführt wird
if __name__ == "__main__":
    print(anime_figuren())  # Gibt die Liste aus

