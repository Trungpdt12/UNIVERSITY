
import filecmp

files = [("Req3.txt", "test3.txt"),
         ("Req4.txt", "test4.txt"),
         ("Req5.txt", "test5.txt"),
         ("Req6.txt", "test6.txt"),
         ("Req7.txt", "test7.txt"),
         ("Req8.txt", "test8.txt"),
         ("Req9.txt", "test9.txt")]

match = True
for file_pair in files:
    if not filecmp.cmp(file_pair[0], file_pair[1]):
        match = False
        print(f"Không trùng khớp: {file_pair[0]} và {file_pair[1]}")

if match:
    print("100% trùng khớp")
