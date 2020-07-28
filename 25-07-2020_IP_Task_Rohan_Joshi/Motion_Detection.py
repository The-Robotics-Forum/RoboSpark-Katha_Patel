
from cv2 import *

cap = VideoCapture(0)
ret, old = cap.read()

while 1:
    ret1, new = cap.read(0)
    diff = absdiff(old, new)

    imshow('original', new)
    imshow('Motion', diff)

    old = new

    k = waitKey(1)
    if k == 32:
        break

cap.release()
destroyAllWindows()
