s = input().strip()

cnt = 0
cnt += s.count("Danil")
cnt += s.count("Olya")
cnt += s.count("Slava")
cnt += s.count("Ann")
cnt += s.count("Nikita")

if cnt == 1:
    print("YES")
else:
    print("NO")
