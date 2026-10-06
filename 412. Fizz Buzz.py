class Solution:
    def fizzBuzz(self, n: int) -> list[str]:
        Ds = []

        for i in range(1, n + 1):
            if i % 3 == 0 and i % 5 == 0:
                Ds.append("FizzBuzz")
            elif i % 3 == 0:
                Ds.append("Fizz")
            elif i % 5 == 0:
                Ds.append("Buzz")
            else:
                Ds.append(str(i))

        return Ds
    
#Runtime:3ms - Beats 21.89%
#Memory: 19.47MB - Beats 86.39%
