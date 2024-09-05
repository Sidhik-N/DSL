
'''Write a Python program to store first year percentage of students in array. Write
function for sorting array of floating point numbers in ascending order using
a) Selection Sort
b) Bubble sort and display top five scores.'''





def Selection_Sort(marks):
    passes=0
    for i in range(len(marks)):
    
        min_idx = i
        for j in range(i + 1, len(marks)):
            if marks[min_idx] > marks[j]:
                min_idx = j
        marks[i], marks[min_idx] = marks[min_idx], marks[i]
        passes+=1
    print("No . of passes are ",passes)
        
    print("Marks of students after performing Selection Sort on the list : ")
    for i in range(len(marks)):
        print(marks[i])



def Bubble_Sort(marks):
    n = len(marks)
    passes=0
    for i in range(n - 1):
        for j in range(0, n - i - 1):
            if marks[j] > marks[j + 1]:
                marks[j], marks[j + 1] = marks[j + 1], marks[j] 
        passes+=1
    print("no. of passes",passes)
    print("Top",len(marks),"Marks using bubble sort  are : ")
    print(*marks[::-1], sep="\n")        


marks=[]
n = int(input("Enter number of students whose marks are to be displayed : "))




for i in range(0, n):
    ele = int(input("enter the marks of the student: "))
    marks.append(ele) 

print("The marks of",n,"students are : ")
print(marks)

flag=1;
while flag==1:
    print("\n---------------MENU---------------")
    print("1. Selection Sort of the marks")
    print("2. Bubble Sort of the marks")
    print("3. Exit")
    ch=int(input("\n\nEnter your choice (from 1 to 3) : "))

    if ch==1:
        Selection_Sort(marks)
        a=input("\nDo you want to display top marks from the list (yes/no) : ")
        if a=='yes':
            (marks)
        else:
            print("\nThanks for using this program!")
            flag=0

    elif ch==2:
        Bubble_Sort(marks)
        a = input("\nDo you want to display top five marks from the list (yes/no) : ")
        if a == 'yes':
            (marks)
        else:
            print("\nThanks for using this program!")
            flag = 0

    elif ch==3:
        print("\nThanks for using this program!!")
        flag=0

    else:
        print("\nEnter a valid choice!!")
        print("\nThanks for using this program!!")
        flag=0
