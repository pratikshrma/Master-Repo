function setup()
{
    createCanvas(400,400);
    print('hello');
}
function draw()
{
    background(200,0,200);
    // the max value of RGB is (256,256,256)
    // now there is one thing known as gray scale when R=G=B it produces a grey image
    line(0,50,400,300);
    rectMode(CENTER);
    stroke(0,255,0);
    strokeWeight(4);//this is used to incresase the thickness of the borders
    fill(0,0,255);
    rect(200,200,100,100);
    // now color function can be background,fill(to fill any shape),stroke(outline),
    fill(255,0,0);
    ellipse(50,151,100,75);
}

