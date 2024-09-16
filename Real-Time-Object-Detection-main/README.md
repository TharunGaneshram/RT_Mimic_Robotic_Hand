# TensorFlow Object Detection - Object Recognition

This project implements a Object recognition system using TensorFlow and OpenCV. The unsupervised machine learning model accurately identifies and classifies objects in live video streams.

## Overview

- **Objective:**
  - Implement Object recognition using TensorFlow and OpenCV.

- **Structure:**
  - Utilizes TensorFlow Object Detection API.
  - Trained unsupervised ML model.
  - Live video processing with OpenCV.

## Development

- **Training Process:**
  - TensorFlow and OpenCV used for unsupervised model training.
  - Object Detection API employed for accurate identification and classification.

- **Setup:**
  - Clone the [TFODCourse repository](https://github.com/nicknochnack/TFODCourse).
  - Set up a virtual environment and install dependencies.

- **Data Collection:**
  - Use `1. Image Collection.ipynb` for image collection.
  - Manual division of images into `train` and `test` folders.

- **Training and Evaluation:**
  - Open `2. Training and Detection.ipynb` for training.
  - Tensorboard optionally used for model evaluation.

- **Credits:**
  - Inspired by the [Tensorflow Object Detection Walkthrough](https://github.com/nicknochnack/TFODCourse) by Nick Noach.
  - YouTube channel for a detailed course on custom object detection.

## How to Use

1. **Compile:**
   - Compile the provided code.

2. **Setup:**
   - Set up/activate the tfod3 virtual environment

4. **Running the Model:**
   - Open `2. Training and Detection.ipynb`.
   - Import dependencies and set up Path variables (Step 1)
   - Load Trained Model From Checkpoint (Step 8)
   - Run Step 9 with modified IMAGE_PATH for static image object detection
   - Run cell 2 of Step 10 to launch Real-Time Object Detection with your camera

5. **Updates for Future:**
   - Adding more annotated images of each object to testing and training sets for better classification
   - Incorporating GPU to increase speed of training, evaluation, and execution
   - Add more objects to the model
   - Configure the model to run with my VR Headset (so that I can feel like Iron Man)

Enjoy your facial recognition experience!
