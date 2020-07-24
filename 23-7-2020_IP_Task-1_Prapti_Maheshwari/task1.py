import cv2
img = cv2.imread(r"C:\Users\Prapti\Desktop\trf robospark\IP\text.jpg",cv2.IMREAD_COLOR)
cv2.imshow("color",img)
gray = cv2.imread("C:\\Users\\Prapti\\Desktop\\trf robospark\\IP\\text.jpg",cv2.IMREAD_GRAYSCALE) #Reading the  image in grayscale
cv2.imshow("gray",gray)#printing the image in grayscale
cv2.imwrite("C:/Users/Prapti/Desktop/trf robospark/IP/gray.jpg",gray)#saving the grayscale image in folder
print("shape of original image",img.shape)  #priting shape of original image

print("size of original image",img.size) #priting size of original image


img1=cv2.resize(img,(400,400))  # resizing  the image

cv2.imshow("resize",img1) #printing  the image after resizing
cv2.imwrite("C:/Users/Prapti/Desktop/trf robospark/IP/resize.jpg",img1)#saving the resized image in folder
print("shape of image after resizing",img.shape)  #printing shape of img after resizing

print("size of image after resizing",img.size) #priting size of img after resizing
ret,thresh1=cv2.threshold(gray,151,250,cv2.THRESH_BINARY) #binary method
cv2.imshow("binary thresh",thresh1)
cv2.imwrite("C:/Users/Prapti/Desktop/trf robospark/IP/binarythresh.jpg",thresh1)#saving the resized image in folder

ret,thresh2=cv2.threshold(gray,143,223,cv2.THRESH_BINARY_INV)# inv binary thresh
cv2.imshow("invert thresh",thresh2)
cv2.imwrite("C:/Users/Prapti/Desktop/trf robospark/IP/invthresh.jpg",thresh2)#saving the  image in folder

gaus=cv2.adaptiveThreshold(gray,255,cv2.ADAPTIVE_THRESH_GAUSSIAN_C,cv2.THRESH_BINARY,115,2)#adaptive thresh
cv2.imshow("gaussian thresh",gaus)
cv2.imwrite("C:/Users/Prapti/Desktop/trf robospark/IP/gausthresh.jpg",gaus)#saving the  image in folder

mean=cv2.adaptiveThreshold(gray,231,cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY,115,2)#mean thresh
cv2.imshow("mean thresh",gaus)
cv2.imwrite("C:/Users/Prapti/Desktop/trf robospark/IP/meanthresh.jpg",mean)#saving the  image in folder


cv2.waitKey(5000)
cv2.waitKey(0)
cv2.destroyAllWindows()