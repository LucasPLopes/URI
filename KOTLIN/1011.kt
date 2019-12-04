
import java.util.Scanner
import java.lang.Math

fun main(args:Array<String>){
  val sc = Scanner(System.`in`) 
  val r: Double = sc.nextDouble()
  println(saida(volume(r)))

  
}
fun volume(r:Double):Double = Math.pow(r,3.0)* (4.0/3) * 3.14159
fun saida(vlr:Double ):String = "VOLUME = %.3f".format(vlr)