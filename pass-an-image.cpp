#include <iostream>
#include "brightener.h"

int main() {
    Image image;
    image.rows = 512;
    image.columns = 512;

    std::cout << "Generate an image" << std::endl;
    // Fill the array with random pixel values (0 to 255)
    for (int i = 0; i < 512; i++) {
        for (int j = 0; j < 512; j++) {
            int index = i * 512 + j;
            image.pixels[index] = rand() % 256;  // Random value between 0 and 255
        }
    }

	std::cout << "Brightening a 512 x 512 image\n";
    ImageBrightener brightener(image);
    int attenuatedCount = brightener.BrightenWholeImage();
    std::cout << "Attenuated " << attenuatedCount << " pixels\n";
}
