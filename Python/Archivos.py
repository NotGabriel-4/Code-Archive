import os
import shutil

def mover_archivos_js(directorio_principal):
    # Obtén la lista de subdirectorios y archivos en el directorio principal
    _, directorios, _ = next(os.walk(directorio_principal))

    # Itera sobre los subdirectorios
    for directorio in directorios:
        directorio_completo = os.path.join(directorio_principal, directorio)

        # Obtén la lista de archivos en el subdirectorio
        _, _, archivos = next(os.walk(directorio_completo))

        # Itera sobre los archivos y mueve los archivos .js al directorio principal
        for archivo in archivos:
            if archivo.endswith(".js"):
                ruta_origen = os.path.join(directorio_completo, archivo)
                ruta_destino = os.path.join(directorio_principal, archivo)

                # Mueve el archivo
                shutil.move(ruta_origen, ruta_destino)
                print(f"Archivo {archivo} movido a {directorio_principal}")

# Especifica la ruta de la carpeta principal
carpeta_principal = "C:\\Users\\Gabriel\\Downloads\\Addons"

# Llama a la función para mover archivos .js
mover_archivos_js(carpeta_principal)
