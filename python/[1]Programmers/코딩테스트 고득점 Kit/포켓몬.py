def solution(nums):
    answer = 0
    setNum = set(nums)
    pickCnt = int(len(nums)/2)

    if len(setNum) < pickCnt :
        answer = len(setNum)
    else :
        answer = pickCnt
    return answer
    
nums1 = [3,1,2,3] #2
nums2 = [3,3,3,2,2,4] #3
nums3 = [3,3,3,2,2,2] #2

print(solution(nums1))
print(solution(nums2))
print(solution(nums3))
