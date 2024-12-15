# 2024-12-09

## First-in First-out (FIFO)

A FIFO (First-In-First-Out) buffer is a type of buffer that stores data in a way that the first data stored in the buffer is the first data to be removed from the buffer. This is in contrast to a LIFO (Last-In-First-Out) buffer, in which the last data stored in the buffer is the first data to be removed. FIFO buffers are commonly used in computer systems to store data that is being transferred between different parts of the system.

Here is an example of a simple FIFO buffer implemented in Processing:

```processing
let position = { x: 0, y: 0 };
let positions = [];
let index = 0;

function setup() {
  createCanvas(windowWidth, windowHeight);
  position.x = width * 0.5;
  position.y = height * 0.5;
}

function draw() {

  background(220);

  noFill();
  beginShape();
  for (let i = 0; i < positions.length; i++) {
    vertex(positions[i].x, positions[i].y);
  }
  endShape();

  if (positions.length > 0) {
    if (random(3) < 1) {
      index += 1;
      if (index >= positions.length) {
        index = 0;
      }
    }

    circle(positions[index].x, positions[index].y, 50);
  }
}

function mouseDragged() {
  let newPosition = { x: mouseX, y: mouseY };
  positions.push(newPosition);
  if (positions.length > 30) {
    positions.shift();
  }
}


```

## Prototype 3D Model Color Combinations

![alt text](<./images/스크린샷 2024-12-06 13.36.04.png>) ![alt text](<./images/스크린샷 2024-12-06 13.36.13.png>) ![alt text](<./images/스크린샷 2024-12-06 13.39.09.png>) ![alt text](<./images/스크린샷 2024-12-06 13.40.20.png>) ![alt text](<./images/스크린샷 2024-12-06 13.42.01.png>) ![alt text](<./images/스크린샷 2024-12-06 13.43.16.png>)
