
import cv2

img = cv2.imread(r"D:\Codes\Python\IP_Images\text.jpg", cv2.IMREAD_COLOR)

grayscale = cv2.cvtColor(img, cv2.COLOR_RGB2GRAY)
res = cv2.resize(grayscale, (400, 400))
hsv = cv2.cvtColor(img, cv2.COLOR_RGB2HSV)

ret, thresh = cv2.threshold(res, 150, 255, cv2.THRESH_BINARY_INV)
ret1, thresh2 = cv2.threshold(res, 150, 255, cv2.THRESH_BINARY)
ret2, thresh3 = cv2.threshold(res, 150, 255, cv2.THRESH_OTSU)
ret3, thresh4 = cv2.threshold(res, 150, 255, cv2.THRESH_TOZERO)

cv2.imshow('gray', grayscale)
cv2.imshow('hsv', hsv)
cv2.imshow('res', res)
cv2.imshow('thresh', thresh)

cv2.imshow('thresh2', thresh2)
cv2.imshow('thresh3', thresh3)
cv2.imshow('thresh4', thresh4)

cv2.waitKey(0)
cv2.destroyAllWindows()
