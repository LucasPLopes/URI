package main.ex1002

import java.util.*

fun main(args:Array<String>){
    val sc = Scanner(System.`in`)
    val raio : String = sc.next()

    println("A=%.4f".format(area(raio.toDouble())))

}
fun area(raio:Double): Double{
    val n : Double = 3.14159
    return n * raio * raio  ;
}