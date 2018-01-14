import tensorflow as tf

hello_moto = tf.constant("Hello Moto!!")
session = tf.Session()
print(session.run(hello_moto))
