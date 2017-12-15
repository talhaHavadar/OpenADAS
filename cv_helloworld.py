"""
Basic Hello World script for OpenCV
to make sure that it is working smoothly

@author Talha Can Havadar <havadartalha@gmail.com>
"""
import cv2
import numpy as np
import matplotlib.pyplot as plt

image = np.zeros((120, 350, 3), dtype=np.uint8)

cv2.putText(image, "Hello Moto!!", (13, 70), cv2.FONT_HERSHEY_PLAIN, 4, (0, 255, 0))

plt.figure(1)
plt.imshow(image)
plt.show()
