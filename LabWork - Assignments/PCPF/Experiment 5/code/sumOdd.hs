
sumOdd n | listSum n == 0 = print "EMPTY LIST"
	 | otherwise = print (listSum n)

listSum :: [Int]->Int
listSum n | n == [] = 0
          | odd(head n) = (head n) + listSum(tail n)
          | otherwise = 0 + listSum(tail n)