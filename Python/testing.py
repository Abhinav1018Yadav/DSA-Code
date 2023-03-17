char = input("Enter a char ")
if char.lower() in {'a','e','i','o','u'}:
    print("Given character is a vowel")
elif char.upper() in {'A','E','I','O','U'}:
    print("Given character is a vowel")
else:
    print("Given character is a consonant")