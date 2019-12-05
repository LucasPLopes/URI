import java.lang.Math

fun main(args:Array<String>){
    var (a,b,c) = readLine()!!.split(" ")
    var res:Int 
    res = ehMaior(a, b)
    res = ehMaior(res.toString(), c)
    
    println(saida(res))
  
}


private fun ehMaior(a:String,b:String) :Int
 = (a.toInt() + b.toInt() + Math.abs(a.toInt() - b.toInt()))/2

private fun saida(res:Int) :String = "%d eh o maior".format(res)