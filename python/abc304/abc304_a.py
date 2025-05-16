N = int(input())
year_list = []
for i in range(N):
  per_list = "per_list" + str(i)
  globals()[per_list] = [input("name :"), int(input("year :"))]
  #print(globals()[per_list][1])
  year_list.append(globals()[per_list][1])
  #print(year_list)
year_list.sort()
#print(year_list)

