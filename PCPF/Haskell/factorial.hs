fact :: Int -> Int

fact n | n == 0 = 1
fact n | n /= 0 = n * fact(n-1)
  