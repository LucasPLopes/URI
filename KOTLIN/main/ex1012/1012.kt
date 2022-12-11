package main.ex1012
import java.util.Scanner
import java.lang.Math

fun main(args:Array<String>){
  
  var (a,b,c) = readLine()!!.split(" ") 

  println("TRIANGULO: %.3f".format(t_ret(a, c)))
  println("CIRCULO: %.3f".format(cir(c)))
  println("TRAPEZIO: %.3f".format(trap(a, b, c)))
  println("QUADRADO: %.3f".format(quad(b)))
  println("RETANGULO: %.3f".format(ret(a, b)))
  
}

private fun t_ret(a:String, c:String) :Double = (a.toDouble()*c.toDouble()) / 2
private fun cir(c:String) :Double = Math.pow(c.toDouble(), 2.0) * 3.14159
private fun trap(a:String,b:String,c:String):Double =  ( (a.toDouble() + b.toDouble())* c.toDouble())/2.0
private fun quad(b:String):Double = Math.pow(b.toDouble(),2.0)
private fun ret(a:String,b:String) = a.toDouble()  * b.toDouble()


