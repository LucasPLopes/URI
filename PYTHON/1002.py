def area(a):
	area = 3.14159 * (a**2)
	return area
	
a = float(input())

#entrada formata
print('A=%.4f' % area(a) ) #podemos passar a funcao dentro do print 
