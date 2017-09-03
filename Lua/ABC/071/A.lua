x = io.read("*n")
a = io.read("*n")
b = io.read("*n")

if math.abs(x-a) < math.abs(x-b) then
    io.write("A\n")
else
    io.write("B\n")
end
