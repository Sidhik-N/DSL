
'''Write a Python program to compute following operations on String:
a) To display word with the longest length
b) To determines the frequency of occurrence of particular character in the string
c) To check whether given string is palindrome or not
d) To display index of first appearance of the substring
e) To count the occurrences of each word in a given string '''





def menu():
    sentence=str(input("enter the string   :")).lower()
    flag=1
    while flag==1:
        print("\nMenu : ")
        print("1.display the word with longest length")
        print("2.display of frequency of occurence in str")
        print("3.To check whether given string is palindrome or not")
        print("4.to display index of first occurence of the string")
        print("5.to count the occurence of each word from the str")
        print("6.Exit")
    
        choice=int(input("enter your choice from 1 to 6 "))
    
        if choice==1:
            longest(sentence)
            a=input("do you want to continue yes/no  :").lower()
            if a=="yes":
                flag=1
            else:
                flag=0
                print("thnx for using the program")
    
        elif choice==2:
            char(sentence)
            a=input("do you want to continue yes/no  :").lower()
            if a=="yes":
                flag=1
            else:
                flag=0
                print("thnx for using the program")
    
        elif choice==3:
            palindrome(sentence)
            a=input("do you want to continue yes/no  :").lower()
            if a=="yes":
                flag=1
            else:
                flag=0
                print("thnx for using the program")
            
        elif choice==4:
            first_index(sentence)
            a=input("do you want to continue yes/no  :").lower()
            if a=="yes":
                flag=1
            else:
                flag=0
                print("thnx for using the program")
            
        elif choice==5:
            count_words(sentence)
            a=input("do you want to continue yes/no  :").lower()
            if a=="yes":
                flag=1
            else:
                flag=0
                print("thnx for using the program")
        elif choice==6:
            flag=0
            print("thnx for using the program")
            break
            
        
        else:
            print("enter valid data")
            
            
def palindrome(sentence):
	b=sentence[::-1]
	if sentence==b:
		print("yes , this is a palindrome")
	else:
		print("no it is not a palindrome")
        
        
        
        
def longest(sentence):
	words=sentence.split()
	longest_word=""
	for z in words:
		if len(z)>len(longest_word):
			longest_word=z
	print('longest word of string is',longest_word)
	
	
def char(sentence):
	count=0
	s=input("enter the character ")
	for x in sentence:
		if x==s:
			count+=1
	print('occurence of ', s ,' is' ,count)
		
menu()
	
	
