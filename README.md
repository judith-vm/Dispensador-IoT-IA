# 🐕 Sistema de Dispensador de comida con Facial con IA
### Este proyecto consiste en un sistema dispensador de comida para perros que tiene una autenticación que utiliza inteligencia artificial para comparar el rostro para confirmar que se trate de un perro. Una vez autenticado, habra un mecanismo con un esp32 y un servomotor para comenzar a liberar la comida.

# 🚀 Funcionalidades
- ### Este proyecto consiste en un sistema de autenticación que utiliza inteligencia artificial para comparar el rostro y sea la de un perro y de un esp32 mas servomotor para la funcionalidad del dispensador. Una vez autenticado, comienza a liberarse la comida.
- ### Acceso Seguro: Solo los rostros reconocidos como perros podran acceder.
# 💻 Tecnologías Utilizadas
### [![My Skills](https://skillicons.dev/icons?i=js,html,css,nodejs,tensorflow)](https://skillicons.dev)

# 🧩 Materiales
* Placa de desarrollo ESP32
* Servo Motor SG90
* Protoboard
* Mínimo 3 cables macho macho
* Cable USB a micro USB
* IDE Arduino
* Computadora
* Materiales para crear el dispensador

# 💡 Pasos para configurar placa ESP32

### 🔌 Conectar cables macho-macho al servomotor
Lo primero que haremos sera conectar tres cables a nuestro servo motor (de preferencia que sean del mismo color que los que este tiene)

![cables](https://github.com/yairhdz24/Detector_Image/assets/157530840/d801fca0-5481-4aff-9f99-2fbe034b93f7)
![servo](https://github.com/yairhdz24/Detector_Image/assets/157530840/3f309f2b-e77c-4f01-972e-73106ea6c8cb)

### 🔌 Conectar cables macho-macho a la placa ESP32
Una vez que conectamos los cables a nuestro servo motor, ahora los tenemos que conectar a nuestra placa. En este caso, tenemos tres colores de cables:

* 🟤 Café (cable que va a GND o tierra)
* 🔴 Rojo (cable de alimentación que va al pin VIN, que es el pin que recibe la alimentación de energía para la placa)
* 🟠 Naranja (cable para conectar con el pin digital para generar la señal; en nuestro caso usamos el pin 13)

![placa](https://github.com/yairhdz24/Detector_Image/assets/157530840/3462bec3-e0ef-448b-9240-4b141c16b6e0)

### 🛠️ Cargar código a la placa ESP32
Ya que tenemos nuestro servo motor a conectado a la placa es momento de cargar nuestro código, para esto vamos a conectar nuestra placa a través del cable micro USB a nuestra computadora, abriremos nuestro IDE de arduino donde añadiremos el código que vamos a cargar, seleccionamos la placa correspondiente que en nuestro caso es la placa ESP32-WROOM-DA Module y cargamos el código a nuestra placa desde nuestro IDE.

![Captura de pantalla 2024-05-13 103451](https://github.com/yairhdz24/Detector_Image/assets/157530840/addb31b8-b45b-4309-a466-01d04170db8b)


### 🐾 Funcionamiento
El funcionamiento de este software es sencillo y efectivo. Actúa como un dispensador de comida para mascotas, especialmente diseñado para perros. Utiliza modelos de inteligencia artificial de TensorFlow para detectar la presencia de perros a través de una cámara.

Una vez configurada la placa y asignada una IP estática, podemos acceder al control del dispensador desde cualquier dispositivo conectado a la misma red local. Esto puede ser un teléfono, una computadora o cualquier dispositivo conectado a la red.

Cuando un perro se acerca al dispensador, la inteligencia artificial entra en acción. Los modelos de TensorFlow están específicamente entrenados para detectar perros. Si se detecta la presencia de un perro, se envía una señal al servomotor del dispensador, lo que activa la liberación de una porción de comida para perros.

Además de dispensar comida, el software registra la fecha y hora de cada activación del servomotor en una base de datos. Esto nos permite llevar un registro preciso de cuándo se dispensó la comida.

![image](https://github.com/yairhdz24/Dispensador-IoT-IA/assets/64717200/f23de2ad-9c88-4299-8eb1-f8590246e8d1)


# 👥 Integrantes
- ### Yair Hernandez Ochoa🧑‍💻
- ### Kevin Ramses Ramirez Gomez🧑‍💼
- ### Kevin Shalom Herrera Covarrubias🧑‍💼
- ### Judith Baudelia Villalvazo Marin 👩‍💻
