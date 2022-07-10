function inverterTexto(texto){
    var textoInvertido = texto.split('');
    var t = "";
    for(var i = textoInvertido.length -1; i >= 0; i--){
        t = t + textoInvertido[i];
    } 

    return t;
}

console.log(inverterTexto('bola'));
