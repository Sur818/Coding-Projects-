def list_sum(num_list):
	if len(num_list)==0:
		return 0
	else:
		return num_list5[0]+list_sum(num_list[1::])
		
print(list_sum([2,4,5,6]))