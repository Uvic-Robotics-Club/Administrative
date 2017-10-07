# Rover Module: Cosine transform

### Project Lead:
[Gregory O'Hagan](https://github.com/Gregory-OHagan)

### Project status: 
In progress: See the Project Lead for more information.

### Project description:
An important part of image processing is to be able to extract frequency information from an image, and an NxN cosine transform is an effective representation that is still easy to work with. We need a module for forward and backward cosine transforms.

### Project constaints:
No restrictions on additional methods, blocking functions, or threading

### Required language: 
 * C++

### Key skills:
 * Image processing
 * Digital signal processing 

### Methods:
#### cosine_transform(Mat image, int N)
 * Parameters:
   * image: an image (greyscale or colour) with the data type “CV_8UC1”
   * N: the size of blocks to use for the discrete cosine transform
 * Return:
   * the transformed image with the data type “CV_32FC1”
 * Specifications:
   * Must accept any image size that is at least NxN pixels
   * Must clip each image direction to a multiple of N
   * Must accept any integer N from 1 to 12 (inclusive)
   * Must not throw any exceptions. If the image type is incorrect or smaller than NxN, return an empty Mat.
   * Must not modify the parameters


#### inverse_cosine_transform(Mat cosImg, int N)
 * Parameters:
   * cosImg: a cosine image of data type “CV_32FC1”
   * N: the side of the encoded blocks
 * Return:
   * the transformed image with the data type “CV_8UC1
 * Specifications:
   * Must accept images with dimensions of any positive integer multiple of N
   * Must accept any integer N from 1 to 12 (inclusive)
   * Must not throw any exceptions. If the image type is incorrect or the size is not an integer multiple of N, return an empty Mat.
   * Must not modify the parameters

#### Mute_channel(Mat cosImg, int cY, int cX, int N)
 * Parameters:
   * cosImg: an image encoded by a cosine transform
   * cY: the y coordinate of the channel to be muted (must be <= N)
   * cX: the x coordinate of the channel to be muted (must be <= N)
   * N: the size of blocks used for the transform
 * Return:
   * A new Mat object of identical to the input cosImg except for the specified channel, which will be set to all zeroes.
 * Specifications:
   * Must accept any integer N from 1 to 12 (inclusive)
   * Must not throw any exceptions
   * Must not modify the parameters
