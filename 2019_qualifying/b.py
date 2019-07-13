import math

while 1:
    h, w = map(int, input().split())
    if h == 0 and w == 0:
        break
    p = []
    for i in range(h):
        l = input()
        ss = []
        for j in range(len(l)):
            ss.append(l[j])
        p.append(ss)
    str = input()
    ss = []
    for i in range(len(str)):
        ss.append(str[i])
    str = ss


    cnt = 0 #文字数
    ans= 0  #anser
    s_len = len(str)  #文字数

    while(cnt != s_len):
        type = 0
        #first
        if cnt == 0:
            s_now = p[0][0]
            s_now_idx = [0]*2
            s_next = str[0]
            s_next_idx = [0]*2
            for i in range(h):
                for j in range(w):
                    if p[i][j] == s_next:
                        type = math.fabs(s_now_idx[0] - i)
                        type += math.fabs(s_now_idx[1] - j)
                        break

        else:
            s_now = str[cnt-1]
            s_now_idx = [0]*2
            s_next = str[cnt]
            s_next_idx = [0]*2
            for i in range(h):
                for j in range(w):
                    if p[i][j] == s_now:
                        s_now_idx[0] = i
                        s_now_idx[1] = j
                        break

            for i in range(h):
                for j in range(w):
                    if p[i][j] == s_next:
                        type = math.fabs(s_now_idx[0] - i)
                        type += math.fabs(s_now_idx[1] - j)
                        break
        ans += type
        ans += 1 #keytype ok
        cnt += 1
        if cnt == s_len:
            break
    print(int(ans))