object quizC {
  def main(args: Array[String]) = {
    val sc = new java.util.Scanner(System.in)
    val n, k = sc.nextInt
    val list = List.fill(n)(sc.nextInt)
    val array = new Array[Int](n)
    if(list.contains(0)) println(n)
    else if(list.min >= k) println(0)
    else {
      for (i <- 0 to n-2) {
        array(i) = count(i, k, list) - i + 1
      }
      println(array.max)
    }
  }
  def count(i: Int, k: Int, list: List[Int]): Int = {
    if (list(i) * list(i+1)  > k) i
    else count(i+1, k / list(i), list)
  }
}
