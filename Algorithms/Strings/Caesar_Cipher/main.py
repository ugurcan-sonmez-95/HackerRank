### Caesar Cipher - Solution

def caesarCipher(s, rot_count):
    for ch in range(len(s)):
        if s[ch].isalpha():
            first_letter = 'A' if s[ch].isupper() else 'a'
            s[ch] = chr(ord(first_letter) + ((ord(s[ch]) - ord(first_letter) + rot_count) % 26))
    print(*s, sep='')

n = int(input())
s = list(input()[:n])
rot_count = int(input())
caesarCipher(s, rot_count)