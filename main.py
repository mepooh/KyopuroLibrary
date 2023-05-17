table = [
    ["d15e6a95-f63c-41e1-8ca4-9a1ab04e9ca6", "myg"],
    ["3a657ef7-704c-45b1-a6ce-be7188373868", "shr"],
    ["d1c410eb-5d60-474a-aee4-e4a7bffe4b59", "smj"],
    ["10e51aed-db38-4b67-9333-ff2fde7e5f43", "sht"],
    ["563f5ded-a950-475b-a355-4b0910fafd8f", "sng"],
    ["e797f21c-072e-4fd5-b7ba-b1ed5854cd9f", "mtb"],
    ["20b80da0-fe12-4718-884a-cbacbc1de8f0", "kmn"],
    ["f9fd2d15-a560-4cd1-910e-2295062bbb47", "knm"],
    ["1d72bb54-5ef4-4072-8770-a5e47390df76", "nag"],
    ["c5dd552e-a3c5-4dfa-9035-b36f63d967fc", "nod"],
    ["618e414c-a30a-4211-b5c4-1af9511cdc19", "aty"]
]

def search(key):
    for row in table:
        print(row[0])
        if row[0] is key:
            return row[1]
    return "not found"

s = input()

print(search(str(s)))