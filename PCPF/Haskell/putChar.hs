

main = do
 print(fmap (+7) (Just 10))
 print(fmap (+7) Nothing)