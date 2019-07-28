import Text.Printf

main::IO()
main = do
 name <- getLine
 salary <- readLn::IO Double
 bonus <- readLn:: IO Double
 
 let total = bonus*0.15 + salary

 printf "TOTAL = R$ %.2f\n" total