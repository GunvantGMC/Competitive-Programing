class City:
    def __init__(self, picCode, name, population, area):
        self.picCode = int(picCode)
        self.name = name
        self.population = int(population)
        self.area = int(area)


class District:
    def __init__(self, districtName, cityList):
        self.districtName = districtName
        self.cityList = cityList

    def findMinimumCityByPinCode(self):
        minCity = min(self.cityList, key=lambda x: x.picCode)
        return minCity

    def sortCityByPopulation(self):
        populationArr = [x.population for x in self.cityList]
        populationArr.sort()
        if len(populationArr) == 0:
            return None
        else:
            return populationArr


t = int(input(""))
cityList = []
while(t > 0):
    picCode = int(input(""))
    name = input("")
    population = int(input(""))
    area = int(input(""))
    city = City(picCode, name, population, area)
    cityList.append(city)

    t -= 1

dis = District("Data", cityList)
minCity = dis.findMinimumCityByPinCode()
sortCity = dis.sortCityByPopulation()
print(minCity.picCode)
print(minCity.name)
print(minCity.population)
print(minCity.area)
if(sortCity == None):
    print("No Data Found")
else:
    for k in sortCity:
        print(k)
