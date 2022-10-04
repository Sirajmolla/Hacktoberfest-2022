//intro to basic operations in scala List map 
import scala.collection.immutable._  
object MainObject{  
    def main(args:Array[String]){  
      // listmap elements Creating 
        var listMap = ListMap("egg"->"10","meat"->"500","chicken"->"300")    
        listMap.foreach{  
            case(key,value)=>println(key+"->"+value)  
        }  
        println(listMap("meat"))  
        var newListMap = listMap+("beaf"->"550")  
        newListMap.foreach {  
            case (key, value) => println (key + " -> " + value)  
        }     
    }  
}  
