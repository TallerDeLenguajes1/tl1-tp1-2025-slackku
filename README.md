## ¿Por qué es conveniente incluir el archivo *.gitignore*? ¿Cuándo se debe hacer?
Para evitar tener en el versionado de nuestro codigo cambios de archivos que son externos a nuestro proyecto, o que no es necesario publicarlo por cuestiones de seguridad. Ejemplo de esto seria en un proyecto en NodeJS, la carpeta */node_modules* o informacion sensible como claves de acceso de APIs, o variables del entorno de desarrollo no necesarias. En sintesis, sirve para resguardar informacion sensible o ignorar archivos externos a nuestro proyecto.

## ¿Cómo configuraría el archivo *.gitignore*?
En dicho archivo se enuncia el resto de archivos o carpetas, ya sea de forma directa siguiendo la ubicacion del mismo, o para cualquier archivo que cumpla con las caracteristicas indicadas.

## ¿Cómo ignorar un archivo *ignorado.tt*?
Comenzando desde el vacio mismo debemos hacer lo siguiente:

1. Creamos el archivo *ignorado.txt* y el archivo *.gitignore*.
```
    touch ignorado.txt
    touch .gitignore
```
2. Dentro del archivo *.gitignore*, para ignorar el archivo creado *ignorado.txt*, debemos incluir lo siguiente:
```
ignorado.txt
```