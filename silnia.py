poziomSilni = int(input("Podaj poziom silni: "))
input = int(input("Podaj n: "))
if input < 0:
  exit(True)
def silnia(n,k):
  helper = 1
  for i in range(n, 1, (poziomSilni - 2 * poziomSilni)):
    helper *= i
  print(input,"!"*poziomSilni,"=", helper)
silnia(input,poziomSilni)
