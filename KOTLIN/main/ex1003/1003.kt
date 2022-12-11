package main.ex1003
import java.util.Scanner

fun main(args:Array<String>){
    val sc = Scanner(System.`in`)
    
    var a :String = sc.next()
    var b :String = sc.next()
    var res : Int = 0

    res = soma(a.toInt(),b.toInt())
    println(saida(res))
}

fun soma(a: Int, b:Int ):Int = a + b

fun saida( vlr:Int):String{
    var resposta:String = "SOMA = ${vlr}"
    return resposta  
}