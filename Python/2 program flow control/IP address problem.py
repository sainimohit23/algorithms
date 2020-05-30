ip = input("Enter the IP address : ")
seg_len = 0
seg = 1

for i in range(0, len(ip)):
    if ip[i] == '.':
        print("segment {} contains {} characters".format(seg, seg_len))
        seg += 1
        seg_len = 0
    else:
        seg_len += 1

if(ip[i] != '.'):
    print("segment {} contains {} characters".format(seg, seg_len))