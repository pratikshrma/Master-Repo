var x=0;
function setup()
{
    createCanvas(600,400);
  }
function draw()
{
    background(0);
    stroke(255);
    strokeWeight(4);
    noFill();
    ellipse(x,100,30,30);
    if(x<width)
    {
        x++;
    }

}