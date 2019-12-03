import java.util.Scanner

data class Media(val a: Double, val b: Double)
class Peso{
    companion object{
        val A: Double = 3.5
        val B: Double = 7.5
    }
}

fun main(args:Array<String>){
    val sc = Scanner(System.`in`)
    var a : Double = sc.next().toDouble()
    var b : Double = sc.next().toDouble()

    val fulano : Media = Media(a,b)

    println(saida(calcMedia(fulano)))

}

fun calcMedia(media:Media):Double = (media.a * Peso.A  + media.b * Peso.B)/11.0
fun saida(vlr :Double ):String = "MEDIA = %.5f".format(vlr)