class Solution:
    def duplicates(self, arr, n): 
     # code here
     flags = False
     
     array_dict = {}
     repeating_arr = []
     for a in arr:
         if a not in array_dict:
             array_dict[a] = 1
         else:
             array_dict[a] += 1
     for j in array_dict:
         if array_dict[j] > 1:
             flags = True
             repeating_arr.append(j)
     
     
     repeating_arr.sort()
    
     if not flags: return [-1]
     return repeating_arr



    	    


#{ 
 # Driver Code Starts
if(__name__=='__main__'):
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        res = Solution().duplicates(arr, n)
        for i in res:
            print(i,end=" ")
        print()



# } Driver Code Ends