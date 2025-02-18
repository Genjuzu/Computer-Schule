def namenseingabe(name="Gast"):
    print("Hallo " + name,"\nDein Name wurde hier: def namenseingabe(name) eingefügt!\n(Hallo Name)")


def eingabe_taschenrechner():
    zahl_1 = int(input("Bitte gebe die erste Zahl ein: "))
    while zahl_1 <= 0:
        zahl_1 = int(input("Die Zahl muss über Null sein! "))

    zahl_2 = int(input("Bitte gebe die zweite Zahl ein: "))
    while zahl_2 <= 0:
        zahl_2 = int(input("Die Zahl muss über Null sein! "))

    operation = input("Welche Rechenoperation soll durchgeführt werden?\n"
                      "[+] Addition\n"
                      "[-] Subtraktion\n"
                      "[*] Multiplikation\n"
                      "[/] Division\n")
    while operation not in ["+", "-", "*", "/"]:
        operation = input("Bitte wähle ein gültiges Zeichen [+] [-] [*] [/]")

    return zahl_1, zahl_2, operation

def taschenrechner(zahl1, zahl2, operation):
    if operation == "+":
        return zahl1 + zahl2
    elif operation == "-":
        return zahl1 - zahl2
    elif operation == "*":
        return zahl1 * zahl2
    elif operation == "/":
        return zahl1 / zahl2

def overweight():
    height = int(input("Wie groß bist du?"))
    weight = int(input("Wie viel wiegst du?"))

    bmi = weight / ((height * height) / 1000)
    return bmi



