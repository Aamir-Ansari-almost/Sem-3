import Data.Char

main = do
 putStrLn "What's your first name?"
 firstName <- getLine
 putStrLn "What's your last name?"
 lastName <- getLine
 let bigFirstName = map toUpper firstName
 let bigLastName =  map toUpper lastName
 putStrLn $ "hey " ++ bigFirstName ++ " " ++ bigLastName ++ ", how you doin'?"