
import difflib

# Tạo danh sách các cặp tệp văn bản cần so sánh
file_pairs = [("Req3.txt", "test3.txt"), ("Req4.txt", "test4.txt"), ("Req5.txt", "test5.txt"), 
              ("Req6.txt", "test6.txt"), ("Req7.txt", "test7.txt"), ("Req8.txt", "test8.txt"), 
              ("Req9.txt", "test9.txt")]

# Duyệt qua các cặp tệp văn bản và kiểm tra xem chúng có khớp nhau hay không
num_matches = 0
for file_pair in file_pairs:
    file1_path, file2_path = file_pair
    print(f"Đang so sánh {file1_path} và {file2_path}...")

    with open(file1_path, 'r') as file1, open(file2_path, 'r') as file2:
        file1_lines = file1.readlines()
        file2_lines = file2.readlines()

        # Kiểm tra xem số dòng của hai tệp có bằng nhau không
        if len(file1_lines) != len(file2_lines):
            print("Số dòng của hai tệp không bằng nhau!")
            continue

        # Duyệt qua từng dòng của hai tệp và kiểm tra xem chúng có khớp nhau hay không
        for i, (file1_line, file2_line) in enumerate(zip(file1_lines, file2_lines)):
            file1_words = file1_line.split()
            file2_words = file2_line.split()

            # Kiểm tra xem hai danh sách từ của từng dòng có bằng nhau hay không
            if len(file1_words) != len(file2_words):
                print(f"{file1_path} và {file2_path} không khớp nhau ở dòng thứ {i+1}!")
                break

            # Kiểm tra xem các từ trong dòng của file1 có xuất hiện trong file2 hay không
            for j, word in enumerate(file1_words):
                if word not in file2_words:
                    print(f"{file1_path} và {file2_path} không khớp nhau ở dòng thứ {i+1}, từ thứ {j+1}!")
                    break
            else:
                num_matches += 1
                print(f"{file1_path} và {file2_path} khớp nhau ở dòng thứ {i+1}!")
    
    print()  # In một dòng trống để phân biệt giữa các cặp tệp

# Kiểm tra xem tất cả các cặp tệp đều khớp nhau hay không
if num_matches == len(file_pairs):
    print("100% trùng khớp")