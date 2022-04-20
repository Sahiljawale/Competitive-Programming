class Solution:
    def sumOddLengthSubarrays(self, arr: List[int]) -> int:
        ans=0
        for i in range(len(arr)+1):
            for j in range(i):
                if len(arr[j:i])%2!=0:
                    ans+=sum(arr[j:i])
        return ans
