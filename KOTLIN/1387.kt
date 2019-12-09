
fun main(args:Array<String>){
    
    while(true){
        val (sX, sY ) = readLine()!!.split(" ")
        var x: Int = sX.toInt()
        var y: Int = sY.toInt()

        if ( x == 0 && y == 0) break
            
        println("%d".format(x + y));	

    }

}