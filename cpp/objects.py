class Student:
    def __init__(self, roll_no=1, name="runjeeth", Course="cse"):
        self.roll_no = roll_no
        self.name = name
        self.Course = Course

    def showData(self):
        print("Roll no", self.roll_no)
        print("name ", self.name)
        print("Course ", self.Course)


student = Student()
student.showData()
