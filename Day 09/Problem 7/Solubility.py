# cook your dish here
t=int(input())
for i in range(0,t):
    a = list(map(int, input().split()))
    ans = (a[1]+(100-a[0])*a[2])*10
    print(ans)