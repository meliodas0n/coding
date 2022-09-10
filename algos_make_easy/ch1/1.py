def main(string):
  return len(set(string)) == len(string)

string = input()
print(main(string))