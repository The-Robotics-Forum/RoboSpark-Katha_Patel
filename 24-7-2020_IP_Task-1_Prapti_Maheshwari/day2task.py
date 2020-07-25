import cv2
import numpy as np
original = cv2.imread(r"C:\Users\Prapti\Desktop\trf robospark\IP\rose.jpg")#reading the orignal image
#print(original.shape)
res = cv2.resize(original, (250, 500))#resizing it
cv2.imshow("orignal",res)#priting the orignal image
cv2.imwrite("C:/Users/Prapti/Desktop/trf robospark/IP/resized1.jpg",original)#saving the iamge in the folder
bgrl = np.array([70, 70 ,100], np.uint8)#lower bound  limits
bgrh = np.array([205, 255, 255], np.uint8)#upper bound  limits

mask = cv2.inRange(res, bgrl, bgrh)#masked image
cv2.imshow("Masked image",mask)#priting masked image
cv2.imwrite("C:/Users/Prapti/Desktop/trf robospark/IP/mask.jpg",original)#saving the masked image

kernel = np.array(([1, 0 ,0], [0, 1, 0], [0, 0, 1]), np.uint8)
filter2d= cv2.filter2D(mask, -1, kernel)
cv2.imshow("Filter2D image",filter2d)#priting masked image
cv2.imwrite("C:/Users/Prapti/Desktop/trf robospark/IP/filter2d.jpg",filter2d)#saving the iamge in the folder

avg = cv2.blur(mask, (5, 5))#applying averaging blurring on masked image
cv2.imshow("averaging blurring",avg)#priting the averaging image
cv2.imwrite("C:/Users/Prapti/Desktop/trf robospark/IP/averaging.jpg",avg)#saving the iamge in the folder

gaus = cv2.GaussianBlur(mask, (5, 5), 0)#gausian blurring
cv2.imshow("Gaussian blurring",gaus)
cv2.imwrite("C:/Users/Prapti/Desktop/trf robospark/IP/gaussian_blurring.jpg",gaus)#saving the image in the folder

median = cv2.medianBlur(mask, 7)#meadian blurring
cv2.imshow("Median blurring",median)
cv2.imwrite("C:/Users/Prapti/Desktop/trf robospark/IP/meadin_blurring.jpg",median)#saving the image in the folder

bilateral = cv2.bilateralFilter(mask, 5, 111, 111)
cv2.imshow("bilateral blurring",bilateral)
cv2.imwrite("C:/Users/Prapti/Desktop/trf robospark/IP/bilateral_blurring.jpg",bilateral)#saving the image in the folder

bilateral1 = cv2.bilateralFilter(original, 5, 111, 111)
cv2.imshow(" original bilateral blurring",bilateral1)
cv2.imwrite("C:/Users/Prapti/Desktop/trf robospark/IP/bilateral_blurring.jpg",bilateral1)#saving the image in the folder

bilateral1 = cv2.rectangle(bilateral1,(50,450),(200,550),(0,0,0),-1)#rectangle for flower pot
bilateral1=cv2.circle(bilateral1,(125,675),150,(0,0,0),-1)#circle for flower pot
cv2.imwrite("C:/Users/Prapti/Desktop/trf robospark/IP/flower_pot.jpg",bilateral1)#saving the image in the folder
font=cv2.FONT_HERSHEY_COMPLEX
bilateral1=cv2.putText(bilateral1,"ROSE",(300,550),font,1.5,(0,0,0))
cv2.imshow("flower1 pot",bilateral1)





cv2.waitKey(5000)
cv2.waitKey(0)
cv2.destroyAllWindows()