// into to collections in kotlin

fun main(args: Array<String>) {
  var list_of_names = listOf<String>("hello","world")
  var mutable_list_of_names = mutableListOf <String> ("hi","by")
  var mutable_array_list_of_names = arrayListOf <String> ("how","are","you")
  var map_of_names = mapOf <String,String> ("name" to "harsh" , "age" to "22" , "height" to "5.10")
  var hash_map_of_names = hashMapOf ("name" to "harsh" , 1 to "22" , 2 to "5.10")
 
 
    println(list_of_names)
    mutable_list_of_names.add("aggarwal")
    println(mutable_array_list_of_names)
    println(map_of_names["age"])
    println(hash_map_of_names[2])
    hash_map_of_names["cdoing"] = "blocks"
    println(hash_map_of_names)
 
 
}
