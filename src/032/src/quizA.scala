object quizA {
  def main(args: Array[String]): Unit = {
    val a = scala.io.StdIn.readLine().toInt
    val b = scala.io.StdIn.readLine().toInt
    val n = scala.io.StdIn.readLine().toInt
    val i: Int = 1
    println(likenum(a, b, n, i))
  }
  def likenum(a: Int, b: Int, n: Int, i: Int): Int = {
    if (i % a == 0 && i % b == 0 && i >= n) i else likenum(a, b, n, i + 1)
  }
}
