#User function Template for python3


class Solution:
    def missingNumber(self,array,n):
        # code here
        num_set=set(array)
        for i in range(1,n+1):
            if i not in num_set:
                return i
        return None
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3




t=int(input())
for _ in range(0,t):
    n=int(input())
    a=list(map(int,input().split()))
    s=Solution().missingNumber(a,n)
    print(s)
# } Driver Code Ends