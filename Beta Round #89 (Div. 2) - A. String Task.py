def Solution():
    x = ""
    s = raw_input()
    s = s.lower()
    for letter in s:
        if letter == 'a' or letter == 'e' or letter == 'i' or letter == 'o' or letter == 'u' or letter == 'y':
            continue
        else:
            x = x + '.'
            x = x + letter
    print x

Solution();
