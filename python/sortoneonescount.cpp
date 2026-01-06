
n = int(input())
nums = list(map(int,input().split(' ')))

dic = {}
for num in nums:
    print(bin(num))
    count = bin(num).count('1')
    dic[num]=count

a = min(dic.values())
b = max(dic.values())

sort_nums = []
for i in range(a,b+1):
    for num in nums:
        if dic[num]==i:
            sort_nums.append(num)
print(sort_nums)


n = int(input())
nums = list(map(int, input().split()))

nums.sort(key=lambda x: bin(x).count('1'))

print(nums)
