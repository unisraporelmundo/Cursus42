<h1 align="center">
    <img src="https://github.com/unisraporelmundo/unisraporelmundo/blob/main/unisraporelmundo/born2bebanner.gif" alt="Banner de perfil"/>
</h1>

El tercer proyecto en 42 consiste en crear tu propia máquina virtual.

[Click aquí](https://github.com/unisraporelmundo/unisraporelmundo/blob/main/unisraporelmundo/Born2beroot.pdf) para ver el `PDF` del proyecto.

# Tutorial Born2beroot

# Índice

1. [Descargar imagen de la máquina virtual 💿](#1--descargar-imagen-de-la-máquina-virtual-)
2. [Instalación de la máquina 💻](#2--instalación-de-la-máquina-)
   
   	2.1 [Instalación de la máquina con Virtual Box 📦](#2-1-instalación-de-la-máquina-con-virtual-box-)

   	2.2 [Instalación de la máquina con VMware ☁️](#2-2-instalación-de-la-máquina-con-vmware-%EF%B8%8F)
   
4. [Instalación Debian 🌀](#3--instalación-debian-)
5. [Configuración de la máquina virtual ⚙️](#4-configuración-de-la-máquina-virtual-%EF%B8%8F)

	4.1 [Instalación de sudo y configuración de usuarios y grupos 👤](#41---instalación-de-sudo-y-configuración-de-usuarios-y-grupos-)
	
	4.2 [Instalación y configuración de SSH 📶](#42---instalación-y-configuración-ssh-)
	
	4.3 [Instalación y configuración de UFW 🔥🧱](#4-3-instalación-y-configuración-de-ufw-)
	
	4.4 [Configurar contraseña fuerte para sudo 🔒](#4-4-configurar-contraseña-fuerte-para-sudo-)
	
	4.5 [Configuración de política de contraseñas fuerte 🔑](#4-5-configuración-de-política-de-contraseñas-fuerte-)
	
	4.6 [Conectarse vía SSH 🗣](#4-6-conectarse-vía-ssh-)
	
6. [Script 🚨](#5--script-)

	5.1 [Resultado total del script 🆗](#5-13-resultado-total-del-script)
	
7. [Crontab ⏰](#6--crontab-)
8. [Signature.txt 📝](#7--signaturetxt-)
9. [Bonus ⭐](#8--bonus-%EF%B8%8F)

	8.1 [Particionado manual del disco 🛠](#81--particionado-manual-del-disco)
	
	8.2 [Wordpress y configuración de servicios 🌐](#82---wordpress-y-configuración-de-servicios-)
	
	8.3 [Servicio adicional ➕](#83---servicio-adicional-)

10. [Hoja de corrección ✅](#9--hoja-de-corrección-)

	9.1 [Respuestas de la evaluación 💯](#9-1-respuestas-de-la-evaluación-)
	
	9.2 [Comandos de la evaluación ⌨️](#9-2-comandos-de-la-evaluación-%EF%B8%8F)
11. [Tester 🆗](#10--tester-)
	
## 1- _Descargar imagen de la máquina virtual_ 💿

[Click aquí](https://www.debian.org/distrib/index.es.html) para redireccionarte a la URL donde puedes descargar la ISO de manera segura.

## 2- Instalación de la máquina 🛠

Según el subject es OBLIGATORIO hacer este proyecto con Virtual Box. Si por algún problema técnico en tu campus no está disponible Virtual Box, este tutorial cuenta con una versión para re.

Si quieres hacer la instalación con re haz [Click aquí](#2-2-instalación-de-la-máquina-con-re-%EF%B8%8F)

### 2-1 Instalación de la máquina con Virtual Box 📦

Para realizar la instalación se requiere de un software de virtualización. En este tutorial haremos uso de [VirtualBox](https://www.virtualbox.org/). Si ya tienes VirtualBox instalado y dispones de la ISO Debian ya podemos empezar con el tutorial.

1 ◦ Debemos abrir VirtualBox y pinchar sobre ```Nueva```

<img width="836" alt="Captura de pantalla 2022-07-13 a las 18 02 05" src="https://user-images.githubusercontent.com/66915274/178779265-38eade6e-2789-4597-89e9-5beca2d3921a.png">

2 ◦ Escogemos el nombre de nuestra máquina y la carpeta donde estará ubicada. Importante introducir la máquina dentro de la carpeta sgoinfre, ya que si no la ubicamos ahí nos quedaremos sin espacio y fallará la instalación (dependiendo del campus la ruta de sgoinfre puede cambiar). 

<img width="694" alt="Screen Shot 2022-11-18 at 2 30 18 PM" src="https://user-images.githubusercontent.com/66915274/202716278-394d5ce7-1f61-4146-a1b5-1e15ed005778.png">

3 ◦ Seleccionamos la cantidad de memoria RAM que reservaremos para la máquina. 

<img width="685" alt="Captura de pantalla 2022-07-13 a las 13 06 05" src="https://user-images.githubusercontent.com/66915274/178781098-8aa07fbc-e1d2-4bee-8021-ddf052880364.png">

4 ◦ Seleccionamos la segunda opción para así crear un disco duro virtual ahora.

<img width="826" alt="Captura de pantalla 2022-07-13 a las 18 13 24" src="https://user-images.githubusercontent.com/66915274/178781390-289236e0-1732-4dd8-8d3d-34eb0a229a18.png">

5 ◦ Escogemos la primera opción ```VDI```, ya que nos hemos descargado una imagen de disco.

<img width="829" alt="Captura de pantalla 2022-07-13 a las 18 16 35" src="https://user-images.githubusercontent.com/66915274/178781999-a42c3c6c-bc1e-4ad5-8bc5-b4b3f811c3f2.png">

6 ◦ Seleccionamos la primera opción ```Reservado dinámicamente``` para que así se vaya reservando memoria en la máquina real según vayamos utilizándola en la virtual hasta llegado al límite máximo disponible en la virtual.

<img width="833" alt="Captura de pantalla 2022-07-13 a las 18 19 33" src="https://user-images.githubusercontent.com/66915274/178782529-fb309739-3169-4e20-b3e1-23d17a122a18.png">

7 ◦ Una vez hayamos establecido la cantidad recomendada ```12 GB``` deberemos darle a ```Crear```. Si haremos el bonus seleccionaremos ```30 GB```.

<img width="835" alt="Captura de pantalla 2022-07-13 a las 18 25 20" src="https://user-images.githubusercontent.com/66915274/178783666-4fa624a3-9c38-4c45-b6a8-d476c2864200.png">

8 ◦ Puede parecer que ya hemos terminado la instalación, pero todavía faltan un par de pasos más. Debemos darle a configuración.

<img width="831" alt="Captura de pantalla 2022-07-13 a las 18 30 46" src="https://user-images.githubusercontent.com/66915274/178784822-38228e96-ca37-4cc0-b3ca-551829e4c8c8.png">

9 ◦ Acto seguido pincharemos encima de ```Almacenamiento```, volveremos a pinchar sobre el emoticono 💿 que se encuentra a la derecha y de nuevo pincharemos sobre ```Seleccionar un archivo de disco```.

<img width="962" alt="Captura de pantalla 2022-07-13 a las 18 33 28" src="https://user-images.githubusercontent.com/66915274/178785148-2904cf4f-93c0-4866-a5d6-778390bddeb7.png">

10 ◦ Seleccionaremos la ISO que acabamos de descargar y le damos a ```Abrir``` y después le daremos a ```Aceptar```. 

<img width="790" alt="Captura de pantalla 2022-07-13 a las 18 38 39" src="https://user-images.githubusercontent.com/66915274/178786115-24f93fde-bc01-4e60-bf8d-20d7a5ae83be.png">

11. ◦ Una vez completados todos los pasos anteriores, ya podemos ```Iniciar``` nuestra máquina virtual.

<img width="833" alt="Captura de pantalla 2022-07-13 a las 18 44 55" src="https://user-images.githubusercontent.com/66915274/178787317-aab80b53-8244-4ede-9c75-11fcf4efdd1c.png">

Para dirigirte a la Instalación de Debian directamente [Click aquí](#3--instalación-debian-)
<br>
<br>
<br>

### 2-2 Instalación de la máquina con VMware ☁️

1 ◦ Debemos abrir re y pinchar sobre ```New```.

<img width="995" alt="Screen Shot 2023-12-05 at 8 56 46 PM" src="https://github.com/gemartin99/Born2beroot-Tutorial/assets/66915274/7a3a1afb-7c8d-4b11-b1a5-8d2633061822">

2 ◦ Se nos habrá abierto una pestaña. Ahora debemos arrastrar la ISO de Debian que hemos descargado en el paso 1.

<img width="1129" alt="Screen Shot 2023-12-05 at 9 18 17 PM" src="https://github.com/gemartin99/Born2beroot-Tutorial/assets/66915274/62d83435-566c-48e2-bee5-f281c9afcfbe">

3 ◦ Le damos a ```continue``` e indicamos el sistema operativo que usaremos.

<img width="636" alt="Screen Shot 2023-12-05 at 9 20 19 PM" src="https://github.com/gemartin99/Born2beroot-Tutorial/assets/66915274/92dd9310-e189-4de6-8254-ef855400ca88">

4 ◦ Seleccionamos ```Debian 10.x 64 bits```.

<img width="636" alt="Screen Shot 2023-12-05 at 9 20 38 PM" src="https://github.com/gemartin99/Born2beroot-Tutorial/assets/66915274/2cf3dbfe-5087-4b94-a11a-d383e9c1e85b">

5 ◦ Seleccionaremos ```Legacy BIOS```. Este paso es importante, ya que si escogemos UEFI o UEFI Secure Boot las particiones no quedarán como específica el subject, ya que crea una partición nueva. Con la opción Legacy Bios no se creará ninguna partición específica.

<img width="635" alt="Screen Shot 2023-12-05 at 9 20 50 PM" src="https://github.com/gemartin99/Born2beroot-Tutorial/assets/66915274/f3c62336-e5a9-4a73-b121-f099d61db4af">

6 ◦ Antes de finalizar la instalación, debemos escoger la ruta donde almacenaremos nuestra máquina virtual. Le daremos a ```Customize Settings```.

<img width="570" alt="Screen Shot 2023-12-05 at 9 57 59 PM" src="https://github.com/gemartin99/Born2beroot-Tutorial/assets/66915274/73ce3856-d388-4624-9c28-6c425d98a624">


7 ◦ Cambiamos el nombre de la máquina a Born2beroot y pincharemos sobre la flecha para poder escoger la ruta donde almacenaremos la máquina.

<img width="577" alt="Screen Shot 2023-12-05 at 9 56 44 PM" src="https://github.com/gemartin99/Born2beroot-Tutorial/assets/66915274/c623c942-8c87-4f5a-a6b3-b08562b9df40">

8 ◦ Para que no nos quite espacio de nuestro usuario, la almacenaremos en el sgoinfre. Es importante que crees una carpeta con tu login y que tenga los permisos necesarios. Una vez la tengas, almacenaremos nuestra máquina virtual en esa ruta. En mi caso esta es la ruta, quizás en tu campus es diferente!

<img width="1260" alt="Screen Shot 2023-12-05 at 9 23 44 PM" src="https://github.com/gemartin99/Born2beroot-Tutorial/assets/66915274/7589f92e-cdc5-48e0-871b-194eaf3ea322">


## 3- Instalación Debian 🌀

➤ Espera❗️ Tu vista es muy importante 👀❗️ Para poder hacer la ventana más grande debes hacer lo siguiente: 

<img width="666" alt="Captura de pantalla 2022-07-13 a las 18 51 41" src="https://user-images.githubusercontent.com/66915274/178788620-61064b58-0c0c-4f48-815e-60b4a8eaecae.png">

Utiliza la tecla ```command``` para que la captura del ratón pase de la máquina real a la virtual y al revés.

### Sigamos con la instalación 🛠

1 ◦ Escogeremos la versión sin interfaz gráfica ```Install```, ya que el subject indica que no se utilice ninguna. Cada vez que queramos confirmar algo presionaremos ```Enter``` y para movernos por las opciones utilizaremos las flechas.

<img width="632" alt="Captura de pantalla 2022-07-13 a las 18 58 48" src="https://user-images.githubusercontent.com/66915274/178789643-e987c6d0-5b6f-4b98-ad4a-5c092a352183.png">

2 ◦ Escogeremos el idioma que usaremos para la instalación y el predeterminado que se le quedará al sistema ```English```.  

<img width="794" alt="Captura de pantalla 2022-07-13 a las 19 00 41" src="https://user-images.githubusercontent.com/66915274/178789949-4fe83ac8-23b8-4f82-a034-a6d5e81d4f17.png">

3 ◦ Introducimos nuestro País, territorio o zona. En mi caso pondré ```Other```.

<img width="791" alt="Captura de pantalla 2022-07-13 a las 19 07 50" src="https://user-images.githubusercontent.com/66915274/178791067-44230a4c-e647-46cb-9d6f-bc441bf0227b.png">

4 ◦ Como he seleccionado other, debo indicar mi continente o región. En mi caso pongo ```Europe``` 🇪🇺. 

<img width="797" alt="Captura de pantalla 2022-07-13 a las 19 09 58" src="https://user-images.githubusercontent.com/66915274/178791387-78171f90-2834-42ab-aedb-9cf900d0ecd5.png">

5 ◦ Seleccionamos el país. En mi caso ```Spain``` 🇪🇸.

<img width="793" alt="Captura de pantalla 2022-07-13 a las 19 12 01" src="https://user-images.githubusercontent.com/66915274/178791824-7a34813c-eae9-4b5c-9873-cea158229e07.png">

6 ◦ Seleccionamos ```United States```.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 19 13 43" src="https://user-images.githubusercontent.com/66915274/178792054-4e72dfdd-8175-48f9-a06d-f2696fa752e3.png">

7 ◦ Importante seleccionar ```American English``` como configuración de teclado, ya que si no tendremos las teclas mal enlazadas.

<img width="793" alt="Captura de pantalla 2022-07-13 a las 19 02 21" src="https://user-images.githubusercontent.com/66915274/178790230-d2571d4f-a546-4b43-bd44-c6a591d92d72.png">

8 ◦ En este paso debemos elegir el ```Host Name``` de la máquina, el cual debe ser tu login seguido de 42. 


9 ◦ Este apartado lo dejaremos vacío, ya que el subject no mencionada nada de ```Domain name```.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 19 20 29" src="https://user-images.githubusercontent.com/66915274/178793113-b0934aac-fac4-4844-8412-aca124038fd0.png">

10 ◦ Debemos introducir una contraseña para la cuenta de administración del sistema. Importante apuntarla o hacer una foto, ya que le daremos uso. Si quieres ver la contraseña para asegurarte de que la has escrito correctamente debes tabular hasta llegar a la opción ```Show Password in Clear``` debes darle a la barra espaciadora y se mostrará la clave.

<img width="760" alt="Screen Shot 2022-11-18 at 2 32 55 PM" src="https://user-images.githubusercontent.com/66915274/202716754-cf30a8b0-0f3b-4aca-803e-57416a1667fa.png">

11 ◦ Repetimos el proceso de nuevo para comprobar que no la hayamos escrito mal.

<img width="751" alt="Screen Shot 2022-11-18 at 2 33 15 PM" src="https://user-images.githubusercontent.com/66915274/202716814-df6aa34a-e118-47cd-ac7e-ff7d35a3ef90.png">

12 ◦ Elegimos el nombre de nuestro nuevo usuario. Como indica el subject, hay que crear un usuario adicional que no sea el root con nuestro login, por ese motivo llamaré ```iizquier``` a mi nuevo usuario.


12.1  Volvemos a poner el nombre de usuario.


13 ◦ Ahora debemos introducir la contraseña de nuestro nuevo usuario. Como la anterior, repetiremos el proceso para comprobar que no la hayas escrito mal y también es importante que la guardes porque le daremos uso más adelante.

<img width="790" alt="Captura de pantalla 2022-07-13 a las 19 30 08" src="https://user-images.githubusercontent.com/66915274/178794862-94de8c7a-282e-4a83-9903-d3b8439122ea.png">

14 ◦ Seleccionamos la hora de nuestra ubicación.

<img width="796" alt="Captura de pantalla 2022-07-13 a las 19 31 41" src="https://user-images.githubusercontent.com/66915274/178795105-956854e1-deff-4851-8eba-26cdefb1e06f.png">

15 ◦ Escogeremos la tercera opción ```Guied - use entire disk and set up encrypted LVM```, ya que el subject nos dice que deben ser particiones cifradas. ⚠️❗️ Si quieres hacer el bonus deberás darle a ```Manual``` y [hacer click aquí](#8--bonus-%EF%B8%8F) ❗️⚠️

<img width="796" alt="Captura de pantalla 2022-07-13 a las 19 33 13" src="https://user-images.githubusercontent.com/66915274/178795367-b82018de-edc8-47d3-8cd6-b90c5e3be2fa.png">


16 ◦ Seleccionamos el disco en el que queremos hacer el particionado (Solo debe haber un disco). 

<img width="789" alt="Captura de pantalla 2022-07-13 a las 19 40 03" src="https://user-images.githubusercontent.com/66915274/178796481-29ef7ebc-0518-40f0-9429-3f43316b35d3.png">

17 ◦ Una vez hayamos escogido el disco deberemos hacer el particionado tal y como nos piden. Para realizarlo adecuadamente debemos seleccionar la segunda opción ```Separate /home partition```.

<img width="787" alt="Screen Shot 2023-03-08 at 1 44 16 PM" src="https://user-images.githubusercontent.com/66915274/223716446-9ffb6f66-1ad3-4bfe-81ce-1f297bed0ede.png">

18 ◦ Escogemos la opción ```Yes``` para que así se escriban los cambios en el disco y podamos configurar el gestor de volúmenes lógicos (LVM).

<img width="777" alt="Captura de pantalla 2022-07-13 a las 19 44 30" src="https://user-images.githubusercontent.com/66915274/178797258-8c34bc31-16a7-4aef-8406-cecc21fdf028.png">

19 ◦ Le damos a Cancel, ya que el borrado de datos en el disco no es necesario.

<img width="782" alt="Captura de pantalla 2022-07-13 a las 19 46 45" src="https://user-images.githubusercontent.com/66915274/178797666-78cdf892-1a83-4c68-8f85-0d5440cd4854.png">

20 ◦ De nuevo deberemos poner una contraseña, esta vez será la frase de encriptación. Como te he comentado previamente deberás repetir el proceso y la debes anotar, ya que será importante en un futuro.

<img width="777" alt="Captura de pantalla 2022-07-13 a las 19 51 17" src="https://user-images.githubusercontent.com/66915274/178798491-4c9b4a0c-d698-47c7-9579-10b16aa47275.png">

21 ◦ En este paso debemos introducir la cantidad de volumen que usaremos para la partición guiada. Debemos introducir ```max``` o el número de tamaño máximo disponible en mi caso es ```12.4 GB```.

<img width="794" alt="Captura de pantalla 2022-07-13 a las 19 55 02" src="https://user-images.githubusercontent.com/66915274/178799165-c6b05fd2-86ad-45b7-a026-9ee169eda5d5.png">

22 ◦ Para finalizar la partición y escribir los cambios en el disco le daremos a la opción ```Finish partitioning and write changes to disk```.

<img width="789" alt="Screen Shot 2023-03-08 at 1 46 17 PM" src="https://user-images.githubusercontent.com/66915274/223716909-c20cea01-950f-49cd-9ce6-99ec0eab0ea4.png">

23 ◦ Seleccionamos la opción ```Yes``` para continuar y confirmar que no queremos hacer más cambios en el disco.

<img width="770" alt="Screen Shot 2023-03-08 at 1 46 52 PM" src="https://user-images.githubusercontent.com/66915274/223716940-b2e29ee7-3c98-434e-bccd-ac21d72eda2d.png">

24 ◦ Seleccionamos la opción ```No```, ya que no necesitamos paquetes adicionales. 

<img width="770" alt="Captura de pantalla 2022-07-13 a las 20 05 42" src="https://user-images.githubusercontent.com/66915274/178801099-2dda24f5-0d46-4184-8c44-a8fe0bf46527.png">

25 ◦ Escogemos nuestro País.

<img width="756" alt="Captura de pantalla 2022-07-13 a las 20 14 23" src="https://user-images.githubusercontent.com/66915274/178802653-d9e8504a-b60b-4441-8ee3-8d48ca4a6bf0.png">

26 ◦ Escogemos ```deb.debian.org```, ya que es lo que recomienda Debian.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 20 15 00" src="https://user-images.githubusercontent.com/66915274/178802772-4f67cd99-60d5-4439-8502-317e81e07d70.png">

27 ◦ Esta opción la dejaremos vacía y le daremos ```Continue```.

<img width="797" alt="Captura de pantalla 2022-07-13 a las 20 17 24" src="https://user-images.githubusercontent.com/66915274/178803208-2969acae-3fa7-423e-8a3c-bb7c76eff824.png">

28 ◦ Seleccionamos la opcion ```No```, ya que no queremos que los developers vean nuestras estadísticas aunque sean anónimas.

<img width="796" alt="Captura de pantalla 2022-07-13 a las 20 21 54" src="https://user-images.githubusercontent.com/66915274/178803926-a4efbc70-f3e2-4e6c-9809-9152478d8237.png">

29 ◦ Quitaremos todas las opciones de software (con la barra espaciadora) y le daremos a ```Continue```.

<img width="797" alt="Captura de pantalla 2022-07-13 a las 20 24 17" src="https://user-images.githubusercontent.com/66915274/178804377-e775b89e-93d4-482f-a4d0-0ef126f47719.png">

30 ◦ Seleccionaremos ```Yes``` para instalar [GRUB boot](https://es.wikipedia.org/wiki/GNU_GRUB) en el disco duro.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 20 26 24" src="https://user-images.githubusercontent.com/66915274/178804771-ba16e0b7-9f06-4c5b-9451-0bfd65efd2bb.png">

31 ◦ Escogeremos el dispositivo para la instalación del cargador de arranque ```/dev/sda (ata_VBOX_HARDDISK)```.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 20 35 46" src="https://user-images.githubusercontent.com/66915274/178806441-f1bf3159-4e09-4c9a-9102-b3261c9000d8.png">

32 ◦ Le daremos a ```Continue``` para finalizar la instalación. 

<img width="794" alt="Captura de pantalla 2022-07-13 a las 20 39 30" src="https://user-images.githubusercontent.com/66915274/178807102-e2a9722e-791f-48a0-ae35-b05b36a37ed2.png">

## 4 Configuración de la máquina virtual ⚙️

➤ Lo primero que debemos hacer es seleccionar ```Debian GNU/Linux```.

➤ Debemos introducir la contraseña de encriptación que utilizamos previamente. En mi caso es ```Hello42bcn```.

➤ Debemos introducir el usuario y contraseña que hemos creado. En mi caso el usuario es ```iizquier``` y la contraseña ```Hola42spain```.


### Ya tenemos todo listo para empezar a configurar nuestra máquina virtual Debian❗️

### 4.1 - Instalación de sudo y configuración de usuarios y grupos 👤

1 ◦ Para la instalación de sudo primero debemos estar en el usuario root, para ello pondremos ```Su``` en el terminal e introduciremos la contraseña, en mi caso es ```Hola42bcn```. Una vez hemos accedido al usuario root, debemos poner el comando ```apt install sudo``` para así instalar los paquetes necesarios.

2 ◦ Debemos reiniciar la máquina para que se apliquen los cambios. Para ello haremos uso del comando ```sudo reboot``` y esperaremos a que se reinicie. 


3 ◦ Una vez reiniciado debemos volver a introducir las contraseñas de cifrado y del usuario. Para verificar que hayamos instalado ```sudo``` correctamente entraremos de nuevo en el usuario root y pondremos el comando ```sudo -V```, este comando además de mostrarnos la versión de sudo también mostrará los argumentos pasados para configurar cuando se creó sudo y los plugins que pueden mostrar información más detallada. (Opcional) ➤ Puesto que el output del comando es muy largo, si deseamos verlo completamente debemos redireccionar la salida del mismo a un fichero ```sudo -V > file.txt``` y luego editar el fichero ```nano file.txt```. O poner ```| more``` después del comando.

<img width="799" alt="Captura de pantalla 2022-07-14 a las 2 09 59" src="https://user-images.githubusercontent.com/66915274/178857742-96356272-abd6-44c4-a3e6-5e8b9f471146.png">

4 ◦ Siguiendo en el usuario root crearemos un usuario con nuestro login con el comando ```sudo adduser login``` como nosotros ya hemos creado el usuario en la instalación nos debe aparecer que el usuario ya existe.


5 ◦ Ahora deberemos crear un nuevo grupo llamado ```user42```. Para crearlo debemos hacer ```sudo addgroup user42```. 


🧠 <b>Qué es GID❓</b> Es el identificador de grupo, es una abreviatura de Group 🆔.

🤔 <b> Se ha creado correctamente el grupo? </b> Lo cierto es que sí, ya que no ha habido ningún mensaje de error, aun así podemos comprobar si se ha creado con el comando ```getent group nombre_grupo``` o también podemos hacer ```cat /etc/group``` y podremos ver todos los grupos y los usuarios que hay dentro de ellos.

6 ◦ Con el comando ```sudo adduser user group``` incluiremos al usuario en el grupo. Debemos incluir al usuario en los grupos ```sudo``` y ```user42```.

7 ◦ Una vez los hayamos introducido para chequear que todo se haya hecho correctamente podemos ejecutar el comando ```getent group nombre_grupo``` o también podemos editar el fichero /etc/group ```nano /etc/group``` y en los grupos ```sudo``` y ```login42``` deberá aparecer nuestro usuario.


### 4.2 - Instalación y configuración SSH 📶

🧠 <b> Qué es SSH❓</b> Es el nombre de un protocolo y del programa que lo implementa cuya principal función es el acceso remoto a un servidor por medio de un canal seguro en el que toda la información está cifrada.

1 ◦ Lo primero que haremos será hacer ```sudo apt update``` para actualizar los repositorios que definimos en el archivo /etc/apt/sources.list

2 ◦ Acto seguido instalaremos la herramienta principal de conectividad para el inicio de sesión remoto con el protocolo SSH, esta herramienta es OpenSSH. Para instalarla debemos introducir el comando ```sudo apt install openssh-server```. En el mensaje de confirmación ponemos ```Y```, acto seguido esperaremos a que termine la instalación.

Para comprobar que se haya instalado correctamente haremos ```sudo service ssh status``` y nos debe aparecer active.

3 ◦ Una vez terminada la instalación se han creado algunos ficheros que debemos configurar. Para ello utilizaremos [Nano](https://es.wikipedia.org/wiki/GNU_Nano), o si tú lo prefieres, otro editor de texto. El primer fichero que editaremos será ```/etc/ssh/sshd_config```. Si no estas desde el usuario root no tendrás permisos de escritura, para ello haremos ```su``` y ponemos la contraseña para entrar al usuario root o si no quieres entrar en el usuario root, ponemos sudo al principio del comando ```sudo nano /etc/ssh/sshd_config```.


4 ◦ Los ```#``` al comienzo de una línea significan que está comentada, las líneas que vayamos a modificar deberás quitarle el comentario. Una vez estemos editando el fichero deberemos modificar las siguientes líneas:

➤ #Port 22 -> Port 4343 (Después de la migración a linux el puerto 4242 no funciona)

<img width="807" alt="Captura de pantalla 2022-07-14 a las 3 31 04" src="https://user-images.githubusercontent.com/66915274/178867929-0f8be11e-d0ca-4445-af05-a693d01411bd.png">

➤ #PermitRootLogin prohibit-password -> PermitRootLogin no

<img width="798" alt="Captura de pantalla 2022-07-14 a las 3 34 13" src="https://user-images.githubusercontent.com/66915274/178868266-fc6d6684-8196-4021-b884-a047a443a3ec.png">

Una vez hayamos modificado esas líneas debemos guardar los cambios realizados sobre el fichero y dejar de editarlo.

5 ◦ Ahora debemos editar el fichero ```/etc/ssh/ssh_config```.

Editaremos la siguiente línea: 

➤ #Port 22 -> Port 4343

<img width="795" alt="Captura de pantalla 2022-07-14 a las 3 50 29" src="https://user-images.githubusercontent.com/66915274/178875013-1969c13f-9e43-4f2a-a037-f384a8e87a78.png">

6 ◦ Por último, debemos reiniciar el servicio ssh para que así se actualicen las modificaciones que acabamos de realizar. Para ello debemos escribir el comando ```sudo service ssh restart``` y una vez reseteado miraremos el estado actual con ```sudo service ssh status``` y para confirmar que se hayan realizado los cambios en la escucha del servidor debe aparecer el Puerto 4242.


### 4-3 Instalación y configuración de UFW 🔥🧱

🧠 <b>Qué es [UFW](https://es.wikipedia.org/wiki/Uncomplicated_Firewall)❓</b> Es un [firewall](https://es.wikipedia.org/wiki/Cortafuegos_(inform%C3%A1tica)) el cual utiliza la línea de comandos para configurar las [iptables](https://es.wikipedia.org/wiki/Iptables) usando un pequeño número de comandos simples.

1 ◦ Lo primero que debemos hacer el instalar UFW, para ello haremos uso del comando ```sudo apt install ufw``` acto seguido escribiremos una ```y``` para confirmar que deseamos instalarlo y esperaremos a que termine.

2 ◦ Una vez instalado debemos habilitarlo. Para ello debemos poner el siguiente comando ```sudo ufw enable``` y acto seguido nos debe indicar que el firewall está activo.

3 ◦ Ahora lo que debemos hacer es que nuestro firewall permita las conexiones que se lleven a cabo mediante el puerto 4242. Lo haremos con el siguiente comando ```sudo ufw allow 4242```.

4 ◦ Por último, comprobaremos que está todo correctamente configurado mirando el estado de nuestro cortafuegos, en donde ya debe aparecer como permitidas las conexiones mediante el puerto 4242. Para ver el estado daremos uso del comando ```sudo ufw status```.


### 4-4 Configurar contraseña fuerte para sudo 🔒

1 ◦ Crearemos un fichero en la ruta /etc/sudoers.d/ a mi fichero yo le he decidido llamar sudo_config, ya que en ese fichero se almacenará la configuración de la contraseña. El comando exacto para crear el fichero es ```touch /etc/sudoers.d/sudo_config```.

<img width="511" alt="Captura de pantalla 2022-07-14 a las 22 00 40" src="https://user-images.githubusercontent.com/66915274/179072822-2f86bd8b-216e-45e4-a15b-8fe3a49149ff.png">

2 ◦ Debemos crear el directorio sudo en la ruta /var/log porque cada comando que ejecutemos con sudo, tanto el input como el output, debe quedar almacenado en ese directorio. Para crearlo utilizaremos el comando ```mkdir /var/log/sudo```.

<img width="502" alt="Captura de pantalla 2022-07-14 a las 21 56 53" src="https://user-images.githubusercontent.com/66915274/179072210-ad99e50d-fa57-494b-999d-3a80dd0f7849.png">

3 ◦ Debemos editar el fichero creado en el paso 1. Como he comentado anteriormente, puedes utilizar el editor que más te guste, pero yo haré uso de nano. Comando para editar el fichero:  ```nano /etc/sudoers.d/sudo_config```.


4 ◦ Una vez estamos editando el fichero deberemos introducir los siguientes comandos para cumplir todos los requisitos que pide el subject.

```
Defaults  passwd_tries=3
Defaults  badpass_message="Mensaje de error personalizado"
Defaults  logfile="/var/log/sudo/sudo_config"
Defaults  log_input, log_output
Defaults  iolog_dir="/var/log/sudo"
Defaults  requiretty
Defaults  secure_path="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/snap/bin"
```

➤ Como debería verse el fichero.

<img width="1202" alt="Captura de pantalla 2022-07-16 a las 2 03 45" src="https://user-images.githubusercontent.com/66915274/179326003-1fd67295-4be2-47bd-98fc-d5821f5f1c4d.png">

🤔 <b>Qué hace cada comando❓ </b>

<img width="802" alt="Captura de pantalla 2022-07-16 a las 2 04 56" src="https://user-images.githubusercontent.com/66915274/179326915-b374f679-fa2e-4e02-8b38-cdb53c6354a6.png">

### 4-5 Configuración de política de contraseñas fuerte 🔑

1 ◦ El primer paso será editar el fichero login.defs.

nano /etc/login.defs

2 ◦ Una vez estemos editando el fichero, modificaremos los siguientes parámetros: 

➤ PASS_MAX_DAYS 99999 -> PASS_MAX_DAYS 30

➤ PASS_MIN_DAYS 0 -> PASS_MIN_DAYS 2


<img width="802" alt="Captura de pantalla 2022-07-16 a las 3 05 49" src="https://user-images.githubusercontent.com/66915274/179328449-32a40f67-a18d-4f29-993b-94d013cd7670.png">

PASS_MAX_DAYS: Es el tiempo de expiración de la contraseña. El número corresponde a días.

PASS_MIN_DAYS: El número mínimo de días permitido antes de modificar una contraseña.

PASS_WARN_AGE: El usuario recibirá un mensaje de aviso indicando que faltan los días especificados para que expire su contraseña.

3 ◦ Para poder seguir con la configuración debemos instalar los siguientes paquetes con este comando ```sudo apt install libpam-pwquality``` , acto seguido pondremos ```Y``` para confirmar la instalación y esperaremos a que termine. 


4 ◦ Lo siguiente que debemos hacer es volver a editar un fichero y modificar algunas líneas. Haremos ```nano /etc/pam.d/common-password```. 


5 ◦ Después de retry=3 debemos añadir los siguientes comandos:

```
minlen=10
ucredit=-1
dcredit=-1
lcredit=-1
maxrepeat=3
reject_username
difok=7
enforce_for_root
```
➤ Así debe ser la línea ↙️

<img width="1047" alt="Screen Shot 2023-01-03 at 7 41 57 PM" src="https://user-images.githubusercontent.com/66915274/210420896-8274b75b-86e4-4fba-9a14-ca838b61c2e6.png">

➤ Así se debe ver en el fichero ↙️

<img width="800" alt="Captura de pantalla 2022-07-16 a las 3 38 08" src="https://user-images.githubusercontent.com/66915274/179329787-1b718843-9272-43e4-8d92-8d83933cc938.png">

🤔 <b>Que hace cada comando❓</b>

minlen=10 ➤ La cantidad mínima de caracteres que debe contener la contraseña.

ucredit=-1 ➤ Como mínimo debe contener una letra mayúscula. Ponemos el - ya que debe contener como mínimo un carácter, si ponemos + nos referimos a como máximo esos caracteres.

dcredit=-1 ➤ Como mínimo debe contener un dígito.

lcredit=-1 ➤ Como mínimo debe contener una letra minúscula.

maxrepeat=3 ➤ No puede tener más de 3 veces seguidas el mismo carácter.

reject_username ➤ No puede contener el nombre del usuario.

difok=7 ➤  Debe tener al menos 7 caracteres que no sean parte de la antigua contraseña. 

enforce_for_root ➤ Implementaremos esta política para el usuario root.

6 ◦ La política de contraseñas que acabamos de implementar afecta solo a los usuarios nuevos. Por lo tanto, es necesario actualizar las cuentas de los usuarios que fueron creadas antes de esta política para que cumplan con los nuevos requisitos de seguridad. Para comprobar si el usuario no cumple con la política haremos uso del comando ```sudo chage -l username```.

Asi se veria, debemos comprobar que los dias 

<img width="862" alt="image" src="https://github.com/yingzhan11/Born2beroot-Tutorial/assets/153290203/e95431bd-8f7c-427e-a609-115fa5a306d8">

7 ◦ Si vemos que dicho usuario no cumple con la politica debemos modificar el numero minimo y maximo de dias entre cambios de contraseña, para ello usaremos el siguiente comando: ```sudo chage -m <time> <username>``` y ```sudo chage -M <time> <username>```. 

-m is para el numero minimo de dias y -M para el numero maximo.

Asi se deben de ver los comandos

![image](https://github.com/gemartin99/Born2beroot-Tutorial/assets/66915274/cb5c8574-8523-480e-9d02-41e103c4910c)

Una vez aplicados los cambios asi se deberia ver:

![image](https://github.com/gemartin99/Born2beroot-Tutorial/assets/66915274/c5df523d-45af-4b8f-a21e-a02b1173b4f8)


### 4-6 Conectarse vía SSH 🗣

1 ◦ Para conectarnos por SSH debemos cerrar la máquina, abrir VirtualBox y darle a configuración.

<img width="832" alt="Captura de pantalla 2022-07-18 a las 10 15 13" src="https://user-images.githubusercontent.com/66915274/179470948-d9a863ef-f1a3-41fb-a103-25378064e747.png">

2 ◦ Una vez en configuración debemos pinchar sobre el apartado de ```Red```, pincharemos sobre ```Avanzadas``` para que así nos muestre más opciones y le daremos a ```Reenvío de puertos```.

<img width="684" alt="Captura de pantalla 2022-07-18 a las 10 18 32" src="https://user-images.githubusercontent.com/66915274/179471690-cfbdbf4b-ab93-4b12-9504-2482712652a3.png">

3 ◦ Pincharemos sobre el siguiente emoticono para agregar una regla de reenvío.

<img width="585" alt="Captura de pantalla 2022-07-18 a las 10 21 24" src="https://user-images.githubusercontent.com/66915274/179471855-913a684d-c7b0-43e2-9e01-d2c954fe75a4.png">

4 ◦ Por último, agregaremos el puerto ```4343``` al anfitrión y al invitado. Las IP's no son necesarias. Pincharemos sobre el botón de aceptar para que así se apliquen los cambios.

<img width="588" alt="Captura de pantalla 2022-07-18 a las 10 22 29" src="https://user-images.githubusercontent.com/66915274/179472105-5942b3ec-5c29-4d49-a00e-67f9cde289e8.png">

➤ Para poder conectarnos a la máquina virtual desde la real debemos abrir un terminal en la máquina real y escribir ```ssh iizquier@localhost -p 4343``` nos pedirá la clave del usuario y una vez la introduzcamos ya nos saldrá el login en verde y eso significa que estaremos conectados.


⚠️ Si quieres conectarte por SSH con VMware ⚠️

1 ◦ Daremos click derecho sobre nuestra máquina y escogeremos la opción ```Connect to SSH```.

<img width="621" alt="Screen Shot 2023-12-07 at 6 54 01 AM" src="https://github.com/gemartin99/Born2beroot-Tutorial/assets/66915274/5bab8bc8-d2c2-4e35-bb84-e2491ffc7767">

2 ◦ Una vez se nos abra la siguiente pestaña debemos rellenar todos los campos. En port debemos poner ```4343``` para indicar que queremos conectarnos por ese puerto. Los siguientes campos son el username de tu máquina, en mi caso ```iizquier```, y la contraseña del usuario, en mi caso ```Hola42spain```. 

![image](https://github.com/gemartin99/Born2beroot-Tutorial/assets/66915274/70645e71-e19f-4161-a077-cc239fb10b52)


También podemos conectarnos mediante el terminal, pero debemos sustituir localhost por la IP de la máquina virtual. Quedaría algo así: ```ssh iizquier@10.11.250.100 -p 4343```. Revisa la IP de tu máquina virtual y sustitúyela por la que pongo de ejemplo.

## 5- Script 🚨

Esta es una parte muy importante del proyecto. Debes prestar atención en todo, muy importante no copiar y pegar directamente el fichero sin saber que hace cada cosa. En la evaluación debes explicar cada comando si el evaluador lo pide.

🧠 <b>Qué es un script❓</b> Es una secuencia de comandos guardada en un fichero que cuando se ejecuta hará la función de cada comando.

### 5-1 Architecture 

Para poder ver la arquitectura del SO y su versión de kernel utilizaremos el comando ```uname -a``` ( "-a" == "--all" ) que básicamente printará toda la información, excepto si el tipo de procesador es desconocido o la plataforma de hardware. 


### 5-2 Núcleos físicos

Para poder mostrar el número de núcleos físicos haremos uso del fichero /proc/cpuinfo el cual  proporciona información acerca del procesador: su tipo, marca, modelo, rendimiento, etc. Usaremos el comando ```grep "physical id" /proc/cpuinfo | wc -l``` con el comando grep buscaremos dentro del fichero "physical id" y con wc -l contaremos las líneas del resultado de grep. Esto lo hacemos, ya que la manera de cuantificar los núcleos no es muy común. Si hay un procesador marcará 0 y si tiene más de un procesador, mostrará toda la información del procesador por separado, contando los procesadores usando la notación cero. De esta manera simplemente contaremos las líneas que hay, ya que es más cómodo cuantificarlo así.


### 5-3 Núcleos virtuales

Para poder mostrar el número de núcleos virtuales es muy parecido al anterior. Haremos uso de nuevo del fichero /proc/cpuinfo , pero en este caso, utilizaremos el comando ```grep processor /proc/cpuinfo | wc -l```. El uso es prácticamente el mismo al anterior, solo que en vez de contar las líneas de "physical id" lo haremos de processor. Lo hacemos así por el mismo motivo de antes, la manera de cuantificar marca 0 si hay un procesador.


### 5-4 Memoria RAM

Para mostrar la memoria RAM haremos uso del comando ```free``` para así ver al momento información sobre la RAM, la parte usada, libre, reservada para otros recursos, etc. Para más info sobre el comando, pondremos free --help. Nosotros daremos uso de free --mega , ya que en el subject aparece esa unidad de medida (Megabyte). Es importante poner --mega y no -m. Con -m nos referiremos a la unidad de medida Mebibyte y no es la que especifica el subject.

Una vez hemos ejecutado este comando debemos filtrar nuestra búsqueda, ya que no necesitamos toda la información que nos aporta, lo primero que debemos mostrar es la memoria usada, para ello haremos uso del comando ```awk``` que lo que hace este comando es para procesar datos basados en archivos de texto, es decir, podremos utilizar los datos que nos interesen de X fichero. Por último, lo que haremos será comparar si la primera palabra de una fila es igual a "Mem:" printaremos la tercera palabra de esa fila que será la memoria usada. Todo el comando junto sería ```free --mega | awk '$1 == "Mem:" {print $3}'```. En el script el valor de retorno de este comando se lo asignaremos a una variable que concatenaremos con otras variables para que todo quede igual como especifica el subject.

Para obtener la memoria total el comando es prácticamente igual al anterior, lo único que deberemos cambiar es que en vez de printar la tercera palabra de la fila queremos la segunda ```free --mega | awk '$1 == "Mem:" {print $2}'```.

Por última parte debemos calcular el % de memoria usada. El comando de nuevo es parecido a los anteriores, la única modificación que haremos en la parte del printeo. Como la operación para conseguir el tanto porciento no es exacta, nos puede dar muchos decimales y en el subject solo aparecen 2 así que nosotros haremos lo mismo, por eso utilizamos ```%.2f``` para que así solo se muestren 2 decimales. Otra cosa que quizás no sepas es en printf para que se muestre un ```%``` hay que poner ```%%```. Todo el comando ```free --mega | awk '$1 == "Mem:" {printf("(%.2f%%)\n", $3/$2*100)}'```.


### 5-5 Memoria del disco

Para poder ver la memoria del disco ocupada y disponible utilizaremos el comando ```df``` que significa "disk filesystem", se utiliza para obtener un resumen completo del uso del espacio en disco. Como en el subject indica la memoria utilizada se muestra en MB, así que entonces utilizaremos el flag -m. Acto seguido haremos un grep para que solo nos muestre las líneas que contengan "/dev/" y seguidamente volveremos a hacer otro grep con el flag -v para excluir las líneas que contengan "/boot". Por último utilizaremos el comando awk y sumaremos el valor de la tercera palabra de cada línea para una vez sumadas todas las líneas printar el resultado final de la suma. El comando entero es el siguiente: ```df -m | grep "/dev/" | grep -v "/boot" | awk '{memory_use += $3} END {print memory_use}'```.

Para obtener el espacio total utilizaremos un comando muy parecido. Las únicas diferencias serán que los valores que sumaremos serán los $2 en vez de $3 y la otra diferencia es que en el subject aparece el tamaño total en Gb así que como el resultado de la suma nos da el número en Mb debemos transformarlo a Gb, para ello debemos dividir el número entre 1024 y quitar los decimales.


Por último, debemos mostrar un porcentaje de la memoria usada. Para ello, de nuevo, utilizaremos un comando muy parecido a los dos anteriores. Lo único que cambiaremos es que combinaremos los dos comandos anteriores para tener dos variables, una que representa la memoria usada y la otra la total. Hecho esto haremos una operación para conseguir el tanto por ciento ```use/total*100``` y el resultado de esta operación lo printaremos como aparece en el subject, entre paréntesis y con el símbolo % al final. El comando final es este: ```df -m | grep "/dev/" | grep -v "/boot" | awk '{use += $3} {total += $2} END {printf("(%d%%)\n"), use/total*100}'```.


### 5-6 Porcentaje uso de CPU

Para poder ver el porcentaje de uso de CPU haremos uso del comando ```vmstat```. Este muestra estadísticas del sistema, permitiendo obtener un detalle general de los procesos, uso de memoria, actividad de CPU, estado del sistema, etc. Podríamos poner si ninguna opción, pero en mi caso pondré un intervalo de segundos de 1 a 4. También daremos uso del comando ```tail -1```, que este lo que nos va a permitir es que solo produzca el output la última línea, entonces de las 4 generadas solo se printará la última. Por último, solo printaremos la palabra 15 que es el uso de memoria disponible. El comando entero es el siguiente: ```vmstat 1 4 | tail -1 | awk '{print $15}'```. El resultado de este comando solo es una parte del resultado final, ya que todavía hay que hacer alguna operación en el script para que quede bien. Lo que habría que hacer es a 100 restarle la cantidad que nos ha devuelto nuestro comando, el resultado de esa operación lo printaremos con un decimal y un % al final y ya estaría hecha la operación. 

### 5-7 Último reinicio

Para ver la fecha y hora de nuestro último reinicio haremos uso del comando ```who``` con el flag ```-b```, ya que con ese flag nos mostrará por pantalla el tiempo del último arranque del sistema. Como ya nos ha pasado anteriormente, nos muestra más información de la que deseamos, así que filtraremos y solo mostraremos lo que nos interesa, para ello haremos uso del comando awk y compararemos si la primera palabra de una línea es "system" se printará por pantalla la tercera palabra de esa línea, un espacio y la cuarta palabra. El comando entero sería el siguiente: ```who -b | awk '$1 == "system" {print $3 " " $4}'```.


### 5-8 Uso LVM

Para checkear si LVM está activo o no haremos uso del comando lsblk, este nos muestra información de todos los dispositivos de bloque (discos duros, SSD, memorias, etc.) entre toda la información que proporciona podemos ver lvm en el tipo de gestor. Para este comando haremos un if, ya que o printaremos Yes o No. Básicamente la condición que buscamos será contar el número de líneas en las que aparece "lvm" y si hay más de 0 printamos Yes, si hay 0 se printará No. Todo el comando sería: ```if [ $(lsblk | grep "lvm" | wc -l) -gt 0 ]; then echo yes; else echo no; fi```.

### 5-9 Conexiones TCP

Para mirar el número de conexiones TCP establecidas. Utilizaremos el comando ```ss``` sustituyendo al ya obsoleto netstat. Filtraremos con el flag ```-ta``` para que solo se muestren las conexiones TCP. Por último haremos un grep para ver las que están establecidas, ya que también hay solo de escucha y cerraremos con wc -l para que cuente el número de líneas. El comando queda tal que así: ```ss -ta | grep ESTAB | wc -l```. 


### 5-10 Número de usuarios

Daremos uso del comando ```users``` que nos mostrará el nombre de los usuarios que hay, sabiendo esto, pondremos wc -w para que cuente la cantidad de palabras que hay en la salida del comando. El comando entero queda así ```users | wc -w```.

### 5-11 Dirección IP y MAC

Para obtener la dirección del host haremos uso del comando ```hostname -I``` y para obtener la MAC haremos uso del comando ```ip link``` que se utiliza para mostrar o modificar las interfaces de red. Como aparecen más de una interfaz, IP's etc. Utilizaremos el comando grep para buscar lo que deseamos y así poder printar por pantalla solo lo que nos piden. Para ello pondremos ```ip link | grep "link/ether" | awk '{print $2}'``` y de esta manera solo printaremos la MAC.

### 5-12 Número de comandos ejecutados con sudo

Para poder obtener el número de comandos que son ejecutados con sudo haremos uso del comando journalctl que este es una herramienta que se encarga de recopilar y administrar los registros del sistema. Acto seguido pondremos ```_COMM=sudo``` par así filtrar las entradas especificando su ruta. En nuestro ponemos ```_COMM``` , ya que hace referencia a un script ejecutable. Una vez tengamos filtrada la búsqueda y solo aparezcan los registros de sudo todavía deberemos filtrar un poco más, ya que cuando inicias o cierras sesión de root también aparece en el registro, entonces para terminar de filtrar pondremos un ```grep COMMAND``` y asi solo aparecerán las líneas de comandos. Por último pondremos ```wc -l``` para que asi nos salgan enumeradas las líneas. El comando entero es el siguiente: ```journalctl _COMM=sudo | grep COMMAND | wc -l)```. Para comprobar que funcione correctamente podemos correr el comando en el terminal, poner un comando que incluya sudo y volver a correr el comando y deberá
incrementar el número de ejecuciones de sudo.

### 5-13 Resultado total del script

⚠️ Recuerda no hacer copia y pega si no sabes el funcionamiento de cada comando ⚠️

```
#!/bin/bash

# ARCH
arch=$(uname -a)

# CPU PHYSICAL
cpuf=$(grep "physical id" /proc/cpuinfo | wc -l)

# CPU VIRTUAL
cpuv=$(grep "processor" /proc/cpuinfo | wc -l)

# RAM
ram_total=$(free --mega | awk '$1 == "Mem:" {print $2}')
ram_use=$(free --mega | awk '$1 == "Mem:" {print $3}')
ram_percent=$(free --mega | awk '$1 == "Mem:" {printf("%.2f"), $3/$2*100}')

# DISK
disk_total=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_t += $2} END {printf ("%.1fGb\n"), disk_t/1024}')
disk_use=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_u += $3} END {print disk_u}')
disk_percent=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_u += $3} {disk_t+= $2} END {printf("%d"), disk_u/disk_t*100}')

# CPU LOAD
cpul=$(vmstat 1 2 | tail -1 | awk '{printf $15}')
cpu_op=$(expr 100 - $cpul)
cpu_fin=$(printf "%.1f" $cpu_op)

# LAST BOOT
lb=$(who -b | awk '$1 == "system" {print $3 " " $4}')

# LVM USE
lvmu=$(if [ $(lsblk | grep "lvm" | wc -l) -gt 0 ]; then echo yes; else echo no; fi)

# TCP CONNEXIONS
tcpc=$(ss -ta | grep ESTAB | wc -l)

# USER LOG
ulog=$(users | wc -w)

# NETWORK
ip=$(hostname -I)
mac=$(ip link | grep "link/ether" | awk '{print $2}')

# SUDO
cmnd=$(journalctl _COMM=sudo | grep COMMAND | wc -l)

wall "	Architecture: $arch
	CPU physical: $cpuf
	vCPU: $cpuv
	Memory Usage: $ram_use/${ram_total}MB ($ram_percent%)
	Disk Usage: $disk_use/${disk_total} ($disk_percent%)
	CPU load: $cpu_fin%
	Last boot: $lb
	LVM use: $lvmu
	Connections TCP: $tcpc ESTABLISHED
	User log: $ulog
	Network: IP $ip ($mac)
	Sudo: $cmnd cmd"
```
Script visto desde nano ↙️

<img width="911" alt="Captura de pantalla 2022-08-03 a las 3 47 31" src="https://user-images.githubusercontent.com/66915274/182506484-f5a095b8-4751-461e-a114-f8e36b4cfa9a.png">


## 6- Crontab ⏰

🧠 <b>Qué es crontab? </b>Es un administrador de procesos en segundo plano. Los procesos indicados serán ejecutados en el momento que especifiques en el fichero crontab.

Para tener correctamente crontab configurado debemos editar el fichero crontab con el siguiente comando ```sudo crontab -u root -e```. 

En el fichero debemos añadir el siguiente comando para que el script se ejecute cada 10 minutos ```*/10 * * * * sh /ruta del script```. 


Funcionamiento de cada parámetro de crontab: 

m ➤ Corresponde al minuto en que se va a ejecutar el script, el valor va de 0 a 59.

h ➤ La hora exacta, se maneja el formato de 24 horas, los valores van de 0 a 23, siendo 0 las 12:00 de la medianoche.
dom ➤ hace referencia al día del mes, por ejemplo se puede especificar 15 si se quiere ejecutar cada día 15.

dow ➤ Significa el día de la semana, puede ser numérico (0 a 7, donde 0 y 7 son domingo) o las 3 primeras letras del día en inglés: mon, tue, wed, thu, fri, sat, sun.

user ➤ Define el usuario que va a ejecutar el comando, puede ser root, u otro usuario diferente siempre y cuando tenga permisos de ejecución del script.

command ➤ Refiere al comando o a la ruta absoluta del script a ejecutar.

## 7- Signature.txt 📝

Para obtener la firma lo primero que debemos hacer es apagar la máquina virtual ya que una vez la enciendas o modifiques algo la firma cambiará.

<img width="834" alt="Captura de pantalla 2022-08-03 a las 4 47 32" src="https://user-images.githubusercontent.com/66915274/182513283-1cfc319f-982d-47cf-a596-8475d4c96616.png">

El siguiente paso será ubicarnos en la ruta donde tengamos el .vdi de nuestra máquina virtual. 

Por último haremos ```shasum nombremaquina.vdi``` y esto nos dara la firma. El resultado de esta firma es lo que tendremos añadir a nuestro fichero signature.txt para posteriormente subir el fichero al repositorio de la intra. Muy importante no volver a abrir la máquina ya que se modificara la firma. Para las correcciones recuerda clonar la máquina ya que asi podras encenderla sin miedo a que cambie la firma.

🧠 <b> Qué es shasum❓</b> Es un comando que permite identificar la integridad de un fichero mediante la suma de comprobación del hash SHA-1 de un archivo.


## 8- Bonus ⭐️

### 8.1- Particionado manual del disco

1 ◦ En el momento de escoger el particionado de disco, seleccionaremos manual. De esta manera podremos editar las particiones una a una.

<img width="789" alt="Screen Shot 2022-10-23 at 4 30 48 PM" src="https://user-images.githubusercontent.com/66915274/197397840-b6ae9d65-a6aa-4a5d-a03f-856d9ce81644.png">

2 ◦ En este apartado nos muestra una descripción general de nuestras particiones y puntos de montaje. Actualmente, no tenemos particiones hechas. Para crear una nueva tabla de particiones debemos escoger el dispositivo donde queremos crearlas. En nuestro caso escogeremos el único disponible.

<img width="793" alt="Screen Shot 2022-10-23 at 4 35 39 PM" src="https://user-images.githubusercontent.com/66915274/197398114-44abc561-d34d-47c9-b512-581b4ec6fddb.png">

3 ◦ Aceptamos el mensaje de confirmación. Básicamente, nos avisa que si ya hay particiones en el dispositivo serán eliminadas y que si estamos seguros de crear una nueva tabla de particiones vacía…

<img width="770" alt="Screen Shot 2022-10-23 at 4 36 08 PM" src="https://user-images.githubusercontent.com/66915274/197398137-b9fe1f96-5907-462e-8a50-44b71ae2aefe.png">

4 ◦ Una vez hemos completado el paso anterior podemos ver como nos aparece nuestra tabla de particiones vacía. Ahora debemos configurarla, para ello debemos seleccionarla.

<img width="786" alt="Screen Shot 2022-10-23 at 4 36 35 PM" src="https://user-images.githubusercontent.com/66915274/197398172-b05fa7aa-e5b4-40cb-afd4-03a1404d7885.png">

5 ◦ Crearemos una nueva partición.

<img width="512" alt="Screen Shot 2022-10-23 at 4 36 54 PM" src="https://user-images.githubusercontent.com/66915274/197398199-70570553-de1b-49a9-8c44-da9a1e4b5c1e.png">

Empezaremos creando esta:

![image](https://user-images.githubusercontent.com/66915274/197427077-48636236-4012-4edf-b0e4-319db502e685.png)

6 ◦ Como bien indica el subject, el tamaño de la partición debe ser de 500 megabytes.

<img width="777" alt="Screen Shot 2022-10-23 at 4 37 27 PM" src="https://user-images.githubusercontent.com/66915274/197398241-604b2bb2-7303-412a-b382-40bfbf443ed0.png">

7 ◦ Escogemos el tipo de la partición. Escogemos primaria ya que será la partición donde se encontrará instalado el Sistema Operativo.

<img width="457" alt="Screen Shot 2022-10-23 at 4 37 38 PM" src="https://user-images.githubusercontent.com/66915274/197398253-2c0f8205-3d3f-4ab7-94a3-70c37ee014d9.png">

Descripción breve de todos los tipos de particiones:

◦ <b>Primaria:</b> La única partición en la que puede estar instalada un SO. Solo puede haber 4 particiones primarias por disco duro o 3 primarias y una extendida.

◦ <b>Secundario/Extendida:</b>  Fue ideada para romper la limitación de 4 particiones primarias en un solo disco físico. Solo puede existir una partición de este tipo por disco, y solo sirve para contener particiones lógicas.

◦ <b>Lógica:</b>  Ocupa una porción de la partición extendida/primaria o la totalidad de la misma, la cual se ha formateado con un tipo específico de sistema de archivos (en nuestro caso usaremos ext4) y se le ha asignado una unidad, así el sistema operativo reconoce las particiones lógicas o su sistema de archivos. Puede haber un máximo de 23 particiones lógicas en una partición extendida, sin embargo, Linux, el SO con el que trabajamos actualmente, lo reduce a 15, más que suficientes para realizar este proyecto. 

8 ◦ Seleccionaremos beginning ya que queremos que la nueva partición se cree al principio del espacio disponible.

<img width="787" alt="Screen Shot 2022-10-23 at 4 37 52 PM" src="https://user-images.githubusercontent.com/66915274/197398265-c63d7b32-55b7-45ad-86b3-166e44cfd598.png">

9 ◦ En la siguiente captura nos muestra los detalles de la partición. Modificaremos el punto de montaje al que específica el subject.

<img width="781" alt="Screen Shot 2022-10-23 at 4 38 27 PM" src="https://user-images.githubusercontent.com/66915274/197398293-2487ded0-2584-48c4-a5ea-1f2464ec39f9.png">

10 ◦ Escogemos boot como el punto de montaje de nuestra partición.

<img width="577" alt="Screen Shot 2022-10-23 at 4 38 49 PM" src="https://user-images.githubusercontent.com/66915274/197398322-51b9854b-ab32-4d81-8126-3ef3913858a6.png">

11 ◦ Terminamos de configurar la partición actual.

<img width="787" alt="Screen Shot 2022-10-23 at 4 39 07 PM" src="https://user-images.githubusercontent.com/66915274/197398336-72b17153-73dc-48a5-b7d3-839877e8983b.png">

12 ◦ Una vez hemos completado el paso anterior ya nos debe aparecer la partición. Ahora debemos crear una partición lógica con todo el espacio disponible del disco, que no tenga punto de montaje y que esté encriptada. Para ello seleccionamos el espacio libre donde queremos crearla.

<img width="781" alt="Screen Shot 2022-10-23 at 4 39 37 PM" src="https://user-images.githubusercontent.com/66915274/197398367-ee8a1f5d-3941-4a86-a775-90f29b1c955e.png">

![image](https://user-images.githubusercontent.com/66915274/197431553-718358bb-6570-41dd-b114-09acc347999d.png)

13 ◦ Creamos nueva partición.

<img width="462" alt="Screen Shot 2022-10-23 at 4 39 58 PM" src="https://user-images.githubusercontent.com/66915274/197398396-843c7fb3-b945-4305-a960-02aa9d4ca940.png">

14 ◦ Seleccionamos el tamaño máximo.

<img width="779" alt="Screen Shot 2022-10-23 at 4 40 26 PM" src="https://user-images.githubusercontent.com/66915274/197398425-63205376-839f-4986-a8d0-981cdaa380e4.png">

15 ◦ Seleccionamos el tipo de partición, en este caso lógica.

<img width="466" alt="Screen Shot 2022-10-23 at 4 40 53 PM" src="https://user-images.githubusercontent.com/66915274/197398448-49c99180-9a3d-4dd4-a9ce-d680bfdefa1c.png">

16 ◦ Modificaremos el punto de montaje.

<img width="788" alt="Screen Shot 2022-10-23 at 4 41 44 PM" src="https://user-images.githubusercontent.com/66915274/197398500-188cc4fb-4eb5-4a56-893b-58838877c056.png">

17 ◦ Escogeremos la opción de no montarlo.

<img width="590" alt="Screen Shot 2022-10-23 at 4 42 11 PM" src="https://user-images.githubusercontent.com/66915274/197398518-f6fb7588-8c53-40a9-9ceb-238d6a62d942.png">

18 ◦ Terminamos de configurar la partición actual.

<img width="788" alt="Screen Shot 2022-10-23 at 4 42 41 PM" src="https://user-images.githubusercontent.com/66915274/197398541-922f2c4d-ed5a-4d92-8083-ccf57aec3dee.png">

19 ◦ Configuraremos volúmenes encriptados. Para asi poder encriptar nuestra partición.

<img width="786" alt="Screen Shot 2022-10-23 at 4 43 08 PM" src="https://user-images.githubusercontent.com/66915274/197398562-2369fa90-7db9-4ba3-abed-7ac15ede8b81.png">

20 ◦ Aceptamos el mensaje de confirmación.

<img width="777" alt="Screen Shot 2022-10-23 at 4 43 27 PM" src="https://user-images.githubusercontent.com/66915274/197398573-9720e351-04f4-49f0-a3dc-fe0ce1ada296.png">

21 ◦ Creamos los volúmenes encriptados.

<img width="596" alt="Screen Shot 2022-10-23 at 4 43 46 PM" src="https://user-images.githubusercontent.com/66915274/197398595-b36ab8da-86c6-483a-99fd-079293a92570.png">

22 ◦ Seleccionamos en que partición queremos realizar la encriptación.

<img width="568" alt="Screen Shot 2022-10-23 at 4 44 06 PM" src="https://user-images.githubusercontent.com/66915274/197398615-7c9f8e45-7885-4f39-84eb-e3a056eeb2c7.png">

23 ◦ Terminamos de configurar la partición actual.

<img width="787" alt="Screen Shot 2022-10-23 at 4 44 35 PM" src="https://user-images.githubusercontent.com/66915274/197398649-06749ec8-903d-4b1a-af2a-c2dad77bcaec.png">

24 ◦ Finalizamos, ya que no queremos crear más volúmenes encriptados.

<img width="589" alt="Screen Shot 2022-10-23 at 4 44 49 PM" src="https://user-images.githubusercontent.com/66915274/197398663-0bd74c65-b3fd-430c-b3e6-4f1e0c76ae8d.png">

25 ◦ Aceptamos el mensaje de confirmación. Nos comenta que se encriptara todo lo que hay dentro de la partición y que no debe tardar mucho en terminar.

<img width="783" alt="Screen Shot 2022-10-23 at 4 45 06 PM" src="https://user-images.githubusercontent.com/66915274/197398670-91db3e3e-b271-4e1b-ad8a-28ceb06e0897.png">

26 ◦ Nos da igual si tarda mucho o poco, le damos a cancel, ya que no hay nada que encriptar, debido a que la partición está vacía.

<img width="789" alt="Screen Shot 2022-10-23 at 4 45 27 PM" src="https://user-images.githubusercontent.com/66915274/197398685-6603ef31-d499-46da-949f-ade8e2a05bf9.png">

27 ◦ De nuevo deberemos poner una contraseña, esta vez será la frase de encriptación. Como te he comentado previamente deberás repetir el proceso y la debes anotar, ya que será importante en un futuro.

<img width="779" alt="Screen Shot 2022-10-23 at 4 48 38 PM" src="https://user-images.githubusercontent.com/66915274/197398855-0c93f419-897e-4eee-9499-18321d8e8dfd.png">

28 ◦ Repetimos la frase de encriptación.

<img width="722" alt="Screen Shot 2022-10-23 at 4 49 01 PM" src="https://user-images.githubusercontent.com/66915274/197398875-3fa85638-7105-42bf-bbc2-e189fbbc1918.png">

29 ◦ Configuraremos el gestor de volúmenes lógicos. 

<img width="785" alt="Screen Shot 2022-10-23 at 4 50 17 PM" src="https://user-images.githubusercontent.com/66915274/197398933-85e0025e-0a4d-41f0-8fd0-5f0c8ee32e9b.png">

30 ◦ Aceptaremos en mensaje de confirmación, ya que estamos de acuerdo con que se guarden los cambios en el disco.

<img width="786" alt="Screen Shot 2022-10-23 at 4 50 42 PM" src="https://user-images.githubusercontent.com/66915274/197398945-d79ea2a7-a13e-4e6a-9e9c-40bdcd2dd502.png">

31 ◦ Crearemos un nuevo grupo de volumen. Los grupos de volúmenes agrupan particiones.

<img width="454" alt="Screen Shot 2022-10-23 at 4 52 04 PM" src="https://user-images.githubusercontent.com/66915274/197399021-29b21274-37c1-4fd9-8526-962969d1cce3.png">

32 ◦ Introduciremos el nombre que queremos darle. ```LVMGroup``` tal y como indica el subject.

<img width="695" alt="Screen Shot 2022-10-23 at 4 52 58 PM" src="https://user-images.githubusercontent.com/66915274/197399065-1ac8d80d-9e18-4b4a-a60f-11496e7de26d.png">

33 ◦ Seleccionaremos la partición donde queremos crear el grupo. 

<img width="590" alt="Screen Shot 2022-10-23 at 4 53 22 PM" src="https://user-images.githubusercontent.com/66915274/197399089-5ea5f48e-176c-4278-8b14-a13b7f5ee45c.png">

34 ◦ Ahora debemos crear todas las particiones lógicas. Al tener que repetir las mismas acciones varias veces hay capturas que no serán documentadas.

![image](https://user-images.githubusercontent.com/66915274/197439138-889d6368-1875-402b-a094-bd146bb7cb8a.png)


<img width="457" alt="Screen Shot 2022-10-23 at 4 53 50 PM" src="https://user-images.githubusercontent.com/66915274/197399108-fb566eb4-664f-4509-8948-ab4ed04407b5.png">

35 ◦ Empezaremos escogiendo el grupo donde queremos que se creen. Seleccionamos el único disponible (el que acabamos de crear). 

<img width="760" alt="Screen Shot 2022-10-23 at 4 54 02 PM" src="https://user-images.githubusercontent.com/66915274/197399115-e7d3b313-763c-421c-a71d-850d318432e7.png">

36 ◦ El orden de la creación de las unidades lógicas será el mismo que indica el subject, asi que empezaremos por root y acabaremos por var-log. Entonces seleccionaremos el nombre del volumen lógico.

<img width="662" alt="Screen Shot 2022-10-23 at 4 55 42 PM" src="https://user-images.githubusercontent.com/66915274/197399188-6ae8c83b-057d-498f-b112-9116079b0808.png">

37 ◦ Tamaño, como bien indica el subject, será de 10g.

<img width="782" alt="Screen Shot 2022-10-23 at 4 56 21 PM" src="https://user-images.githubusercontent.com/66915274/197399216-c65f43ca-fb8e-4d05-9212-24ad2ee87b39.png">

38 ◦ Repetimos el proceso para ```swap```. Solo cambiaremos el nombre y el tamaño.

<img width="443" alt="Screen Shot 2022-10-23 at 4 56 49 PM" src="https://user-images.githubusercontent.com/66915274/197399239-c26598cb-e7bb-474c-aece-90f043e1990f.png">

<img width="751" alt="Screen Shot 2022-10-23 at 4 57 26 PM" src="https://user-images.githubusercontent.com/66915274/197399278-c5cd5a9c-2ab1-42b9-8871-b58e9b33b4b6.png">

<img width="667" alt="Screen Shot 2022-10-23 at 4 57 41 PM" src="https://user-images.githubusercontent.com/66915274/197399288-7ecf6adf-aaf5-46bf-959f-2159d19b7bbf.png">

<img width="782" alt="Screen Shot 2022-10-23 at 4 58 11 PM" src="https://user-images.githubusercontent.com/66915274/197399310-fc6c397e-8257-4e06-8fba-ad35431c9b96.png">

39 ◦ Repetimos el proceso para ```home```. Solo cambiaremos el nombre y el tamaño.

<img width="476" alt="Screen Shot 2022-10-23 at 4 58 57 PM" src="https://user-images.githubusercontent.com/66915274/197399347-a815d58b-686e-4d9d-bb5c-34a7b54476ab.png">

<img width="756" alt="Screen Shot 2022-10-23 at 4 59 07 PM" src="https://user-images.githubusercontent.com/66915274/197399355-28617029-c28c-4ca4-b56b-646e066cded6.png">

<img width="672" alt="Screen Shot 2022-10-23 at 5 01 13 PM" src="https://user-images.githubusercontent.com/66915274/197399433-1e9c7110-9240-4982-9835-b026ed73171f.png">

<img width="770" alt="Screen Shot 2022-10-23 at 5 04 34 PM" src="https://user-images.githubusercontent.com/66915274/197399610-247a7a35-0141-4c14-884e-7ecd07caa96d.png">

40 ◦ Repetimos el proceso para ```var```. Solo cambiaremos el nombre y el tamaño.

<img width="482" alt="Screen Shot 2022-10-23 at 5 05 10 PM" src="https://user-images.githubusercontent.com/66915274/197399644-58da651c-f4ad-4d1e-b128-de87c92cc292.png">

<img width="700" alt="Screen Shot 2022-10-23 at 5 05 30 PM" src="https://user-images.githubusercontent.com/66915274/197399662-32ab0a06-c14d-4a0e-ac80-cb0d12fc24eb.png">

<img width="774" alt="Screen Shot 2022-10-23 at 5 06 03 PM" src="https://user-images.githubusercontent.com/66915274/197399693-b49c2ffe-b21a-43c5-bd3f-160bc544b072.png">

41 ◦ Repetimos el proceso para ```srv```. Solo cambiaremos el nombre.

<img width="446" alt="Screen Shot 2022-10-23 at 5 06 14 PM" src="https://user-images.githubusercontent.com/66915274/197399702-6d531de3-690d-458d-9a3b-bf6ceedd7cda.png">

<img width="754" alt="Screen Shot 2022-10-23 at 5 06 39 PM" src="https://user-images.githubusercontent.com/66915274/197399724-0fdd75ad-e978-4468-8509-a62cdc4a3faf.png">

<img width="671" alt="Screen Shot 2022-10-23 at 5 06 57 PM" src="https://user-images.githubusercontent.com/66915274/197399744-b82b1dcd-09c7-44cc-a2ab-b6079abcbb5a.png">

<img width="771" alt="Screen Shot 2022-10-23 at 5 07 13 PM" src="https://user-images.githubusercontent.com/66915274/197399757-94732b16-585e-4f7d-a20f-f7ef0814b4e7.png">

42 ◦ Repetimos el proceso para ```tmp```. Solo cambiaremos el nombre.

<img width="481" alt="Screen Shot 2022-10-23 at 5 07 34 PM" src="https://user-images.githubusercontent.com/66915274/197399777-9d871f2a-856d-4b4d-ad18-1195001b0fdf.png">

<img width="732" alt="Screen Shot 2022-10-23 at 5 07 46 PM" src="https://user-images.githubusercontent.com/66915274/197399792-0794ace5-c236-4f68-b023-bb471753eba2.png">

<img width="659" alt="Screen Shot 2022-10-23 at 5 07 55 PM" src="https://user-images.githubusercontent.com/66915274/197399798-84a31102-6953-468b-85d4-0a248e98cb17.png">

<img width="768" alt="Screen Shot 2022-10-23 at 5 08 19 PM" src="https://user-images.githubusercontent.com/66915274/197399827-5dfc8571-e82c-4a28-aae7-dc716fb6e77b.png">

43 ◦ Por último repetimos el proceso para ```var-log```. Solo cambiaremos el nombre y el tamaño.

<img width="448" alt="Screen Shot 2022-10-23 at 5 08 34 PM" src="https://user-images.githubusercontent.com/66915274/197399838-2cd49171-45dd-469a-887c-3ce99d84b7cd.png">

<img width="762" alt="Screen Shot 2022-10-23 at 5 08 40 PM" src="https://user-images.githubusercontent.com/66915274/197399841-04b75112-4d21-456c-bf50-8335839764e0.png">

<img width="658" alt="Screen Shot 2022-10-23 at 5 08 59 PM" src="https://user-images.githubusercontent.com/66915274/197399859-d706de2e-bb20-4a04-96db-4dd57b3778be.png">

<img width="779" alt="Screen Shot 2022-10-23 at 5 09 28 PM" src="https://user-images.githubusercontent.com/66915274/197399886-a1e9ee69-78a4-4071-af99-2192d535c6cd.png">


44 ◦ Una vez hayamos completado todos los pasos anteriores finalizaremos la configuración del gestor de volúmenes lógicos.

<img width="438" alt="Screen Shot 2022-10-23 at 5 09 51 PM" src="https://user-images.githubusercontent.com/66915274/197399904-c584fcdf-eb38-486f-af12-7374f1e04465.png">

45 ◦ Ahora podemos observar como en el apartado donde nos muestran todas nuestras particiones y espacio libre ya aparecen todas las particiones lógicas que acabamos de crear. Bien , debemos configurar todas para seleccionar el sistema de archivos que queremos y el punto de montaje que indica el subject. De nuevo iremos por orden y seleccionaremos la primera que nos aparece que es ```home```.

<img width="783" alt="Screen Shot 2022-10-23 at 5 10 36 PM" src="https://user-images.githubusercontent.com/66915274/197399944-bccbe599-b80a-4abe-ac6c-d770447ea727.png">

46 ◦ Nos muestra la configuración de la partición. Debemos escoger un sistema de ficheros ya que actualmente no tiene.

<img width="782" alt="Screen Shot 2022-10-23 at 5 10 55 PM" src="https://user-images.githubusercontent.com/66915274/197399976-9b871bda-9425-4dbe-b8c9-25c8c6d6c811.png">

47 ◦ Escogemos el sistema de archivos Ext4, es el sistema de archivos más utilizado en distribuciones Linux.  

<img width="412" alt="Screen Shot 2022-10-23 at 5 11 18 PM" src="https://user-images.githubusercontent.com/66915274/197400000-2e855fc9-10b1-4f3e-9c58-85b6ff02a4fb.png">

48 ◦ Ahora debemos seleccionar el punto de montaje. 

<img width="782" alt="Screen Shot 2022-10-23 at 5 11 44 PM" src="https://user-images.githubusercontent.com/66915274/197400023-387a70aa-b491-43c0-91d2-cb378da9fc75.png">

49 ◦ Seleccionamos ```home``` como bien indica el subject.

<img width="515" alt="Screen Shot 2022-10-23 at 5 11 54 PM" src="https://user-images.githubusercontent.com/66915274/197400040-e79cad4f-368b-4cee-9ec0-942f38b2f785.png">

50 ◦ Una vez ya lo hemos seleccionado terminaremos la configuración de la partición.

<img width="785" alt="Screen Shot 2022-10-23 at 5 12 10 PM" src="https://user-images.githubusercontent.com/66915274/197400059-ab96f2c4-cd92-47cb-a9ee-61257537ee6a.png">

51 ◦ De nuevo estos pasos se pueden volver muy repetitivos asique no comentare mucho. Repetimos todo igual (excepto el punto de montaje) para ```root```.

<img width="782" alt="Screen Shot 2022-10-23 at 5 13 36 PM" src="https://user-images.githubusercontent.com/66915274/197400135-c08444fe-e39d-45fa-a3b6-3c73db2a4935.png">

<img width="782" alt="Screen Shot 2022-10-23 at 5 13 53 PM" src="https://user-images.githubusercontent.com/66915274/197400146-41ce0b0c-142c-46b4-a3c5-918676a3a852.png">

<img width="421" alt="Screen Shot 2022-10-23 at 5 14 08 PM" src="https://user-images.githubusercontent.com/66915274/197400155-92759327-5671-41f4-8104-dd1de4bc88cb.png">

<img width="775" alt="Screen Shot 2022-10-23 at 5 14 22 PM" src="https://user-images.githubusercontent.com/66915274/197400171-6fd04783-e833-4afd-a753-4b943133a4ab.png">

<img width="525" alt="Screen Shot 2022-10-23 at 5 14 39 PM" src="https://user-images.githubusercontent.com/66915274/197400182-780e1917-3f77-4986-b0e8-b50a90d75403.png">

<img width="790" alt="Screen Shot 2022-10-23 at 5 14 52 PM" src="https://user-images.githubusercontent.com/66915274/197400186-88da831a-c672-4ec0-a64c-0ad2808bb6c5.png">

52 ◦ Repetimos el proceso para ```srv``` y cambiaremos el punto de montaje.

<img width="778" alt="Screen Shot 2022-10-23 at 5 15 05 PM" src="https://user-images.githubusercontent.com/66915274/197400198-599b4aa3-a511-45d1-86b0-dd42da4c380f.png">

<img width="778" alt="Screen Shot 2022-10-23 at 5 15 31 PM" src="https://user-images.githubusercontent.com/66915274/197400218-e6b26eb7-7933-426f-a7cd-a791400ebdab.png">

<img width="428" alt="Screen Shot 2022-10-23 at 5 15 37 PM" src="https://user-images.githubusercontent.com/66915274/197400222-95107b34-8d28-4d4d-a74b-7de6c6a46d33.png">

<img width="787" alt="Screen Shot 2022-10-23 at 5 15 44 PM" src="https://user-images.githubusercontent.com/66915274/197400227-20c13dc0-52cd-4c70-bf4e-531979c54a3e.png">

<img width="530" alt="Screen Shot 2022-10-23 at 5 15 52 PM" src="https://user-images.githubusercontent.com/66915274/197400238-3b403294-74d1-4e63-aca7-7d83447ed5b8.png">

<img width="790" alt="Screen Shot 2022-10-23 at 5 16 04 PM" src="https://user-images.githubusercontent.com/66915274/197400249-035f6b9d-3716-4565-9776-aa0af49b3fd7.png">

53 ◦ Para ```swap``` haremos una excepción, ya el sistema de archivos será diferente. Seleccionamos ```swap```.

<img width="780" alt="Screen Shot 2022-10-23 at 5 16 32 PM" src="https://user-images.githubusercontent.com/66915274/197400272-112b44ef-4996-438a-90b8-6620cdd7d2ff.png">

54 ◦ En el momento de seleccionar el sistema de archivos lo dejamos en ```swap area```.

<img width="785" alt="Screen Shot 2022-10-23 at 5 16 41 PM" src="https://user-images.githubusercontent.com/66915274/197400281-e12ee636-8696-4bee-9198-862b7d6be199.png">

55 ◦ Una vez realizado el paso anterior, terminaremos la configuración de la partición.

<img width="370" alt="Screen Shot 2022-10-23 at 5 16 59 PM" src="https://user-images.githubusercontent.com/66915274/197400297-8eed129d-0ec0-49a8-8b2a-dd0d04055f75.png">

<img width="787" alt="Screen Shot 2022-10-23 at 5 17 09 PM" src="https://user-images.githubusercontent.com/66915274/197400309-74e83209-4b2a-4e27-9a67-44373c1db362.png">

56 ◦ Ahora si volveremos a hacer lo mismo que antes, pero ahora lo haremos con ```tmp``` y cambiando el punto de montaje.

<img width="777" alt="Screen Shot 2022-10-23 at 5 17 41 PM" src="https://user-images.githubusercontent.com/66915274/197400341-608516f6-0f5a-4cdd-83d8-c8fbd1635624.png">

<img width="778" alt="Screen Shot 2022-10-23 at 5 17 49 PM" src="https://user-images.githubusercontent.com/66915274/197400346-e9647c7a-a9a2-4a0f-b439-a912247fb3f9.png">

<img width="372" alt="Screen Shot 2022-10-23 at 5 18 01 PM" src="https://user-images.githubusercontent.com/66915274/197400360-1816d06a-252e-4d41-b1a2-fc547961f353.png">

<img width="781" alt="Screen Shot 2022-10-23 at 5 18 08 PM" src="https://user-images.githubusercontent.com/66915274/197400370-0474b71f-c1c3-445f-ba02-088dc1c64ce3.png">

<img width="496" alt="Screen Shot 2022-10-23 at 5 18 24 PM" src="https://user-images.githubusercontent.com/66915274/197400386-f66494c5-97b9-4bb9-8c75-5856d69d26cc.png">

<img width="783" alt="Screen Shot 2022-10-23 at 5 18 40 PM" src="https://user-images.githubusercontent.com/66915274/197400405-4a368bfb-f862-4bbd-a33e-b87c3038d232.png">

57 ◦ Repetimos de nuevo el proceso para ```var``` cambiando el punto de montaje.

<img width="773" alt="Screen Shot 2022-10-23 at 5 19 13 PM" src="https://user-images.githubusercontent.com/66915274/197400447-85bcad13-8083-4aec-acb2-fa467e5d4e33.png">

<img width="790" alt="Screen Shot 2022-10-23 at 5 19 21 PM" src="https://user-images.githubusercontent.com/66915274/197400452-aed22368-4889-4c04-bf60-5a06fb93944e.png">

<img width="386" alt="Screen Shot 2022-10-23 at 5 19 28 PM" src="https://user-images.githubusercontent.com/66915274/197400459-b6f59948-e804-414a-b41d-21d2f495fccc.png">

<img width="780" alt="Screen Shot 2022-10-23 at 5 19 36 PM" src="https://user-images.githubusercontent.com/66915274/197400462-788d29e5-7798-418a-8725-3cb8dd2849bd.png">

<img width="515" alt="Screen Shot 2022-10-23 at 5 19 51 PM" src="https://user-images.githubusercontent.com/66915274/197400473-4508d9d6-481d-4f3a-9630-6c1eba7c5cc0.png">

<img width="779" alt="Screen Shot 2022-10-23 at 5 20 00 PM" src="https://user-images.githubusercontent.com/66915274/197400482-1f8c147f-66d8-438b-866f-3e9eff75ef5e.png">

58 ◦ Por último, repetimos de nuevo el proceso para ```var-log``` en este deberemos introducir manualmente el punto de montaje.

<img width="772" alt="Screen Shot 2022-10-23 at 5 20 23 PM" src="https://user-images.githubusercontent.com/66915274/197400513-53b3f899-47f5-4cdb-ab4b-205b1d1bce31.png">

![image](https://user-images.githubusercontent.com/66915274/197602511-fa34155b-3244-4b0c-8054-2778edecfb16.png)

![image](https://user-images.githubusercontent.com/66915274/197602585-03b540af-5d7a-4364-b90a-559bac0cb2a2.png)

![image](https://user-images.githubusercontent.com/66915274/197602630-cc749189-9ac9-48bc-a595-dc33282840ec.png)

![image](https://user-images.githubusercontent.com/66915274/197602673-5c18be85-1b0f-430b-b507-66711b807115.png)

![image](https://user-images.githubusercontent.com/66915274/197602699-fddadd2d-c54d-4313-8165-a93db1249b26.png)

![image](https://user-images.githubusercontent.com/66915274/197602741-431bd866-1558-4735-bb34-ab57dc5745b7.png)

59 ◦ Una vez hemos completado todos los pasos anteriores, ya casi hemos acabado, debemos darle a finalizar el particionado y asi se guarden todos los cambios en el disco.

![image](https://user-images.githubusercontent.com/66915274/197602907-4a3ba459-1a5d-468e-81dc-5206403cf034.png)

60 ◦ Aceptamos el mensaje y asi se guardarán los cambios. Asegúrate que todas las particiones quedan igual que en la captura.

![image](https://user-images.githubusercontent.com/66915274/197602944-13ca67b2-bcc5-476c-84dc-aadc5e1d3baf.png)

61 ◦ Seleccionamos la opción ```No``` , ya que no necesitamos paquetes adicionales. 

<img width="770" alt="Captura de pantalla 2022-07-13 a las 20 05 42" src="https://user-images.githubusercontent.com/66915274/178801099-2dda24f5-0d46-4184-8c44-a8fe0bf46527.png">

62 ◦ Escogemos nuestro País.

<img width="756" alt="Captura de pantalla 2022-07-13 a las 20 14 23" src="https://user-images.githubusercontent.com/66915274/178802653-d9e8504a-b60b-4441-8ee3-8d48ca4a6bf0.png">

63 ◦ Escogemos ```deb.debian.org``` , ya que teniendo en cuenta nuestra región es donde tendremos una mejor conexión.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 20 15 00" src="https://user-images.githubusercontent.com/66915274/178802772-4f67cd99-60d5-4439-8502-317e81e07d70.png">

64 ◦ Esta opción la dejaremos vacía, le daremos directamente a ```Continue```.

<img width="797" alt="Captura de pantalla 2022-07-13 a las 20 17 24" src="https://user-images.githubusercontent.com/66915274/178803208-2969acae-3fa7-423e-8a3c-bb7c76eff824.png">

65 ◦ Seleccionamos la opción ```No``` , ya que no queremos que los developers vean nuestras estadísticas, aunque sean anónimas.

<img width="796" alt="Captura de pantalla 2022-07-13 a las 20 21 54" src="https://user-images.githubusercontent.com/66915274/178803926-a4efbc70-f3e2-4e6c-9809-9152478d8237.png">

66 ◦ Quitaremos todas las opciones de software (con la barra espaciadora) y le daremos a ```Continue```.

<img width="797" alt="Captura de pantalla 2022-07-13 a las 20 24 17" src="https://user-images.githubusercontent.com/66915274/178804377-e775b89e-93d4-482f-a4d0-0ef126f47719.png">

67 ◦ Seleccionaremos ```Yes``` para instalar [GRUB boot](https://es.wikipedia.org/wiki/GNU_GRUB) en el disco duro.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 20 26 24" src="https://user-images.githubusercontent.com/66915274/178804771-ba16e0b7-9f06-4c5b-9451-0bfd65efd2bb.png">

68 ◦ Escogeremos el dispositivo para la instalación del cargador de arranque ```/dev/sda (ata_VBOX_HARDDISK)```.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 20 35 46" src="https://user-images.githubusercontent.com/66915274/178806441-f1bf3159-4e09-4c9a-9102-b3261c9000d8.png">

69 ◦ Le daremos a ```Continue``` para finalizar la instalación. 

<img width="794" alt="Captura de pantalla 2022-07-13 a las 20 39 30" src="https://user-images.githubusercontent.com/66915274/178807102-e2a9722e-791f-48a0-ae35-b05b36a37ed2.png">

70 ◦ Una vez hemos terminado con la instalación de Debian debemos configurar nuestra máquina virtual.

[Click aquí para dirigirte a la configuración de la máquina virtual ⚙️](#4-configuración-de-la-máquina-virtual-%EF%B8%8F)

### 8.2 - WordPress y configuración de servicios 🌐

### Lighttpd 

🧠 <b> Qué es Lighttpd❓</b> Es un servidor web diseñado para ser rápido, seguro, flexible, y fiel a los estándares. Está optimizado para entornos donde la velocidad es muy importante. Esto se debe a que consume menos CPU y memoria RAM que otros servidores.

1 ◦ Instalación de paquetes de lighttpd.

2 ◦ Permitimos las conexiones mediante el puerto 80 con el comando ```sudo ufw allow 80```.

3 ◦ Checkeamos que realmente hayamos permitido. Debe aparecer el puerto 80 y allow.

4 ◦ Añadimos la regla que incluya el puerto 80. Si no recuerdas como se añadían reglas en el reenvío de puertos. Configuración de la máquina → Red → Reenvío de puertos → Replicar la captura.

<img width="877" alt="Screen Shot 2022-11-18 at 2 49 56 PM" src="https://user-images.githubusercontent.com/66915274/202720044-d7a51add-c5ee-4da4-9057-258e47cfd036.png">

### WordPress 

🧠 <b> Qué es WordPress❓</b> Es un sistema de gestión de contenidos enfocado a la creación de cualquier tipo de página web.

1 ◦ Para instalar la última versión de WordPress primero debemos instalar wget y zip. Para ello haremos uso del siguiente comando ```sudo apt install wget zip```.

🧠 <b> Qué es wget❓</b> Es una herramienta de línea de comandos que se utiliza para descargar archivos de la web.

🧠 <b> Qué es zip❓</b> Es una utilidad de línea de comandos para comprimir y descomprimir archivos en formato ZIP.

2 ◦ Una vez hayamos instalado los paquetes nos debemos ubicar en la carpeta /var/www/ con el comando cd accederemos a ella ```cd /var/wwww```.

3 ◦ Una vez estemos en la ruta /var/www/ deberemos descargar la última versión de WordPress. Como mi idioma nativo es el español, yo seleccionaré la última versión en español. Utilizaremos el siguiente comando: ```sudo wget https://es.wordpress.org/latest-es_ES.zip```.

4 ◦ Descomprimimos el archivo que acabamos de descargar con el comando ```sudo unzip latest-es_ES.zip```.

5 ◦ Renombraremos la carpeta html y la llamaremos html_old. ```sudo mv html/ html_old/```.

6 ◦ Ahora renombraremos la carpeta wordpress y la llamaremos html. ```sudo mv wordpress/ html```.

7 ◦ Por último, estableceremos estos permisos en la carpeta html. Daremos uso del comando ```sudo chmod -R 755 html```. El número 7 indica que el propietario tiene permisos de lectura, escritura y ejecución. El número 5 indica que el grupo y otros solo tienen permisos de lectura y ejecución.

### Mariadb

🧠 <b> Qué es MariaDB❓</b> Es una base de datos. Se utiliza para diversos fines, como el almacenamiento de datos, el comercio electrónico, funciones a nivel empresarial y las aplicaciones de registro. 

1 ◦ Instalaremos los paquetes con el comando ```sudo apt install mariadb-server```

2 ◦ Debido a que la configuración predeterminada deja su instalación de MariaDB poco segura, utilizaremos un script que proporciona el paquete mariadb-server para restringir el acceso al servidor y eliminar las cuentas no utilizadas. Ejecutaremos el script con el siguiente comando ```sudo mysql_secure_installation```. Una vez ejecutemos el script nos hará una serie de preguntas. Preguntará si deseamos cambiar a la autenticación de socket de Unix. Como ya tenemos una cuenta root protegida escribiremos ```N```.

```
Switch to unix_socket autentication? → N
Change the root password? → N
Remove anonymous users? → Y
Disallow root login remotely? → Y
Remove test database and acces to it? → Y
Reaload privilege tables now? → Y
````

Switch to unix_socket autentication? Escogemos ```N``` porque no deseamos que cambie a la auntenticación de socket de Unix, ya tenemos una cuenta root protegida.

Change the root password? Escogemos ```N```. No deseamos cambiar la contraseña del usuario root. Por defecto no tenemos contraseña, pero en mariadb realmente no es root, ya que debemos darle permisos de administrador.

Remove anonymous users? Escogemos ```Y```. Por defecto, cuando instalas mariadb tiene un usuario anónimo, lo que permite que cualquier persona inicie sesión en mariadb sin tener que crear una cuenta de usuario propia. Esto está diseñado para realizar pruebas y que la instalación sea más fluida. Cuando dejemos el entorno de desarrollo y queramos pasar a un entorno de producción, debemos eliminar los usuarios anónimos. 

Disallow root login remotely? Escogemos ```Y```. Al deshabilitar el inicio de sesión en root de forma remota evitaremos que alguien pueda adivinar la contraseña root. Solo podremos conectarnos al root desde localhost.

Remove test database and acces to it? Escogemos ```Y```. De esta manera se eliminará la base de datos de prueba y cualquier usuario que tenga acceso a ella.

Reaload privilege tables now? Escogemos ```Y```. Asi se recargarán las tablas de permisos de MySQL para que los cambios en la configuración de seguridad entren en vigor de inmediato.

1 ◦ Una vez hayamos terminado con la instalación de mariadb debemos crear la base de datos y el usuario para el WordPress. Lo primero debemos acceder a mariadb.

2 ◦ Creamos una base de datos para el WordPress. En mi caso le voy a llamar wp_database. Todo esto lo hare con el comando ```CREATE DATABASE wp_database;```.

<img width="384" alt="Screen Shot 2023-03-31 at 9 53 17 PM" src="https://user-images.githubusercontent.com/66915274/229216821-fba3d891-c477-4e68-9799-57bcb9efcde3.png">

3 ◦ Para asegurarnos que se ha creado la base de datos para el WordPress, podemos ver todas las bases existentes con el comando ```SHOW DATABASES;```.

<img width="282" alt="Screen Shot 2023-03-31 at 9 54 04 PM" src="https://user-images.githubusercontent.com/66915274/229216973-fa35f5e1-04f1-4e56-8c44-55c4ad5a8745.png">

4 ◦ Acto seguido debemos crearemos un usuario dentro de la base de datos. Utilizaremos el comando ```CREATE USER 'iizquier'@'localhost' IDENTIFIED BY '12345';```.

5 ◦ Vinculamos el nuevo usuario a nuestra base de datos de manera que le otorguemos los permisos necesarios para poder trabajar. Daremos uso del comando ```GRANT ALL PRIVILEGES ON wp_database.* TO 'iizquier'@'localhost';```.

<img width="669" alt="Screen Shot 2023-03-31 at 10 01 32 PM" src="https://user-images.githubusercontent.com/66915274/229218529-e2cdcb3f-f8bc-4474-8e7b-c1cf9499aa57.png">

6 ◦ Actualizamos los permisos para que los cambios tengan efecto con el comando ```FLUSH PRIVILEGES;```.

<img width="321" alt="Screen Shot 2023-03-31 at 10 02 01 PM" src="https://user-images.githubusercontent.com/66915274/229218623-bad5faf3-231e-4472-a617-2ead2e713313.png">

7 ◦ Una vez hemos completado el paso anterior ya podemos salir de mariadb.

### PHP

🧠 <b> Qué es PHP❓</b> Es un lenguaje de programación. Se utiliza principalmente para desarrollar aplicaciones web dinámicas y sitios web interactivos. PHP se ejecuta en el lado del servidor.

1 ◦ Instalamos los paquetes necesarios para poder ejecutar aplicaciones web escritas en lenguaje PHP y que necesiten conectarse a una base de datos MySQL. Ejecutaremos el siguiente comando ```sudo apt install php-cgi php-mysql```.

### Configuración WordPress

1 ◦ Accedemos al directorio /var/www/html con el comando: ```cd /var/www/html```

2 ◦ Copiamos el fichero wp-config-sample.php y lo renombraremos wp-config.php

3 ◦ Una vez lo hayamos renombrado, editaremos el fichero wp-config.php ```nano wp-config.php``` y modificaremos los siguientes valores.

<img width="841" alt="Screen Shot 2023-04-01 at 8 42 25 PM" src="https://user-images.githubusercontent.com/66915274/229308713-bbbb69f4-5f6c-4146-bc10-006cd968fb95.png">

Hay que remplazarlos por los valores que hemos puesto anteriormente cuando creábamos la base de datos y el usuario para que WordPress pueda conectar y hacer uso de ella.

<img width="842" alt="Screen Shot 2023-04-01 at 8 46 08 PM" src="https://user-images.githubusercontent.com/66915274/229308845-4eac418d-c03f-48d1-9b74-463ef56a2ee5.png">

4 ◦ Habilitamos el módulo fastcgi-php en Lighttpd para mejorar el rendimiento y la velocidad de las aplicaciones web en el servidor. ```sudo lighty-enable-mod fastcgi```

5 ◦ Habilitamos el módulo fastcgi-php en Lighttpd para mejorar el rendimiento y la velocidad de las aplicaciones web basadas en PHP en el servidor. ```sudo lighty-enable-mod fastcgi-php```

6 ◦ Actualizamos y aplicamos los cambios en la configuración con el comando ```sudo service lighttpd force-reload```.

7 ◦ Una vez ya hemos completado los pasos anteriores podemos volver a dirigirnos a nuestro navegador y escribiremos ```localhost```. Nos deberá salir lo siguiente:

<img width="1075" alt="Screen Shot 2023-04-01 at 8 00 38 PM" src="https://user-images.githubusercontent.com/66915274/229308962-d39b1b6b-62cc-49d1-ad13-a016d6e73683.png">

8 ◦ Debemos rellenar todos los campos.

9 ◦ Una vez hayamos rellenado todos los campos debemos darle a ```Instalar WordPress``` y ya habremos terminado la instalación. Nos saldrá la siguiente pestaña. Ahora WordPress puede crear las tablas y volcar todos los datos que necesita para funcionar en la base de datos que le hemos asignado.

10 ◦ Si accedemos de nuevo a nuestro localhost desde el navegador ya podemos ver nuestra página funcional.

11 ◦ Si queremos acceder al panel de administrador para hacer cambios en nuestra página, deberemos poner en el navegador ```localhost/wp-admin``` e iniciaremos sesión con nuestra cuenta.

<img width="368" alt="Screen Shot 2023-04-01 at 9 05 41 PM" src="https://user-images.githubusercontent.com/66915274/229309619-024d5dcc-ea8d-4895-88f3-bb65fcdca7e2.png">

12 ◦ Una vez accedamos, ya podemos modificar lo que queramos a gusto propio. Personalizar la página es algo opcional, como no está especificado en el subject, en esta guía no se tratará nada al respecto. 

### 8.3 - Servicio adicional ➕

### LiteSpeed ⚡️

🧠 <b> Qué es LiteSpeed❓</b> Es un software de servidor web patentado. Es el cuarto servidor web más popular, y se estima que lo utiliza el 10% de los sitios web.

1 ◦ Antes de instalar cualquier software, es importante asegurarse de que el sistema esté actualizado.

```sudo apt update```

```sudo apt upgrade```

2 ◦ De forma predeterminada, OpenLiteSpeed está disponible en el repositorio base de Debian 11. Entonces, debes ejecutar el siguiente comando para agregar el repositorio OpenLiteSpeed a su sistema Debian:

```wget -O - https://repo.litespeed.sh | sudo bash```

Como el comando es largo me he conectado via ssh.

3 ◦ De nuevo, actualizamos los paquetes e instalaremos OpenLiteSpeed.

```sudo apt update```

```sudo apt install openlitespeed```

4 ◦ La contraseña predeterminada para OpenLiteSpeed es 123456. Cambiaremos la contraseña a algo más seguro con el siguiente comando.

```sudo /usr/local/lsws/admin/misc/admpass.sh```

5 ◦ Configuramos el firewall para permitir las conexiones mediante los puertos 8088 y 7080. Acto seguido agregaremos las reglas en el reenvío de puertos.

```sudo ufw allow 8088/tcp```

```sudo ufw allow 7080/tcp```

```sudo ufw reload```

Reglas en el reenvio de puertos.

<img width="825" alt="Screen Shot 2022-11-25 at 3 16 52 AM" src="https://user-images.githubusercontent.com/66915274/203886923-1db4cf56-d197-4c41-87f6-846253e08450.png">


6 ◦ Una vez completado el paso anterior ya podemos conectarnos. Pondremos en el buscador de nuestro navegador ```localhost:7080``` proporcionamos nuestras credenciales de inicio de sesión y ya tendremos acceso a todo.

<img width="800" alt="Screen Shot 2022-11-25 at 3 18 53 AM" src="https://user-images.githubusercontent.com/66915274/203887182-73d29abc-674c-4ace-bffb-de42b636ec38.png">

<br>
<br>
<br>

## 9- Hoja de corrección ✅

<img width="773" alt="Screen Shot 2023-01-22 at 5 13 44 PM" src="https://user-images.githubusercontent.com/66915274/214894873-b92fcaeb-251b-46fb-8ab8-fb8f861976ab.png">

<img width="772" alt="Screen Shot 2023-01-22 at 5 14 52 PM" src="https://user-images.githubusercontent.com/66915274/214894986-a0697331-8395-4f2b-9acd-50052b5b0f40.png">

<img width="772" alt="Screen Shot 2023-01-22 at 5 15 10 PM" src="https://user-images.githubusercontent.com/66915274/214895053-482efa21-b254-41ca-8239-c5f183a4ff41.png">

<img width="772" alt="Screen Shot 2023-01-22 at 5 15 22 PM" src="https://user-images.githubusercontent.com/66915274/214895097-ec42a53a-b897-4af8-adec-eb99aa6554c8.png">

## 9-1 Respuestas de la evaluación 💯

### ▪️ Qué es una máquina virtual❓

Es un software que simula un sistema de computación y puede ejecutar programas como si fuese una computadora real. Permite crear múltiples entornos simulados o recursos dedicados desde un solo sistema de hardware físico. 

### ▪️ Porque has escogido Debian❓

Esto es algo personal para cada uno, mi opinión: El propio subject explica que es más sencillo hacerlo en Debian y si buscas documentación/tutoriales hay muchos y todos se han hecho en Debian.

### ▪️ Diferencias básicas entre Rocky y Debian

![182516961-c3e4da77-2db8-4737-a68f-27b033908705 (1) (1)](https://user-images.githubusercontent.com/66915274/182517306-edb92eac-cba4-444a-83f8-9692bac69231.png)

### ▪️ Cuál es el propósito de las máquinas virtuales❓

Su objetivo es el de proporcionar un entorno de ejecución independiente de la plataforma de hardware y del sistema operativo, que oculte los detalles de la plataforma subyacente y permita que un programa se ejecute siempre de la misma forma sobre cualquier plataforma.

### ▪️ Diferencias entre apt y aptitude ↙️

Aptitude es una versión mejorada de apt. APT es un administrador de paquetes de nivel inferior y aptitude es un administrador de paquetes de alto nivel. Otra gran diferencia es la funcionalidad que ofrecen ambas herramientas. Aptitude ofrece una mejor funcionalidad en comparación con apt-get. Ambos son capaces de proporcionar los medios necesarios para realizar la gestión de paquetes. Sin embargo, si se busca un enfoque con más características, debería ser, Aptitude. 

### ▪️ Qué es APPArmor❓

Es un módulo de seguridad del kernel Linux que permite al administrador del sistema restringir las capacidades de un programa.

### ▪️ Qué es LVM❓

Es un gestor de volúmenes lógicos. Proporciona un método para asignar espacio en dispositivos de almacenamiento masivo, que es más flexible que los esquemas de particionado convencionales para almacenar volúmenes.

## 9-2 Comandos de la evaluación ⌨️

1 ◦ Comprobar que no haya ninguna interfaz gráfica en uso.

Utilizaremos el comando ```ls /usr/bin/*session``` y nos debe aparecer el mismo resultado que en la captura. Si aparece algo diferente se está utilizando una interfaz gráfica.

2 ◦ Comprobar que el servicio UFW está en uso.

```sudo ufw status```

```sudo service ufw status```

3 ◦ Comprobar que el servicio SSH está en uso.

```sudo service ssh status```

4 ◦ Comprobar que utilizas el sistema operativo Debian o CentOS.

```uname -v``` o ```uname --kernel-version```


5 ◦ Comprobar que tu usuario este dentro de los grupos "sudo" y "user42".

```getent group sudo```

```getent group user42```


6 ◦ Crear un nuevo usuario y mostrar que sigue la política de contraseñas que hemos creado.

```sudo adduser name_user``` e introducimos una contraseña que siga la política.

7 ◦ Creamos un nuevo grupo llamado "evaluating". 

```sudo addgroup evaluating```

8 ◦ Añadimos el nuevo usuario al nuevo grupo.

```sudo adduser name_user evaluating```

Para comprobar que se haya introducido correctamente.

9 ◦ Comprobar que el hostname de la máquina es correcto login42.

10 ◦ Modificar hostname para remplazar tu login por el del evaluador. En este caso lo reemplazaré por student42.

```sudo nano /etc/hostname``` y remplazamos nuestro login por el nuevo.

```sudo nano /etc/hosts``` y remplazamos nuestro login por el nuevo.

Reiniciamos la máquina.

Una vez nos hemos logueado de nuevo podemos ver como el hostname se ha cambiado correctamente.

11 ◦ Comprobar que todas las particiones son como indica el subject.

```lsblk```

12 ◦ Comprobar que sudo está instalado.

```which sudo```

Utilizar which realmente no es una buena práctica, ya que no todos los paquetes se encuentran en las rutas donde which busca, aun asi para la evaluación es mejor, ya que es un comando sencillo y fácil de aprender. Para un mejor uso haremos uso del siguiente comando:

```dpkg -s sudo```

13 ◦ Introducimos el nuevo usuario dentro del grupo sudo.

```sudo adduser name_user sudo```

Comprobamos que está dentro del grupo.

14 ◦ Muestra la aplicación de las reglas impuestas para sudo por el subject.

15 ◦ Muestra que la ruta /var/log/sudo/ existe y contiene al menos un fichero, en este se debería ver un historial de los comandos utilizados con sudo.

Ejecuta un comando con sudo y comprueba que se actualiza el fichero.

16 ◦ Comprueba que el programa UFW está instalado en la máquina virtual y comprueba que funciona correctamente.

```dpkg -s ufw```

```sudo service ufw status```

17 ◦ Lista las reglas activas en UFW. Si no está hecha la parte bonus, solo debe aparecer la regla para el puerto 4242.

```sudo ufw status numbered```

18 ◦ Crea una nueva regla para el puerto 8080. Comprueba que se ha añadido a las reglas activas y acto seguido puedes borrarla.

```sudo ufw allow 8080``` para crearla

```sudo ufw status numbered```

Para borrar la regla debemos utilizar el comando ```sudo ufw delete num_rule```

Comprobamos que se ha eliminado y vemos el numero de la siguiente regla que hay que borrar.

Borramos de nuevo la regla.

Comprobamos que solo nos quedan las reglas requeridas en el subject.

19 ◦ Comprueba que el servicio ssh esta instalado en la máquina virtual, que funciona correctamente y que solo funciona por el puerto 4242.

```which ssh```

```sudo service ssh status```

20 ◦ Usa SSH para iniciar sesión con el usuario recién creado. Asegúrate de que no puede usar SSH con el usuario root.

Intentamos conectarnos por SSH con el usuario root, pero no tenemos permisos.

Nos conectamos por SSH con el nuevo usuario con el comando ```ssh newuser@localhost -p 4343```

21 ◦ Modifica el tiempo de ejecución del script de 10 minutos a 1.

Ejecutamos el siguiente comando para asi modificar el fichero crontab ```sudo crontab -u root -e```

Modificamos el primer paramentro, en vez de 10 lo cambiamos a 1.

<img width="638" alt="Screen Shot 2022-11-24 at 6 31 44 AM" src="https://user-images.githubusercontent.com/66915274/203701944-393bd687-8b9c-4643-9d59-4789361e314d.png">

22 ◦ Finalmente haz que el script deje de ejecutarse cuando el servidor se haya iniciado, pero sin modificar el script.

```sudo /etc/init.d/cron stop```

Si queremos que vuelva a ejecutarse:

```sudo /etc/init.d/cron start```
