from cs50 import get_string

s = 0  # sentences
l = 0  # letters
w = 1  # words (start with 1 since last word has no space)

text = get_string("Text: ")
length = len(text)

for i in range(length):
    if text[i] == ' ':
        w += 1
    elif text[i] in ['.', '!', '?']:
        s += 1
    elif text[i].isalpha():   # FIXED here
        l += 1

# Coleman–Liau index formula
L = (l / w) * 100
S = (s / w) * 100
index = round(0.0588 * L - 0.296 * S - 15.8)

# Output result
if index < 1:
    print("Before Grade 1")
elif index >= 16:
    print("Grade 16+")
else:
    print(f"Grade {index}")  # FIXED here
