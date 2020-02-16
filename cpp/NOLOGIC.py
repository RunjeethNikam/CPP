for _ in range(int(input())):
    question = input()
    k = -1
    for letters in "qwertyuiopasdfghjklzxcvbnm":
        if(letters in question):
            continue
        else:
            print(letters)
            break
    else:
        print("~")
    