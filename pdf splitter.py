import os
from PyPDF2 import PdfReader, PdfWriter
from mines import mines

def split_pdf(input_pdf, output_dir, pages_per_split=250):
    # Create the output directory if it doesn't exist
    if not os.path.exists(output_dir):
        os.makedirs(output_dir)

    # Open the input PDF
    pdf_reader = PdfReader(input_pdf)
    total_pages = len(pdf_reader.pages)
    # Split the PDF
    for i in range(0, total_pages, pages_per_split):
        pdf_writer = PdfWriter()
        for j in range(i, min(i + pages_per_split, total_pages)):
            pdf_writer.add_page(pdf_reader.pages[j])

        # Save the split PDF
        output_pdf_path = os.path.join(output_dir, f"{os.path.basename(input_pdf).rsplit('.',1)[0]}_split_{i // pages_per_split + 1}.pdf")
        with open(output_pdf_path, "wb") as output_pdf_file:
            pdf_writer.write(output_pdf_file)

        print(f"Created: {output_pdf_path}")


input_pdf = mines.select_file()
output_dir = mines.select_folder()
pages_per_split = 250

split_pdf(input_pdf, output_dir, pages_per_split)
