import brumski_cgpa


print("FIRST SEMESTER:\n")

#RSU_GET103
RSU_GET103: float = brumski_cgpa.getInput("Enter your RSU_GET103 score: ")
while RSU_GET103 < 0 or RSU_GET103 > 10:
    print("Score cannot be less than 0 or more that 100!")
    RSU_GET103: float = brumski_cgpa.getInput("Enter your RSU_GET103 score: ")
rs: str = brumski_cgpa.grade_calc(RSU_GET103)


#MTH101
MTH101: float = brumski_cgpa.getInput("Enter your MTH101 score: ")
while MTH101 < 0 or MTH101 > 100:
    print("Score cannot be less than 0 or more that 100!")
    MTH101: float = brumski_cgpa.getInput("Enter your MTH101 score: ")
mt: str = brumski_cgpa.grade_calc(MTH101)


#CPE111
CPE111: float = brumski_cgpa.getInput("Enter your CPE111 score: ")
while CPE111 < 0 or CPE111 > 100:
    print("Score cannot be less than 0 or more that 100!")
    CPE111: float = brumski_cgpa.getInput("Enter your CPE111 score: ")
cp: str = brumski_cgpa.grade_calc(CPE111)


#CHM101
CHM101: float = brumski_cgpa.getInput("Enter your CHM101 score: ")
while CHM101 < 0 or CHM101 > 100:
    print("Score cannot be less than 0 or more that 100!")
    CHM101: float = brumski_cgpa.getInput("Enter your CHM101 score: ")
c1: str = brumski_cgpa.grade_calc(CHM101)

#CHM107
CHM107: float = brumski_cgpa.getInput("Enter your CHM107 score: ")
while CHM107 < 0 or CHM107 > 100:
    print("Score cannot be less than 0 or more that 100!")
    CHM107: float = brumski_cgpa.getInput("Enter your CHM107 score: ")
c7: str = brumski_cgpa.grade_calc(CHM107)


#PHY101
PHY101: float = brumski_cgpa.getInput("Enter your PHY101 score: ")
while PHY101 < 0 or PHY101 > 100:
    print("Score cannot be less than 0 or more that 100!")
    PHY101: float = brumski_cgpa.getInput("Enter your PHY101 score: ")
p1: str = brumski_cgpa.grade_calc(PHY101)

#PHY107
PHY107: float = brumski_cgpa.getInput("Enter your PHY107 score: ")
while PHY107 < 0 or PHY107 > 100:
    print("Score cannot be less than 0 or more that 100!")
    PHY107: float = brumski_cgpa.getInput("Enter your PHY107 score: ")
p7: str = brumski_cgpa.grade_calc(PHY107)


#GET101
GET101: float = brumski_cgpa.getInput("Enter your GET101 score: ")
while GET101 < 0 or GET101 > 100:
    print("Score cannot be less than 0 or more that 100!")
    GET101: float = brumski_cgpa.getInput("Enter your GET101 score: ")
ge: str = brumski_cgpa.grade_calc(GET101)


#GST111
GST111: float = brumski_cgpa.getInput("Enter your GST111 score: ")
while GST111 < 0 or GST111 > 100:
    print("Score cannot be less than 0 or more that 100!")
    GST111: float = brumski_cgpa.getInput("Enter your GST111 score: ")
gs: str = brumski_cgpa.grade_calc(GST111)

print()

print(f"RSU-GET103: {rs}")
print(f"MTH101: {mt}")
print(f"CPE111: {cp}")
print(f"CHM101: {c1}")
print(f"CHM107: {c7}")
print(f"PHY101: {p1}")
print(f"PHY107: {p7}")
print(f"GET101: {ge}")
print(f"GST111: {gs}")