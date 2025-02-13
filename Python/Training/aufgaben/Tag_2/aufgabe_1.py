def aufgabe_1():
    #Aufgabe 1:
    zahlenliste = int(input("Bitte gib eine Zahl ein: "))
    gerade_zahlen = []

    for i in range(1, zahlenliste+1):
        if i % 2 == 0:
            gerade_zahlen.append(i)  # Hier richtig mit .append()

    return gerade_zahlen

# Optional: Teste, ob die Datei direkt ausgeführt wird
if __name__ == "__main__":
    print(aufgabe_1())  # Gibt die Liste aus


