import java.util.*;

fun main(args:Array<String>){
    val sc = Scanner(System.`in`);

    val a :String = sc.next()
    val b :String = sc.next()

    println("X = %d".format( soma(a.toInt(),b.toInt())))
}

fun soma(a:Int, b:Int):Int{
    return a + b
}