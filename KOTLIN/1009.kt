import java.util.Scanner

fun main(args:Array<String>){
  val sc = Scanner(System.`in`)  

  val name :String = sc.next()
  var salary : Double = sc.next().toDouble()
  var sales : Double = sc.next().toDouble()
  
  println(saida(salaryPlusBonus(salary, sales)))
  
}

fun saida(vlr :Double ): String = "TOTAL = R$ %.2f".format(vlr)
fun salaryPlusBonus(salary:Double, sales:Double):Double =  salary + sales*.15