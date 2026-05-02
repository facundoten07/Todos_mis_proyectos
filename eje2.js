let edad =parseInt(prompt("Ingrese su edad: "))
let menores =0
let mayores = 0
while(edad!=0){
    if (edad>=18){
        mayores++
    }else{
        menores++
    }
    edad =parseInt(prompt("Ingrese su edad: "))
}
console.log("La cantidad de personas que ingresaron son: "+mayores)
console.log("La cantidad de personas que se rechazaron son: "+menores)