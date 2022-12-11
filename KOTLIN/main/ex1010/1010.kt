package main.ex1010
fun main(args:Array<String>){
    val (a ,b ,c) = readLine()!!.split(" ")
    val (d, e, f) = readLine()!!.split(" ")
    var total: Double = 0.0
    
    total += valor(b,c)
    total += valor(e,f)

    println(saida(total))

}
fun saida(arg:Double):String = "VALOR A PAGAR: R$ %.2f".format(arg)
fun valor(quantidade:String, valor:String ):Double = quantidade.toInt() * valor.toDouble()