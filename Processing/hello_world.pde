PFont font;

void setup(){
  print("Hello World");
  size(200, 200);
  font = createFont("Arial", 16, true);
}

void draw(){
  background(255);
  textFont(font, 16);
  fill(0);
  text("Hello World", 60, 100);
}