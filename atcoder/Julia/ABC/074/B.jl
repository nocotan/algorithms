n = parse(Int, readline())
k = parse(Int, readline())
x = parse.([Int], split(readline()))
println(sum(map(xi -> min(2xi, 2k - 2xi), x)))
