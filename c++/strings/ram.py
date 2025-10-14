s1 = "night"
s2 = "thing"


""" what well will be doing here is we are sorting the array and checking two strings whether they are equal or not """

if len(s1)!=len(s2):
    print("not a valid anagram")
else:
    s1 = sorted(s1)
    s2 = sorted(s2)
    if(s1 == s2):
        print("Equal")
    else:
        print("Not equal")
    