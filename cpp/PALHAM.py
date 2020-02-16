for test in range(int(input())):
    set_a = set()
    for i in range(26):
        print("a" + chr(ord("a") + i) + chr(ord("a") + i) + "ded" + chr(ord("a") + i) + chr(ord("a") + i) +"a", "a" + "b" + chr(ord("a") + i) + chr(ord("a") + i) +"e" + chr(ord("a") + i) + chr(ord("a") + i) + "b" +"a")
        set_a.add("a" + chr(ord("a") + i) + chr(ord("a") + i) + "ded" + chr(ord("a") + i) + chr(ord("a") + i) +"a")
    set_b = set()
    for i in range(26):
        set_b.add("a" + "b" + chr(ord("a") + i) + chr(ord("a") + i) +"e" + chr(ord("a") + i) + chr(ord("a") + i) + "b" +"a")
    victims = set_a.intersection(set_b)
    print(list(victims))