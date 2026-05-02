let saldo = 50000
let d = 0
let r = 0
do {
    alert("Menu")
    alert("1--> Consultar saldo")
    alert("2 --> Depositar dinero")
    alert("3 --> Extraer Dinero")
    alert("4 --> Salir")
    let x = parseInt(prompt("Ingrese la opcion"))
    switch (x){
        case 1:
            console.log("Su saldo es de : $"+saldo)
            break
        case 2: 
            d = parseInt(prompt("Ingrese la cantidad a depositar: $"))
            let suma = 0
            suma = saldo + d
            break
        case 3: 
            let resta = 0
            r = parseInt(prompt("Ingrese la cantidad que desea retirar: -$ "))
            resta= saldo - r
            console.log("El saldo actual es de : $ "+resta)
            break
        case 4: 
            console.leg("Saliendo del Sistema...")
        default:
            console.log("Opcion Invalida")
    }
}while (x != 4 )
