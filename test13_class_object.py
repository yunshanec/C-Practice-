'''
class GetVolume(object):
	"""docstring for GetVolume"""
	def __init__(self, length,breadth,heigth):
		self.length = length
		self.breadth = breadth
		self.heigth = heigth
		super(GetVolume, self).__init__()
	
	def getvolume(self):
		return self.length*self.breadth*self.heigth

if __name__ == '__main__':
	boxVolume = GetVolume(6,7,8)
	volume = boxVolume.getvolume()
	print("box volume is {}.".format(volume))
'''
class Line(object):
	"""docstring for Line"""
	def __init__(self, length):
		super(Line, self).__init__()
		print("object is being created...")
		self.length = length

	def setLength(self,num):
		self.length = num

	def getLength(self):
		print(self.length)

	def __del__(self):
		print("object is being delete...")

if __name__ == '__main__':
	line = Line(10)
	line.getLength()

	line.setLength(5)
	line.getLength()
