# Problem definition: https://www.hackerrank.com/challenges/migratory-birds/problem

def initializeMemory(idBirds: list) -> dict:
  memory = {}
  for i in range(min(idBirds), max(idBirds) + 1):
    memory[str(i)] = 0
  return memory


def migratoryBirds(idBirds: list) -> int:
  max = idBirds[0]
  memory = initializeMemory(idBirds)
  for i in idBirds:
    memory[str(i)] = memory[str(i)] + 1
    if memory[str(i)] > memory[str(max)]:
      max = i
    elif memory[str(i)] == memory[str(max)]:
      if max > i:
        max = i

  return max


print(migratoryBirds([1, 1, 2, 2, 3])) # Expected output: 1   
print(migratoryBirds([1, 4, 4, 5, 5, 3])) # Expected output: 4
print(migratoryBirds([1, 2, 3, 4, 5, 4, 3, 2, 1, 3, 4])) # Expected output: 3