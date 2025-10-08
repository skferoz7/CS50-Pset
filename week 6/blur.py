from PIL import Image,ImageFilter
before=Image.open("courtyard.bmp")
after=before.filter(ImageFilter.BoxBlur(3))
after.save("op.bmp")
