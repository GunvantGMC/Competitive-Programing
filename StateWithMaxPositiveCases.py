# Enter your code here. Read input from STDIN. Print output to STDOUT
class City:
    def __init__(self, cityId, stateName, cityName, noOfTests, noOfPositive):
        self.city_id = cityId
        self.state_name = stateName
        self.city_name = cityName
        self.no_of_tests = noOfTests
        self.no_of_positive = noOfPositive


class PandemicAnalysis:
    def __init__(self, analysisName, cityList):
        self.analysis_name = analysisName
        self.city_list = cityList

    def get_StateWithMaxPositiveCases(self):
        maxCases = 0
        stName = ""
        myDict = {}
        for tCt in self.city_list:
            ct = tCt
            maxCases = ct.no_of_positive
            stName = ct.state_name
            val = 0
            if stName in myDict.keys():
                val = myDict[stName]
            myDict.update({stName: maxCases+val})
        keys = list(myDict.keys())
        value = list(myDict.values())
        print(keys[value.index(max(value))])

    def get_citiesMoreThanPercentage(self, perc):
        newCityList = []
        for tcity in (self.city_list):
            city = tcity
            tPerc = (city.no_of_positive*100)/city.no_of_tests
            if(tPerc >= perc):
                newCityList.append(city)
        if(len(newCityList) == 0):
            print("No City recorded with the given percentage")
        else:
            for ct in newCityList:
                print("{} {}".format(ct.state_name, ct.city_name))


t = int(input(""))

cityList = []
while(t > 0):
    ctId = int(input(""))
    stNa = input("")
    ctNa = input("")
    noTe = int(input(""))
    noPs = int(input(""))
    tempCity = City(ctId, stNa, ctNa, noTe, noPs)
    cityList.append(tempCity)
    t -= 1
perc = int(input(""))
pandmcAnals = PandemicAnalysis("Pandemic Analysis", cityList)
pandmcAnals.get_StateWithMaxPositiveCases()
pandmcAnals.get_citiesMoreThanPercentage(perc)
