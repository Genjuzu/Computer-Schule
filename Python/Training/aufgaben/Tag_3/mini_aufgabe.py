#mini aufgaben:

def anime_figuren():
    animes = ["Naruto", "Attack on Titan", "Berserk"]
    print(animes)
    usr_anime = input("\nPlease add yout favorite anime: ")
    animes.append(usr_anime)
    return animes


# Optional: Teste, ob die Datei direkt ausgeführt wird
if __name__ == "__main__":
    print(anime_figuren())  # Gibt die Liste aus

