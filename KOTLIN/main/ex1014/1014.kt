package main.ex1014
import java.util.Scanner

fun main(args:Array<String>){
  val sc = Scanner(System.`in`)
  val km:Int = sc.next().toInt()
  val lt:Double = sc.next().toDouble()

  println(saida(consumo(km, lt)))
  
}
private fun saida(res:Double):String = "%.3f km/l".format(res)
private fun consumo(km:Int, lt:Double):Double = km*1.0/lt