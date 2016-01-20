import scala.collection.mutable

object quizB {
  def main(args: Array[String]): Unit = {
    val s, k = scala.io.StdIn.readLine()
    val hs = mutable.HashSet.empty[String]

    for (i <- 0 until s.length; j <- i+1 to s.length) {
      hs += s.substring(i, j)
    }
    val list = hs.toList filter(_.length == k.toInt)
    println(list.length)
  }
}
