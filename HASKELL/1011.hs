import Text.Printf

main::IO()
main = do
 r <- readLn::IO Double
 let pi  = 3.14159
 let volume = (4/3)*pi*r*r*r
 printf "VOLUME = %.3f\n" volume