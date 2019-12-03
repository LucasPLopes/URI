import java.util.Scanner

fun main(args:Array<String>){
    val sc = Scanner(System.`in`)
    
    var a : Int = sc.next().toInt()
    var b : Int = sc.next().toInt()
    
    var res : Int
    res = prod(a, b)
    println(saida(res))

}


fun prod(a:Int,b:Int):Int = a * b 
fun saida(vlr:Int):String = "PROD = ${vlr}"