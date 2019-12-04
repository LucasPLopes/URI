import java.util.Scanner

fun main(args:Array<String>){
    val sc = Scanner(System.`in`)
    val qnt :Int = sc.next().toInt()
    var tmp:Int
    var counter:Int

     for(j in 0 until qnt)
    {
        tmp= 0
        counter=0
        val entrada: String = sc.next()!!
        for( i in 0 until entrada.length){
        if(entrada[i].toChar() == '<')
          tmp++
        if( entrada[i].toChar() =='>' && tmp > 0)
          {
              tmp--
              counter++
          }
        }
    println(counter)
}
}