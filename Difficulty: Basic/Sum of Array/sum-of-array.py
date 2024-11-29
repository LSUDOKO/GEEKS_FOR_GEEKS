#User function Template for python3
class Solution:
	def _sum(self,arr):
	    sum=0
	    for i in arr:
	        sum=sum+i
	    return sum
 # Driver Code Starts
# Driver code
if __name__ == "__main__":
    tc = int(input())
    while tc > 0:
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob._sum(arr)
        print(ans)
        tc = tc - 1
        print("~")

# } Driver Code Ends