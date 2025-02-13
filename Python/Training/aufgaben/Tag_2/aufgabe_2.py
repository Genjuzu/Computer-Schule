def aufgabe_2():
    password=input("Bitte gebe ein Passwort ein: ")
    max_pw = 9
    index = 0

    for i in password:
        index +=1

    while index > max_pw:
        print("Passwort zu lang")
        password = input("Bitte gebe erneut ein Passwort ein")
        for i in password:
            index += 1

    if index == max_pw-1:
        print("Perfekt, dein Passwort hat exakt 8 Zeichen!")



    print("Super! Dein Passwort wurde gesetzt! Es hat ", index, "Zeichen!")
    return password



if __name__ == "__main__":
    aufgabe_2()