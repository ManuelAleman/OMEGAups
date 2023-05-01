cmake_minimum_required(VERSION 3.25)
project(OMEGAUP)

set(CMAKE_CXX_STANDARD 14)

include_directories("algoritmos voraces")
include_directories(cmake-build-debug)

add_executable(OMEGAUP
        "algoritmos voraces/elProblemadelamochila.cpp"
        "algoritmos voraces/elProblemadelamochila.h"
        "algoritmos voraces/queFacilesDarCambio.cpp"
        "algoritmos voraces/queFacilesDarCambio.h"
        cmake-build-debug/watermelon.cpp
        cmake-build-debug/watermelon.h
        divisibilidad/divbisibilidadBasica.cpp
        divisibilidad/Divisibilidad11.cpp
        divisibilidad/factoresPrimos.cpp
        "estructura de datos/filaBancaria.cpp"
        "estructura de datos/formatosEnCafeteria.cpp"
        "estructura de datos/listaReservacion.cpp"
        "estructura de datos/maximoElePila.cpp"
        "estructura de datos/operandoConLista.cpp"
        extras/ABC.cpp
        extras/cajero.cpp
        extras/dibujarTache.cpp
        extras/diferenteCero.cpp
        extras/enterosPar.cpp
        extras/febrero.cpp
        extras/ladoCorto.cpp
        extras/masMenos.cpp
        extras/modaGCF.cpp
        extras/ordenandoNumeros.cpp
        extras/parImpar.cpp
        extras/postresDF.cpp
        extras/secuenciasLoco.cpp
        extras/supermercado.cpp
        extras/triangulo.cpp
        extras/triangulos.cpp
        "extras/ULAM ordenado.cpp"
        extras/watermelon.cpp
        ordenamiento/laFamiliadeBuddy.cpp
        ordenamiento/ordenamientoInverso.cpp
        ordenamiento/ordenamientoPorCantidad.cpp
        ordenamiento/wenaOrdenada.cpp
        recursion/evaluandoUnaFuncion.cpp
        recursion/evaluandoUnaFuncionAlgoRara.cpp
        recursion/recursionConMemorizacion.cpp
        velocidad10/anfibias.cpp
        velocidad10/batallaEspacial.cpp
        velocidad10/construyendoTrian.cpp
        velocidad10/contandoaeiou.cpp
        velocidad10/trianguloLoco.cpp
        Velocidad9/abuelitaHelado.cpp
        Velocidad9/examCard2.cpp
        Velocidad9/karelMetro.cpp
        Velocidad9/OfiTec.cpp
        Velocidad9/PEFMAT.cpp
        Velocidad9/recursion-ovi.cpp
        Velocidad9/roger.cpp
        Velocidad9/saltando.cpp
        Velocidad9/ultimoD.cpp recursion/boletoCamion.cpp extras/dolaresPesos.cpp extras/huyendoSerpiente.cpp velocidad10/pruebaMacro.cpp extras/encuentraMayor.cpp extras/areaTrapecio.cpp extras/hablandoRobots.cpp extras/try.cpp extras/intervireQ.cpp extras/interpreteLenguajeProgramacion.cpp extras/freddyyelCr.cpp extras/contarLetras.cpp extras/acomodarZapatillas.cpp extras/pociones.cpp)
