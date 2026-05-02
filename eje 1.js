let venta= prompt("Ingrese la cantidad de ventas realizadas: ")
let m = 0
let t = 0
for (i=0;i<venta;i++){
    let x = parseInt(prompt("Ingrese el importe de la venta: $"))
    if (x>10000){
        m = m+1
    }
    t = t + x
}
console.log("La cantidad de ventas realizadas es de: N°"+venta)
console.log("La cantidad de ventas mayores a $10.000 es de :"+t)
console.log("El total de las compras es de:"+t)