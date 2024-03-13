# User function Template for python3

class Solution:
    # Complete this function
    
    #Function to find equilibrium point in the array.
    def equilibriumPoint(self,A, N):
        # Your code here
        
        if N == 1:
            return 1
        RLsum = sum(A)
        Lsum = 0
        i = 0
        while i < N-2:
            Rsum = RLsum
          
            Lsum = Lsum + A[i]
            
            
            Rsum = Rsum - Lsum - A[i+1]
                
            if Lsum == Rsum:
                return i+2
            i = i+1
        return -1
                



#{ 
 # Driver Code Starts
# Initial Template for Python 3

import math


def main():

    T = int(input())

    while(T > 0):

        N = int(input())

        A = [int(x) for x in input().strip().split()]
        ob=Solution()

        print(ob.equilibriumPoint(A, N))

        T -= 1


if __name__ == "__main__":
    main()

# } Driver Code Ends