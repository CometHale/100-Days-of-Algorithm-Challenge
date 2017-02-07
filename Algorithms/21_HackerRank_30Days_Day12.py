class Person:
    def __init__(self, firstName, lastName, idNumber):
        self.firstName = firstName
        self.lastName = lastName
        self.idNumber = idNumber
    def printPerson(self):
        print "Name:", self.lastName + ",", self.firstName
        print "ID:", self.idNumber


class Student(Person):
    
    def __init__(self,firstName,lastName,idNum,scores):
        self.firstName = firstName
        self.lastName = lastName
        self.idNumber = idNum
        self.scores = scores
    
    def calculate(self):
        sum = 0
        for score in self.scores:
            sum += score
        
        ave = sum / len(scores)
        
        if ave >= 90:
            grade =  "O"
        elif ave >= 80 and ave < 90:
            grade = "E"
        elif ave >= 70 and ave < 80:
            grade =  "A"
        elif ave >= 55 and ave < 70:
            grade =  "P"
        elif ave >= 40 and ave < 55:
            grade =  "D"
        elif ave < 40:
            grade = "T"
        return grade

line = raw_input().split()
firstName = line[0]
lastName = line[1]
idNum = line[2]
numScores = int(raw_input()) # not needed for Python
scores = map(int, raw_input().split())
s = Student(firstName, lastName, idNum, scores)
s.printPerson()
print "Grade:", s.calculate(