## no capture
[]()->auto{...}

## capture by copy
[=]()->auto {..} not recomended it will take all value 
[a,b]()auto {..}  recomended it will only take the a and b

## capture by reference
[&a]()->auto {...} not recommended
[&a,&b]()->auto {..} recomended

## capture by copy and reference
[&,a]()->auto{...} a is caputre by copy everything else is captured by reference

[=,&a]()->auto {...}
 a is captured by reference and everything else is captured by copy

