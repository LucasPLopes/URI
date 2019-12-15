import java.util.Scanner

fun main(args:Array<String>){
    val sc = Scanner(System.`in`)
    val consumo :Int = 12
    var tempo:Int
    var velocidade :Int
    var media:Double = 0.0


    tempo = sc.nextInt()
    velocidade = sc.nextInt()

    media = (velocidade*1.0 ) *  tempo
    media /=consumo

    println("%.3f".format(media))
}