import java.lang.Math

fun main(args:Array<String>){
    val (x1, y1) = readLine()!!.split(" ")
    val (x2, y2) = readLine()!!.split(" ")

    println("%.4f".format(distancia(x1, y1, x2, y2)))   
}

private fun distancia(x1:String,y1:String,x2:String,y2:String):Double
{
    
    return Math.pow(Math.pow(x2.toDouble() -x1.toDouble(),2.0) + Math.pow(y2.toDouble() -y1.toDouble(),2.0),.5)
    
}