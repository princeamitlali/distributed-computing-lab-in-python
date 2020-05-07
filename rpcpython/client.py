import xmlrpc.client

with xmlrpc.client.ServerProxy("http://localhost:8000/") as proxy:
	print("enter number to check even or odd")
	a = int(input())
	#print(a) 
	print("is even: %s" % str(proxy.is_even(a)))
   # print("100 is even: %s" % str(proxy.is_even(100)))

