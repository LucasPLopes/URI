package main.ex1007
import java.util.Scanner

fun main(args:Array<String>){
    val sc = Scanner(System.`in`)

    var a :Int = sc.next().toInt()
    var b :Int = sc.next().toInt()
    var c :Int = sc.next().toInt()
    var d :Int = sc.next().toInt()

    println(saida(diff(a, b, c, d)))
}
fun saida(R:Int):String = "DIFERENCA = %d".format(R)
fun diff(A:Int, B:Int, C: Int ,D: Int):Int = (A * B - C * D)

