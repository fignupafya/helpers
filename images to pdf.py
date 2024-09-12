import os
from img2pdf import convert
from mines import select_folder,files_in_path


dosyalar = files_in_path(select_folder("Select images folder"))
output_folder = select_folder("Select output path")
extension = ".png"
dosyalar = [i for i in dosyalar if i.endswith(extension)]
# print(dosyalar[0][-5:])
dosyalar.sort(key=lambda i:int(i.split("_page_")[1].removesuffix(extension)))
print(dosyalar)

converted_pdf = convert(dosyalar)

with open(os.path.join(output_folder,"merged_images.pdf"), "wb") as output_file:
    output_file.write(converted_pdf)

print("Images merged into a PDF successfully!")
