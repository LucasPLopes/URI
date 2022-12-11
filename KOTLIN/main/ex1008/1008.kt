package main.ex1008
import java.util.Scanner

fun main(args:Array<String>){
    val sc = Scanner(System.`in`)
    var n : Int = sc.next().toInt()
    var h : Int = sc.next().toInt()
    var p : Double = sc.next().toDouble()
    
    println(number(n))
    println(salary(h, p))

}

fun number(n:Int):String  ="NUMBER = $n"
fun salary(h:Int, p:Double):String = "SALARY = U$ %.2f".format(h * p)