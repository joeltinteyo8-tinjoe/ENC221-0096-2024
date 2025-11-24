class Roommate:
    def __init__(self, name, hobby, course, college, talent, age):
        self.name = name
        self.hobby = hobby
        self.course = course
        self.college = college
        self.talent = talent
        self.age = age

    def display_roommate_details(self):
        print("Display roommate details:")
        print(
            "name: ", self.name,
            "\nhobby: ", self.hobby,
            "\nCourse: ", self.course,
            "\ncollege: ", self.college,
            "\ntalent: ", self.talent,
            "\nage: ", self.age)
        

Isaiah_Timah = Roommate(
    name="Isaiah Timah",
    hobby="movies",
    course="water engineering",
    college="coetec",
    talent="basketball",
    age=20)


Isaiah_Timah.display_roommate_details()
