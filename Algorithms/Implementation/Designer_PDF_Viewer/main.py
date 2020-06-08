### Designer PDF Viewer - Solution

def designerPdfViewer(h, word):
    maximum = 1
    for ch in word:
        maximum = max(maximum, h[ord(ch)-ord('a')])
    area = len(word) * maximum
    print(area)

h = list(map(int, input().split()[:26]))
word = input()[:10]
designerPdfViewer(h, word)