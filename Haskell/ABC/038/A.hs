main :: IO ()
main = do
    x <- getLine
    putStrLn $ if last x == 'T'
        then "YES"
        else "NO"
