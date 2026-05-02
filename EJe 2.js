let cupoMaximo = 30
const calcularVacantes = function (cantidadAlumno){
    let vacante= cupoMaximo - cantidadAlumno
    return vacante
}
const estadoCurso = (vacante) => {
    if (vacante>0){
        return "Si quedan vacantes, quedan en total "+vacante+" cupos"
    }else {
        return "No quedan ninguna vacante"
    }
}
console.log(estadoCurso(calcularVacantes(18)))