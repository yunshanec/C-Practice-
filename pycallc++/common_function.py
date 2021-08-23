import ctypes
common_function = ctypes.cdll.LoadLibrary("./common_function.so")
result = common_function.add(3,4)
print(result)
