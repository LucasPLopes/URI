import Text.Printf
main::IO()
main = do
 a <- readLn::IO Int
 b <- readLn::IO Int
 printf "SOMA = %i\n" $ a+b