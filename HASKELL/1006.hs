import Text.Printf
main::IO()
main = do
 a <- readLn ::IO Double
 b <- readLn ::IO Double
 c <- readLn ::IO Double
 let m =  (a*2.0 + b*3.0 + c*5.0)/10.0
 printf "MEDIA = %.1f\n" $ m