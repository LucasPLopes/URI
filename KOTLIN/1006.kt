import java.util.Scanner
 class Peso
{
    companion object{
        val a: Int = 2
        val b: Int = 3
        val c: Int = 5
    }
}

fun main(args:Array<String>){
    val sc = Scanner(System.`in`)
    
    var a : String = sc.next()
    var b : String = sc.next()
    var c : String = sc.next()

    println(saida(media(a.toDouble(),b.toDouble(),c.toDouble())))
}

fun saida(vlr:Double):String = "MEDIA = %.1f".format(vlr)
fun media(a:Double, b:Double, c:Double):Double =  (a * Peso.a + b * Peso.b + c*Peso.c) / 10.0


