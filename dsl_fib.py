def fibbonaci(array,records,target):
	fibn2=0
	fibn1=1
	fibn=fibn1 + fibn2
	
	while fibn<records:
		fibn2=fibn1
		fibn1=fibn
		fibn=fibn1 + fibn2
		
		
	offset= -1
	index =min(fibn2 +offset, records-1)
	if fibn==1 :
		return records-1
	while fibn !=1:
		if array[index]<target:
			offset = index
			fibn=fibn1
			fibn1=fibn2
			fibn2=fibn-fibn1
			index=min(fibn2+offset,records-1)
		elif array[index]>target:
			fibn=fibn2
			fibn1=fibn1-fibn2
			fibn2=fibn-fibn1
			index= min(fibn2 + offset,records-1)
			
		else:
			return index
		
	else:
		return -1
		
l=[1,2,3,5,8,13,21]
print(fibbonaci(l,len(l),13))
