import os,re
data=[]
if os.path.exists("C:\\Users\\user\\Documents\\file.txt"):
    with open("C:\\Users\\user\\Documents\\file.txt",'r') as f:
            data = f.readlines()

result = re.findall(r"\"\w[a-zA-Z]+\"",str(data))
print(result)
f.close()