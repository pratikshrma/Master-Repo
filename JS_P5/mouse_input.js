function setup()
{
    // this only happens once
    createCanvas(400,400);
    background(0);
}
function draw()
{
    // this is kind of a true while loop;
    noStroke();
    ellipse(mouseX,mouseY,75,20);
    // so if you wanna put this ellipse wherre the mouse is so you can just use the built in function
    // that is mouseX and mouseY
}
function mousePressed()//this is also called an event and is also an built in function for the p5
{
    background(100,100,100);
}