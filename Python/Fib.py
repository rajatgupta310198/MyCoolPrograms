def fib(n):
	if n<=1:
		return 1;

	else:
		return fib(n-1)+fib(n-2)



num = int(input("Enter No. :"))
print("Fibonacci no. is %d" ,fib(num))