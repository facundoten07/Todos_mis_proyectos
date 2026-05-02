let cargoRevision = 1000
function calcularPresupuesto(respuesto,manoDeobra){
    let subtotal= respuesto + manoDeobra + cargoRevision
    console.log(subtotal)
}
console.log(calcularPresupuesto(12000, 8000))