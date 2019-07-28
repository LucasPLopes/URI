import Text.Printf

main::IO()
main = do
 
 number <- readLn::IO Double
 hours <- readLn::IO Double
 per_hour <- readLn::IO Double

 let salary = hours * per_hour

 printf "NUMBER = %.0f\nSALARY = U$ %.2f\n"  number salary

