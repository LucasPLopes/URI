import Text.Printf
main::IO()
main = do
 c <- readLn::IO Double
 printf "A=%.4f\n" $ 3.14159*c*c